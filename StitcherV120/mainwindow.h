﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <setting.h>
#include <stitcher.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_setInputButton_clicked();

    void on_clearInputButton_clicked();

    void on_setOutputButton_clicked();

    void on_clearOutputButton_clicked();

    void on_startButton_clicked();

    void on_openButton_clicked();

    void on_stopButton_clicked();

    void on_locationButton_clicked();

    void on_setting_clicked();
    void about();
private:
    Ui::MainWindow *ui;
    setting *mySetting;
    stitcher *myStitcher;
    QStandardItemModel *inputModel;
    QStandardItemModel *outputModel;
    QStringList inputImages;
    QString outputImage;
};

#endif // MAINWINDOW_H
