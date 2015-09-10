/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Aug 27 15:53:36 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSlider>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Quit;
    QAction *action_SongList;
    QAction *action_Last;
    QAction *action_Next;
    QAction *action_Play;
    QAction *action_Stop;
    QAction *action_About;
    QAction *action_Support;
    QAction *action_Import;
    QAction *action_SoundPlus;
    QAction *action_SoundReduce;
    QAction *action_Mode1;
    QAction *action_Mode2;
    QAction *action_Mode3;
    QAction *action_Mode4;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_Last;
    QToolButton *toolButton_Play;
    QToolButton *toolButton_Stop;
    QToolButton *toolButton_Next;
    QSlider *horizontalSlider;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(536, 329);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/background/images/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_SongList = new QAction(MainWindow);
        action_SongList->setObjectName(QString::fromUtf8("action_SongList"));
        action_Last = new QAction(MainWindow);
        action_Last->setObjectName(QString::fromUtf8("action_Last"));
        action_Next = new QAction(MainWindow);
        action_Next->setObjectName(QString::fromUtf8("action_Next"));
        action_Play = new QAction(MainWindow);
        action_Play->setObjectName(QString::fromUtf8("action_Play"));
        action_Stop = new QAction(MainWindow);
        action_Stop->setObjectName(QString::fromUtf8("action_Stop"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Support = new QAction(MainWindow);
        action_Support->setObjectName(QString::fromUtf8("action_Support"));
        action_Import = new QAction(MainWindow);
        action_Import->setObjectName(QString::fromUtf8("action_Import"));
        action_SoundPlus = new QAction(MainWindow);
        action_SoundPlus->setObjectName(QString::fromUtf8("action_SoundPlus"));
        action_SoundReduce = new QAction(MainWindow);
        action_SoundReduce->setObjectName(QString::fromUtf8("action_SoundReduce"));
        action_Mode1 = new QAction(MainWindow);
        action_Mode1->setObjectName(QString::fromUtf8("action_Mode1"));
        action_Mode2 = new QAction(MainWindow);
        action_Mode2->setObjectName(QString::fromUtf8("action_Mode2"));
        action_Mode3 = new QAction(MainWindow);
        action_Mode3->setObjectName(QString::fromUtf8("action_Mode3"));
        action_Mode4 = new QAction(MainWindow);
        action_Mode4->setObjectName(QString::fromUtf8("action_Mode4"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(30, 30, 256, 256));
        graphicsView->setContextMenuPolicy(Qt::ActionsContextMenu);
        graphicsView->setStyleSheet(QString::fromUtf8("border-image: url(:/new/background/images/1.png);"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(310, 30, 201, 271));
        tableWidget->setAutoFillBackground(true);
        tableWidget->setStyleSheet(QString::fromUtf8("QHeaderView::section {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #616161, stop: 0.5 #505050,\n"
"                                      stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: red;\n"
"}\n"
"\n"
"/* style the sort indicator */\n"
"QHeaderView::down-arrow {\n"
"    image: url(down_arrow.png);\n"
"}\n"
"\n"
"QHeaderView::up-arrow {\n"
"    image: url(up_arrow.png);\n"
"}\n"
""));
        tableWidget->setFrameShape(QFrame::StyledPanel);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setGridStyle(Qt::DashLine);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(22, 272, 281, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_Last = new QToolButton(layoutWidget);
        toolButton_Last->setObjectName(QString::fromUtf8("toolButton_Last"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/background/images/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Last->setIcon(icon1);
        toolButton_Last->setIconSize(QSize(18, 18));
        toolButton_Last->setCheckable(false);
        toolButton_Last->setPopupMode(QToolButton::DelayedPopup);
        toolButton_Last->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_Last->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_Last);

        toolButton_Play = new QToolButton(layoutWidget);
        toolButton_Play->setObjectName(QString::fromUtf8("toolButton_Play"));
        toolButton_Play->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/background/images/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Play->setIcon(icon2);
        toolButton_Play->setIconSize(QSize(18, 18));
        toolButton_Play->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_Play);

        toolButton_Stop = new QToolButton(layoutWidget);
        toolButton_Stop->setObjectName(QString::fromUtf8("toolButton_Stop"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/background/images/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Stop->setIcon(icon3);
        toolButton_Stop->setIconSize(QSize(18, 18));
        toolButton_Stop->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_Stop);

        toolButton_Next = new QToolButton(layoutWidget);
        toolButton_Next->setObjectName(QString::fromUtf8("toolButton_Next"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/background/images/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Next->setIcon(icon4);
        toolButton_Next->setIconSize(QSize(18, 18));
        toolButton_Next->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_Next);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMouseTracking(false);
        horizontalSlider->setAutoFillBackground(false);
        horizontalSlider->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout->addWidget(horizontalSlider);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 260, 261, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_SongList->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272/\351\232\220\350\227\217\346\222\255\346\224\276\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_SongList->setToolTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272/\351\232\220\350\227\217\346\222\255\346\224\276\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Last->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        action_Last->setShortcut(QApplication::translate("MainWindow", "Ctrl+Left", 0, QApplication::UnicodeUTF8));
        action_Next->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        action_Next->setShortcut(QApplication::translate("MainWindow", "Ctrl+Right", 0, QApplication::UnicodeUTF8));
        action_Play->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
        action_Play->setShortcut(QApplication::translate("MainWindow", "Ctrl+F5", 0, QApplication::UnicodeUTF8));
        action_Stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        action_Stop->setShortcut(QApplication::translate("MainWindow", "Ctrl+F2", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\346\210\221\344\273\254", 0, QApplication::UnicodeUTF8));
        action_About->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        action_Support->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\351\205\267\351\237\263\345\220\254\345\220\254", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Support->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\351\205\267\351\237\263\345\220\254\345\220\254", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Support->setShortcut(QApplication::translate("MainWindow", "Ctrl+F1", 0, QApplication::UnicodeUTF8));
        action_Import->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245\346\234\254\345\234\260\346\255\214\346\233\262", 0, QApplication::UnicodeUTF8));
        action_Import->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        action_SoundPlus->setText(QApplication::translate("MainWindow", "\351\237\263\351\207\217+(20%)", 0, QApplication::UnicodeUTF8));
        action_SoundPlus->setShortcut(QApplication::translate("MainWindow", "Ctrl+Up", 0, QApplication::UnicodeUTF8));
        action_SoundReduce->setText(QApplication::translate("MainWindow", "\351\237\263\351\207\217-(20%)", 0, QApplication::UnicodeUTF8));
        action_SoundReduce->setShortcut(QApplication::translate("MainWindow", "Ctrl+Down", 0, QApplication::UnicodeUTF8));
        action_Mode1->setText(QApplication::translate("MainWindow", "\345\210\227\350\241\250\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Mode1->setToolTip(QApplication::translate("MainWindow", "\345\210\227\350\241\250\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Mode1->setShortcut(QApplication::translate("MainWindow", "Alt+1", 0, QApplication::UnicodeUTF8));
        action_Mode2->setText(QApplication::translate("MainWindow", "\351\232\217\346\234\272\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Mode2->setToolTip(QApplication::translate("MainWindow", "\351\232\217\346\234\272\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Mode2->setShortcut(QApplication::translate("MainWindow", "Alt+2", 0, QApplication::UnicodeUTF8));
        action_Mode3->setText(QApplication::translate("MainWindow", "\345\215\225\346\233\262\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8));
        action_Mode3->setShortcut(QApplication::translate("MainWindow", "Alt+3", 0, QApplication::UnicodeUTF8));
        action_Mode4->setText(QApplication::translate("MainWindow", "\351\241\272\345\272\217\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Mode4->setToolTip(QApplication::translate("MainWindow", "\351\241\272\345\272\217\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Mode4->setShortcut(QApplication::translate("MainWindow", "Alt+4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Url", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_Last->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">\344\270\212\344\270\200\351\246\226Ctrl+\342\206\220</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_Last->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        toolButton_Last->setShortcut(QApplication::translate("MainWindow", "Ctrl+Left", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_Play->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">\346\222\255\346\224\276Ctrl+F5</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_Play->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
        toolButton_Play->setShortcut(QApplication::translate("MainWindow", "Ctrl+F5", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_Stop->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\345\201\234\346\255\242Ctrl+F2</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_Stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        toolButton_Stop->setShortcut(QApplication::translate("MainWindow", "Ctrl+F2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_Next->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">\344\270\213\344\270\200\351\246\226Ctrl+\342\206\222</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_Next->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\346\233\262", 0, QApplication::UnicodeUTF8));
        toolButton_Next->setShortcut(QApplication::translate("MainWindow", "Ctrl+Right", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
