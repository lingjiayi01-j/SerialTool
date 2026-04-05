#include "mainwindow.h"
#include <QApplication>
#include <QThread>
#include <QDebug>

int main(int argc, char *argv[])
{
    // 创建 Qt 应用程序对象
    QApplication a(argc, argv);

    // 创建主窗口
    MainWindow w;
    w.show();

    // 输出主线程 ID（Qt 标准格式）
    qDebug() << "主线程 ID：" << QThread::currentThreadId();

    // 启动 Qt 事件循环
    return a.exec();
}
