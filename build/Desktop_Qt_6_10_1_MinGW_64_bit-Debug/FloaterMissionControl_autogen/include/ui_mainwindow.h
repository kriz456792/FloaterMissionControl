/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *headerFrame;
    QFrame *bodyFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *leftPanel;
    QVBoxLayout *verticalLayout;
    QFrame *controlsFrame;
    QVBoxLayout *verticalLayout_4;
    QLabel *controlsTitleLabel;
    QFrame *controlsButtonFrame;
    QGridLayout *gridLayout;
    QPushButton *connectReceiverButton;
    QPushButton *syncTimeButton;
    QPushButton *startSessionButton;
    QPushButton *downloadDataButton;
    QPushButton *generateGraphButton;
    QPushButton *exportCsvButton;
    QFrame *receivedDataFrame;
    QFrame *rightPanel;
    QVBoxLayout *verticalLayout_3;
    QFrame *telemetryFrame;
    QFrame *graphFrame;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1650, 900);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        headerFrame = new QFrame(centralwidget);
        headerFrame->setObjectName("headerFrame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headerFrame->sizePolicy().hasHeightForWidth());
        headerFrame->setSizePolicy(sizePolicy);
        headerFrame->setMinimumSize(QSize(0, 80));
        headerFrame->setMaximumSize(QSize(16777215, 80));
        headerFrame->setFrameShape(QFrame::Shape::StyledPanel);
        headerFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_2->addWidget(headerFrame);

        bodyFrame = new QFrame(centralwidget);
        bodyFrame->setObjectName("bodyFrame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bodyFrame->sizePolicy().hasHeightForWidth());
        bodyFrame->setSizePolicy(sizePolicy1);
        bodyFrame->setFrameShape(QFrame::Shape::StyledPanel);
        bodyFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(bodyFrame);
        horizontalLayout->setObjectName("horizontalLayout");
        leftPanel = new QFrame(bodyFrame);
        leftPanel->setObjectName("leftPanel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leftPanel->sizePolicy().hasHeightForWidth());
        leftPanel->setSizePolicy(sizePolicy2);
        leftPanel->setMinimumSize(QSize(500, 0));
        leftPanel->setMaximumSize(QSize(500, 16777215));
        leftPanel->setFrameShape(QFrame::Shape::StyledPanel);
        leftPanel->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(leftPanel);
        verticalLayout->setObjectName("verticalLayout");
        controlsFrame = new QFrame(leftPanel);
        controlsFrame->setObjectName("controlsFrame");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(controlsFrame->sizePolicy().hasHeightForWidth());
        controlsFrame->setSizePolicy(sizePolicy3);
        controlsFrame->setMinimumSize(QSize(0, 170));
        controlsFrame->setMaximumSize(QSize(16777215, 170));
        controlsFrame->setFrameShape(QFrame::Shape::StyledPanel);
        controlsFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(controlsFrame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        controlsTitleLabel = new QLabel(controlsFrame);
        controlsTitleLabel->setObjectName("controlsTitleLabel");
        controlsTitleLabel->setMinimumSize(QSize(0, 35));
        controlsTitleLabel->setMaximumSize(QSize(16777215, 35));
        controlsTitleLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_4->addWidget(controlsTitleLabel);

        controlsButtonFrame = new QFrame(controlsFrame);
        controlsButtonFrame->setObjectName("controlsButtonFrame");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(controlsButtonFrame->sizePolicy().hasHeightForWidth());
        controlsButtonFrame->setSizePolicy(sizePolicy4);
        controlsButtonFrame->setFrameShape(QFrame::Shape::StyledPanel);
        controlsButtonFrame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(controlsButtonFrame);
        gridLayout->setObjectName("gridLayout");
        connectReceiverButton = new QPushButton(controlsButtonFrame);
        connectReceiverButton->setObjectName("connectReceiverButton");
        sizePolicy.setHeightForWidth(connectReceiverButton->sizePolicy().hasHeightForWidth());
        connectReceiverButton->setSizePolicy(sizePolicy);
        connectReceiverButton->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(connectReceiverButton, 0, 0, 1, 1);

        syncTimeButton = new QPushButton(controlsButtonFrame);
        syncTimeButton->setObjectName("syncTimeButton");
        sizePolicy.setHeightForWidth(syncTimeButton->sizePolicy().hasHeightForWidth());
        syncTimeButton->setSizePolicy(sizePolicy);
        syncTimeButton->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(syncTimeButton, 0, 1, 1, 1);

        startSessionButton = new QPushButton(controlsButtonFrame);
        startSessionButton->setObjectName("startSessionButton");
        sizePolicy.setHeightForWidth(startSessionButton->sizePolicy().hasHeightForWidth());
        startSessionButton->setSizePolicy(sizePolicy);
        startSessionButton->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(startSessionButton, 0, 2, 1, 1);

        downloadDataButton = new QPushButton(controlsButtonFrame);
        downloadDataButton->setObjectName("downloadDataButton");
        sizePolicy.setHeightForWidth(downloadDataButton->sizePolicy().hasHeightForWidth());
        downloadDataButton->setSizePolicy(sizePolicy);
        downloadDataButton->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(downloadDataButton, 1, 0, 1, 1);

        generateGraphButton = new QPushButton(controlsButtonFrame);
        generateGraphButton->setObjectName("generateGraphButton");
        sizePolicy.setHeightForWidth(generateGraphButton->sizePolicy().hasHeightForWidth());
        generateGraphButton->setSizePolicy(sizePolicy);
        generateGraphButton->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(generateGraphButton, 1, 1, 1, 1);

        exportCsvButton = new QPushButton(controlsButtonFrame);
        exportCsvButton->setObjectName("exportCsvButton");
        sizePolicy.setHeightForWidth(exportCsvButton->sizePolicy().hasHeightForWidth());
        exportCsvButton->setSizePolicy(sizePolicy);
        exportCsvButton->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(exportCsvButton, 1, 2, 1, 1);


        verticalLayout_4->addWidget(controlsButtonFrame);


        verticalLayout->addWidget(controlsFrame);

        receivedDataFrame = new QFrame(leftPanel);
        receivedDataFrame->setObjectName("receivedDataFrame");
        sizePolicy4.setHeightForWidth(receivedDataFrame->sizePolicy().hasHeightForWidth());
        receivedDataFrame->setSizePolicy(sizePolicy4);
        receivedDataFrame->setFrameShape(QFrame::Shape::StyledPanel);
        receivedDataFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(receivedDataFrame);


        horizontalLayout->addWidget(leftPanel);

        rightPanel = new QFrame(bodyFrame);
        rightPanel->setObjectName("rightPanel");
        rightPanel->setFrameShape(QFrame::Shape::StyledPanel);
        rightPanel->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(rightPanel);
        verticalLayout_3->setObjectName("verticalLayout_3");
        telemetryFrame = new QFrame(rightPanel);
        telemetryFrame->setObjectName("telemetryFrame");
        sizePolicy3.setHeightForWidth(telemetryFrame->sizePolicy().hasHeightForWidth());
        telemetryFrame->setSizePolicy(sizePolicy3);
        telemetryFrame->setMinimumSize(QSize(0, 310));
        telemetryFrame->setMaximumSize(QSize(16777215, 310));
        telemetryFrame->setFrameShape(QFrame::Shape::StyledPanel);
        telemetryFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_3->addWidget(telemetryFrame);

        graphFrame = new QFrame(rightPanel);
        graphFrame->setObjectName("graphFrame");
        sizePolicy4.setHeightForWidth(graphFrame->sizePolicy().hasHeightForWidth());
        graphFrame->setSizePolicy(sizePolicy4);
        graphFrame->setFrameShape(QFrame::Shape::StyledPanel);
        graphFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_3->addWidget(graphFrame);


        horizontalLayout->addWidget(rightPanel);


        verticalLayout_2->addWidget(bodyFrame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1650, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        controlsTitleLabel->setText(QCoreApplication::translate("MainWindow", "Controls", nullptr));
        connectReceiverButton->setText(QCoreApplication::translate("MainWindow", "Connect Receiver", nullptr));
        syncTimeButton->setText(QCoreApplication::translate("MainWindow", "Sync Time", nullptr));
        startSessionButton->setText(QCoreApplication::translate("MainWindow", "Start Session", nullptr));
        downloadDataButton->setText(QCoreApplication::translate("MainWindow", "Download Data", nullptr));
        generateGraphButton->setText(QCoreApplication::translate("MainWindow", "Generate Graph", nullptr));
        exportCsvButton->setText(QCoreApplication::translate("MainWindow", "Export CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
