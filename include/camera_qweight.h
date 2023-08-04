#ifndef CAMERA_QWEIGHT_H
#define CAMERA_QWEIGHT_H

#include <QWidget>
#include <QThread>
#include "qpainter.h"
#include <opencv2/opencv.hpp>


QImage cvMat2QImage(const cv::Mat& mat);

class camera_thread : public QThread
{
    Q_OBJECT
public:
    explicit camera_thread(QObject *parent = nullptr);
    QString camera_source;

protected:
    void run();

private:
    volatile bool isPlay;           //播放视频标志位
    volatile bool stopped;
    int deviceID;
    cv::VideoCapture capture;
    cv::Mat frame;

signals:
    void receiveImage(QImage);


public slots:

    //播放视频对象
    void play();
    void stop();

};



class camera_qweight : public QWidget
{
    Q_OBJECT
private:
    camera_thread *my_camera_thread;
    QImage image;
    QImage defaut_image;

public:
    explicit camera_qweight(QWidget *parent = nullptr);

    void camera_open();
    void camera_close();
    void set_default_image(QImage image);
    void set_camera_source(QString _camera_source);



protected:
    void paintEvent(QPaintEvent *);

private slots:
    //接收图像并绘制
    void updateImage(const QImage &image);
    void clear();

signals:

};

#endif // CAMERA_QWEIGHT_H
