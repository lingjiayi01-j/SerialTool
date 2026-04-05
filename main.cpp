#include "mainwindow.h"
#include <QApplication>
#include <QThread>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // 输出主线程ID
    qDebug() << QThread::currentThreadId();

    return a.exec();
}
