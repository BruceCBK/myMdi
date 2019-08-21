/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClose;
    QAction *actionCloseAll;
    QAction *actionTile;
    QAction *actionCascade;
    QAction *actionNext;
    QAction *actionPrevious;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menuF;
    QMenu *menuE;
    QMenu *menuW;
    QMenu *menuH;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1086, 667);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ICON/New_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ICON/Open_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ICON/Save_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ICON/Save_as_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ICON/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ICON/Undo_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon5);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ICON/Redo_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ICON/Cut_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/ICON/Copy_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon8);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/ICON/Paste_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon9);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QString::fromUtf8("actionCloseAll"));
        actionTile = new QAction(MainWindow);
        actionTile->setObjectName(QString::fromUtf8("actionTile"));
        actionCascade = new QAction(MainWindow);
        actionCascade->setObjectName(QString::fromUtf8("actionCascade"));
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/ICON/Next_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon10);
        actionPrevious = new QAction(MainWindow);
        actionPrevious->setObjectName(QString::fromUtf8("actionPrevious"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/ICON/Previous_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrevious->setIcon(icon11);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/ICON/About.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon12);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/ICON/About_Qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutQt->setIcon(icon13);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1086, 23));
        menuF = new QMenu(menubar);
        menuF->setObjectName(QString::fromUtf8("menuF"));
        menuE = new QMenu(menubar);
        menuE->setObjectName(QString::fromUtf8("menuE"));
        menuW = new QMenu(menubar);
        menuW->setObjectName(QString::fromUtf8("menuW"));
        menuH = new QMenu(menubar);
        menuH->setObjectName(QString::fromUtf8("menuH"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuF->menuAction());
        menubar->addAction(menuE->menuAction());
        menubar->addAction(menuW->menuAction());
        menubar->addAction(menuH->menuAction());
        menuF->addAction(actionNew);
        menuF->addAction(actionOpen);
        menuF->addAction(actionSave);
        menuF->addAction(actionSaveAs);
        menuF->addAction(actionExit);
        menuE->addAction(actionUndo);
        menuE->addAction(actionRedo);
        menuE->addAction(actionCut);
        menuE->addAction(actionCopy);
        menuE->addAction(actionPaste);
        menuW->addAction(actionClose);
        menuW->addAction(actionCloseAll);
        menuW->addAction(actionTile);
        menuW->addAction(actionCascade);
        menuW->addAction(actionNext);
        menuW->addAction(actionPrevious);
        menuH->addAction(actionAbout);
        menuH->addAction(actionAboutQt);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSaveAs);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266(&O)...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)...", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215(&R)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&T)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&O)", nullptr));
        actionCloseAll->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\347\252\227\345\217\243(&A)", nullptr));
        actionTile->setText(QApplication::translate("MainWindow", "\345\271\263\351\223\272(&T)", nullptr));
        actionCascade->setText(QApplication::translate("MainWindow", "\345\261\202\345\217\240(&C)", nullptr));
        actionNext->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252(&X)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNext->setShortcut(QApplication::translate("MainWindow", "Ctrl+Tab", nullptr));
#endif // QT_NO_SHORTCUT
        actionPrevious->setText(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252(&V)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPrevious->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Tab", nullptr));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
        actionAboutQt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt(&Q)", nullptr));
        menuF->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(F)", nullptr));
        menuE->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(E)", nullptr));
        menuW->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243(W)", nullptr));
        menuH->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(H)", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
