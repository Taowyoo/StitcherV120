#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QDesktopServices>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Image Stitcher"));
    ui->openButton->setText(tr("Open Result Image"));
    ui->locationButton->setText(tr("Show Result Image in Exploer"));
    ui->startButton->setText(tr("Start Stitching"));
    ui->stopButton->setText(tr("Stop Stitching"));
    ui->setInputButton->setText(tr("Set Input Images"));
    ui->setOutputButton->setText(tr("Set Output Image"));
    ui->clearInputButton->setText(tr("Clear input images"));
    ui->clearOutputButton->setText(tr("Clear output image"));

    QAction *openResultAction = new QAction(tr("Open Result Image"),this);
    QAction *openLocationAction = new QAction(tr("Show Result Image in Exploer"),this);
    QAction *setInputAction = new QAction(tr("Set Input Images"),this);
    QAction *setOutputAction = new QAction(tr("Set Output Images"),this);
    QAction *exitAction = new QAction(tr("Exit"),this);
    QAction *aboutAction = new QAction(tr("About"),this);
    QAction *settingAction = new QAction(tr("Setting"),this);

    connect(openResultAction,SIGNAL(triggered(bool)),this,SLOT(on_openButton_clicked()));
    connect(openLocationAction,SIGNAL(triggered(bool)),this,SLOT(on_locationButton_clicked()));
    connect(setInputAction,SIGNAL(triggered(bool)),this,SLOT(on_setInputButton_clicked()));
    connect(setOutputAction,SIGNAL(triggered(bool)),this,SLOT(on_setOutputButton_clicked()));
    connect(exitAction,SIGNAL(triggered(bool)),this,SLOT(close()));
    //connect(aboutAction,SIGNAL(triggered(bool)),this,SLOT(close()));
    //connect(settingAction,SIGNAL(triggered(bool)),this,SLOT(close()));

    QMenu *file = new QMenu(tr("File"),this);
    QMenu *setting = new QMenu(tr("Setting"),this);
    QMenu *about = new QMenu(tr("About"),this);

    file->addAction(setInputAction);
    file->addAction(setOutputAction);
    file->addAction(openResultAction);
    file->addAction(openLocationAction);
    file->addAction(exitAction);
    setting->addAction(settingAction);
    about->addAction(aboutAction);

    ui->menuBar->addMenu(file);
    ui->menuBar->addMenu(setting);
    ui->menuBar->addMenu(about);


    ui->mainToolBar->addAction(setInputAction);
    ui->mainToolBar->addAction(setOutputAction);
    ui->mainToolBar->addAction(openResultAction);
    ui->mainToolBar->addAction(openLocationAction);
    ui->mainToolBar->addAction(settingAction);
    ui->mainToolBar->addAction(aboutAction);

    inputModel = new QStandardItemModel();
    outputModel = new QStandardItemModel();
    inputModel->setColumnCount(4);
    outputModel->setColumnCount(3);
    inputModel->setHeaderData(0,Qt::Horizontal,tr("File Name"));
    inputModel->setHeaderData(1,Qt::Horizontal,tr("Type"));
    inputModel->setHeaderData(2,Qt::Horizontal,tr("Size(KB)"));
    inputModel->setHeaderData(3,Qt::Horizontal,tr("Path"));

    outputModel->setHeaderData(0,Qt::Horizontal,tr("File Name"));
    outputModel->setHeaderData(1,Qt::Horizontal,tr("Type"));
    outputModel->setHeaderData(2,Qt::Horizontal,tr("Path"));
    ui->inputtableView->setModel(inputModel);
    ui->outputtableView->setModel(outputModel);
    //表头信息显示居左
    ui->inputtableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->outputtableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);

    ui->inputtableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->outputtableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->inputtableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->outputtableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_setInputButton_clicked()
{
    inputImages = QFileDialog::getOpenFileNames(
                this,
                "Select two or more images to stitch",
                ".",
                "Images (*.png *.tif *.jpg)");
    qDebug() << inputImages;

    for(int i = 0; i < inputImages.size(); ++i)
    {
        QFileInfo fileInfo(inputImages[i]);
        QString fname = fileInfo.fileName().left(fileInfo.fileName().indexOf("."));


        inputModel->setItem(i,0,new QStandardItem(fname));
        //设置字符颜色
        //inputModel->item(i,0)->setForeground(QBrush(QColor(255, 0, 0)));
        //设置字符位置
        //inputModel->item(i,0)->setTextAlignment(Qt::AlignCenter);
        inputModel->setItem(i,1,new QStandardItem(fileInfo.suffix()));
        QString fsize;
        inputModel->setItem(i,2,new QStandardItem(fsize.setNum(fileInfo.size()/1024.0,'f',3)));
        inputModel->setItem(i,3,new QStandardItem(fileInfo.absoluteFilePath()));
    }

}

void MainWindow::on_clearInputButton_clicked()
{
    inputModel->removeRows(0,inputModel->rowCount());
    inputImages.clear();
}

void MainWindow::on_setOutputButton_clicked()
{
    outputImage = QFileDialog::getSaveFileName(this, tr("Set output image"),
                                "./result.tif",
                                tr("Images (*.png *.tif *.jpg)"));
    QFileInfo fileInfo(outputImage);
    QString fname = fileInfo.fileName().left(fileInfo.fileName().indexOf("."));
    outputModel->setItem(0,0,new QStandardItem(fname));
    //设置字符颜色
    //inputModel->item(i,0)->setForeground(QBrush(QColor(255, 0, 0)));
    //设置字符位置
    //inputModel->item(i,0)->setTextAlignment(Qt::AlignCenter);
    outputModel->setItem(0,1,new QStandardItem(fileInfo.suffix()));
    outputModel->setItem(0,2,new QStandardItem(fileInfo.absoluteFilePath()));
}

void MainWindow::on_clearOutputButton_clicked()
{
    outputModel->removeRows(0,outputModel->rowCount());
    outputImage.clear();
}

void MainWindow::on_startButton_clicked()
{

}

void MainWindow::on_openButton_clicked()
{
    if(outputImage.isEmpty())
        {
            QMessageBox mesg;
            mesg.warning(this,"Warning","Fail to open the Image\nImage path is empty");
            return;
        }
    if(! QDesktopServices::openUrl(QUrl::fromLocalFile(QFileInfo(outputImage).absoluteFilePath()))){
        QMessageBox mesg;
        mesg.warning(this,"Warning","Fail to open the Image\nImage doesn't exist!");
        return;
    }

}

void MainWindow::on_stopButton_clicked()
{

}

void MainWindow::on_locationButton_clicked()
{
    if(outputImage.isEmpty())
        {
            QMessageBox mesg;
            mesg.warning(this,"Warning","Fail to open the Image\nImage path is empty");
            return;
        }
    QDesktopServices::openUrl(QUrl::fromLocalFile(QFileInfo(outputImage).absolutePath()));
}
