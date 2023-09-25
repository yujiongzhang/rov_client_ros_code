#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // int argc=0;
    // char **argv=NULL;
    rclcpp::init(argc, argv);
    
    MainWindow w;
    w.show();
    return a.exec();
}
