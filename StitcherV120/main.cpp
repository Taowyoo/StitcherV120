#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator; //新建翻译类
    translator.load("stitcher_zh_CN"); //导入生成的文件
    a.installTranslator(&translator); //装入
    MainWindow w;
    w.show();

    return a.exec();
}
