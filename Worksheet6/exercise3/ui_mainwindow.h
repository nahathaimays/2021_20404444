/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKOpenGLWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFileOpen;
    QAction *actionFileSave;
    QAction *actionHelp;
    QAction *actionPrint;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout;
    QVTKOpenGLWidget *qvtkWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSlider *LightIntensity;
    QCheckBox *shrinkfilter;
    QCheckBox *clipfilter;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QLabel *Model;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QLabel *RedM;
    QSlider *RModel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *GreenM;
    QSlider *GModel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *BlueM;
    QSlider *BModel;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QLabel *Background;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *RBack;
    QSlider *RBackground;
    QHBoxLayout *horizontalLayout_10;
    QLabel *GBack;
    QSlider *GBackground;
    QHBoxLayout *horizontalLayout_11;
    QLabel *BlueBack;
    QSlider *BBackground;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *ResetCamera;
    QPushButton *ChangeCube;
    QPushButton *ChangeCylinder;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(826, 653);
        actionFileOpen = new QAction(MainWindow);
        actionFileOpen->setObjectName(QString::fromUtf8("actionFileOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileOpen->setIcon(icon);
        actionFileSave = new QAction(MainWindow);
        actionFileSave->setObjectName(QString::fromUtf8("actionFileSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileSave->setIcon(icon1);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon2);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qvtkWidget = new QVTKOpenGLWidget(centralwidget);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        qvtkWidget->setMinimumSize(QSize(600, 400));

        verticalLayout->addWidget(qvtkWidget);


        verticalLayout_9->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        LightIntensity = new QSlider(centralwidget);
        LightIntensity->setObjectName(QString::fromUtf8("LightIntensity"));
        LightIntensity->setMaximum(99);
        LightIntensity->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(LightIntensity);

        shrinkfilter = new QCheckBox(centralwidget);
        shrinkfilter->setObjectName(QString::fromUtf8("shrinkfilter"));

        verticalLayout_2->addWidget(shrinkfilter);

        clipfilter = new QCheckBox(centralwidget);
        clipfilter->setObjectName(QString::fromUtf8("clipfilter"));

        verticalLayout_2->addWidget(clipfilter);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        Model = new QLabel(centralwidget);
        Model->setObjectName(QString::fromUtf8("Model"));

        horizontalLayout_7->addWidget(Model);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_8->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        RedM = new QLabel(centralwidget);
        RedM->setObjectName(QString::fromUtf8("RedM"));

        horizontalLayout->addWidget(RedM);

        RModel = new QSlider(centralwidget);
        RModel->setObjectName(QString::fromUtf8("RModel"));
        RModel->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(RModel);


        verticalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        GreenM = new QLabel(centralwidget);
        GreenM->setObjectName(QString::fromUtf8("GreenM"));

        horizontalLayout_2->addWidget(GreenM);

        GModel = new QSlider(centralwidget);
        GModel->setObjectName(QString::fromUtf8("GModel"));
        GModel->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(GModel);


        verticalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        BlueM = new QLabel(centralwidget);
        BlueM->setObjectName(QString::fromUtf8("BlueM"));

        horizontalLayout_3->addWidget(BlueM);

        BModel = new QSlider(centralwidget);
        BModel->setObjectName(QString::fromUtf8("BModel"));
        BModel->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(BModel);


        verticalLayout_8->addLayout(horizontalLayout_3);


        verticalLayout_10->addLayout(verticalLayout_8);


        horizontalLayout_4->addLayout(verticalLayout_10);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        Background = new QLabel(centralwidget);
        Background->setObjectName(QString::fromUtf8("Background"));

        horizontalLayout_8->addWidget(Background);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_12->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        RBack = new QLabel(centralwidget);
        RBack->setObjectName(QString::fromUtf8("RBack"));

        horizontalLayout_9->addWidget(RBack);

        RBackground = new QSlider(centralwidget);
        RBackground->setObjectName(QString::fromUtf8("RBackground"));
        RBackground->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(RBackground);


        verticalLayout_12->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        GBack = new QLabel(centralwidget);
        GBack->setObjectName(QString::fromUtf8("GBack"));

        horizontalLayout_10->addWidget(GBack);

        GBackground = new QSlider(centralwidget);
        GBackground->setObjectName(QString::fromUtf8("GBackground"));
        GBackground->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(GBackground);


        verticalLayout_12->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        BlueBack = new QLabel(centralwidget);
        BlueBack->setObjectName(QString::fromUtf8("BlueBack"));

        horizontalLayout_11->addWidget(BlueBack);

        BBackground = new QSlider(centralwidget);
        BBackground->setObjectName(QString::fromUtf8("BBackground"));
        BBackground->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(BBackground);


        verticalLayout_12->addLayout(horizontalLayout_11);


        horizontalLayout_4->addLayout(verticalLayout_12);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        ResetCamera = new QPushButton(centralwidget);
        ResetCamera->setObjectName(QString::fromUtf8("ResetCamera"));

        verticalLayout_4->addWidget(ResetCamera);

        ChangeCube = new QPushButton(centralwidget);
        ChangeCube->setObjectName(QString::fromUtf8("ChangeCube"));

        verticalLayout_4->addWidget(ChangeCube);

        ChangeCylinder = new QPushButton(centralwidget);
        ChangeCylinder->setObjectName(QString::fromUtf8("ChangeCylinder"));

        verticalLayout_4->addWidget(ChangeCylinder);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_9->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_9);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 826, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionFileOpen);
        menuFile->addAction(actionFileSave);
        toolBar->addAction(actionFileOpen);
        toolBar->addAction(actionFileSave);
        toolBar->addAction(actionHelp);
        toolBar->addAction(actionPrint);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFileOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionFileSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Light Intensity", nullptr));
        shrinkfilter->setText(QCoreApplication::translate("MainWindow", "Apply shrink filter", nullptr));
        clipfilter->setText(QCoreApplication::translate("MainWindow", "Apply clip filter", nullptr));
        Model->setText(QCoreApplication::translate("MainWindow", "Model", nullptr));
        RedM->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        GreenM->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        BlueM->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        Background->setText(QCoreApplication::translate("MainWindow", "Background", nullptr));
        RBack->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        GBack->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        BlueBack->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        ResetCamera->setText(QCoreApplication::translate("MainWindow", "Reset Model View", nullptr));
        ChangeCube->setText(QCoreApplication::translate("MainWindow", "Change to Cube", nullptr));
        ChangeCylinder->setText(QCoreApplication::translate("MainWindow", "Change to Cylinder", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
