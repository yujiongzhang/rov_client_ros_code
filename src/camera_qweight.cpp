#include "camera_qweight.h"
#include<QDebug>
#include <QTimer>


camera_qweight::camera_qweight(QWidget *parent)
    : QWidget{parent}
{
    my_camera_thread = new camera_thread;
    connect(my_camera_thread, SIGNAL(receiveImage(QImage)), this, SLOT(updateImage(QImage)));
    image = QImage();
    defaut_image = QImage();
}

void camera_qweight::camera_open()
{
    // if(my_camera_thread->camera_source != "PC_Camera"){
        // if(isPingable(my_camera_thread->camera_source.toStdString().c_str())){
            // my_camera_thread->play();
            // my_camera_thread->start();
        // }
        // else
        // {
        //     qDebug()<<"no camera :"<<my_camera_thread->camera_source;
        // }
        
    // }
    // else{
    //     my_camera_thread->play();
    //     my_camera_thread->start();
    // }
    my_camera_thread->play();
    my_camera_thread->start();

}

void camera_qweight::camera_close()
{
    if (my_camera_thread->isRunning()) {
        my_camera_thread->stop();
        my_camera_thread->quit();
        my_camera_thread->wait(500);
    }
    QTimer::singleShot(1, this, &camera_qweight::clear);
}

void camera_qweight::set_default_image(QImage image)
{
    this->defaut_image = image;
    updateImage(this->defaut_image);
}

void camera_qweight::set_camera_source(QString _camera_source)
{
    my_camera_thread->camera_source = _camera_source;
}

void camera_qweight::clear()
{
    image = QImage();
    update();
}

void camera_qweight::paintEvent(QPaintEvent *)
{
    if (image.isNull()) {
        return;
    }
    QPainter painter(this);
    painter.drawImage(this->rect(), image);
}

void camera_qweight::updateImage(const QImage &image)
{
    this->image = image;
    this->update();
}


camera_thread::camera_thread(QObject *parent): QThread(parent)
{
    isPlay = false;
    stopped = false;
    camera_source = "PC_Camera";
}

void camera_thread::run()
{
    if (camera_source == "PC_Camera")
    {
        deviceID = 0;
        capture.open(deviceID);
    }
    else{
        capture.open(camera_source.toStdString());
    }
    


    if (!capture.isOpened()) //判断相机是否打开
    {
        std::cerr << "ERROR!!Unable to open camera\n";
    }
    while (!stopped) {
        //根据标志位执行初始化操作
        if (isPlay) {
//            this->init();
            isPlay = false;
            continue;
        }
        capture.read(frame);
//        cv::imshow("读取视频", frame);
        cv::cvtColor(frame, frame, cv::COLOR_BGR2BGRA);
        QImage qimage = cvMat2QImage(frame);
        emit receiveImage(qimage);
    }
//    //线程结束后释放资源
    stopped = false;
    isPlay = false;
    capture.release();

}

void camera_thread::play()
{
    this->isPlay = true;
}

void camera_thread::stop()
{
    stopped = true;
}


QImage cvMat2QImage(const cv::Mat& mat)
{
    // 8-bits unsigned, NO. OF CHANNELS = 1
    if(mat.type() == CV_8UC1)
    {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to translate colour indexes to qRgb values)
        image.setColorCount(256);
        for(int i = 0; i < 256; i++)
        {
            image.setColor(i, qRgb(i, i, i));
        }
        // Copy input Mat
        uchar *pSrc = mat.data;
        for(int row = 0; row < mat.rows; row ++)
        {
            uchar *pDest = image.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
    // 8-bits unsigned, NO. OF CHANNELS = 3
    else if(mat.type() == CV_8UC3)
    {
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else if(mat.type() == CV_8UC4)
    {
//        qDebug() << "CV_8UC4";
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
        return image.copy();
    }
    else
    {
        qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }
}

