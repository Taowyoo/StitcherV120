/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *setInputButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearInputButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *setOutputButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *clearOutputButton;
    QPushButton *stopButton;
    QPushButton *locationButton;
    QPushButton *openButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *startButton;
    QTableView *inputtableView;
    QTableView *outputtableView;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(788, 513);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(8);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        setInputButton = new QPushButton(centralWidget);
        setInputButton->setObjectName(QStringLiteral("setInputButton"));

        horizontalLayout->addWidget(setInputButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clearInputButton = new QPushButton(centralWidget);
        clearInputButton->setObjectName(QStringLiteral("clearInputButton"));

        horizontalLayout->addWidget(clearInputButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        setOutputButton = new QPushButton(centralWidget);
        setOutputButton->setObjectName(QStringLiteral("setOutputButton"));

        horizontalLayout_2->addWidget(setOutputButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        clearOutputButton = new QPushButton(centralWidget);
        clearOutputButton->setObjectName(QStringLiteral("clearOutputButton"));

        horizontalLayout_2->addWidget(clearOutputButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        gridLayout->addWidget(stopButton, 3, 0, 1, 1);

        locationButton = new QPushButton(centralWidget);
        locationButton->setObjectName(QStringLiteral("locationButton"));

        gridLayout->addWidget(locationButton, 3, 2, 1, 1);

        openButton = new QPushButton(centralWidget);
        openButton->setObjectName(QStringLiteral("openButton"));

        gridLayout->addWidget(openButton, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 1, 1, 1);

        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        gridLayout->addWidget(startButton, 2, 0, 1, 1);

        inputtableView = new QTableView(centralWidget);
        inputtableView->setObjectName(QStringLiteral("inputtableView"));

        gridLayout->addWidget(inputtableView, 1, 0, 1, 1);

        outputtableView = new QTableView(centralWidget);
        outputtableView->setObjectName(QStringLiteral("outputtableView"));

        gridLayout->addWidget(outputtableView, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 788, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        setInputButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        clearInputButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        setOutputButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        clearOutputButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        stopButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        locationButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        openButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        startButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
