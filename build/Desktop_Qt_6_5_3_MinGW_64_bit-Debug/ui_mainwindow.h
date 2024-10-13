/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
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
    QAction *action_open;
    QAction *action_copy;
    QAction *action_undo;
    QAction *action_redo;
    QAction *action_paste;
    QAction *action_cut;
    QAction *action_quit;
    QAction *action_view_model;
    QAction *action_cascade;
    QAction *action_tile;
    QAction *action_close_all;
    QAction *action_save;
    QAction *action_new;
    QAction *action_print;
    QAction *action_bold;
    QAction *action_italic;
    QAction *action_underLine;
    QAction *action_left;
    QAction *action_center;
    QAction *action_right;
    QAction *action_color;
    QAction *action_saveAs;
    QAction *action_double_align;
    QAction *actionclose;
    QAction *actioncloseAll;
    QAction *actionnext;
    QAction *actionprev;
    QAction *actionabout;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_G;
    QMenu *menu_O;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_W;
    QMenu *menu_H;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::DocumentOpen");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8(":/img/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_open->setIcon(icon);
        action_open->setMenuRole(QAction::NoRole);
        action_copy = new QAction(MainWindow);
        action_copy->setObjectName("action_copy");
        QIcon icon1;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::EditCopy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(":/img/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_copy->setIcon(icon1);
        action_copy->setMenuRole(QAction::NoRole);
        action_undo = new QAction(MainWindow);
        action_undo->setObjectName("action_undo");
        QIcon icon2;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::EditUndo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8(":/img/images/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_undo->setIcon(icon2);
        action_undo->setMenuRole(QAction::NoRole);
        action_redo = new QAction(MainWindow);
        action_redo->setObjectName("action_redo");
        QIcon icon3;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::EditRedo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8(":/img/images/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_redo->setIcon(icon3);
        action_redo->setMenuRole(QAction::NoRole);
        action_paste = new QAction(MainWindow);
        action_paste->setObjectName("action_paste");
        QIcon icon4;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::EditPaste");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8(":/img/images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_paste->setIcon(icon4);
        action_paste->setMenuRole(QAction::NoRole);
        action_cut = new QAction(MainWindow);
        action_cut->setObjectName("action_cut");
        QIcon icon5;
        iconThemeName = QString::fromUtf8("edit-cut");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8(":/img/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_cut->setIcon(icon5);
        action_cut->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        QIcon icon6;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::ApplicationExit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8(":/img/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_quit->setIcon(icon6);
        action_quit->setMenuRole(QAction::NoRole);
        action_view_model = new QAction(MainWindow);
        action_view_model->setObjectName("action_view_model");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        action_view_model->setIcon(icon7);
        action_view_model->setMenuRole(QAction::NoRole);
        action_cascade = new QAction(MainWindow);
        action_cascade->setObjectName("action_cascade");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/images/400.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        action_cascade->setIcon(icon8);
        action_cascade->setMenuRole(QAction::NoRole);
        action_tile = new QAction(MainWindow);
        action_tile->setObjectName("action_tile");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/images/402.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        action_tile->setIcon(icon9);
        action_tile->setMenuRole(QAction::NoRole);
        action_close_all = new QAction(MainWindow);
        action_close_all->setObjectName("action_close_all");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        action_close_all->setIcon(icon10);
        action_close_all->setMenuRole(QAction::NoRole);
        action_save = new QAction(MainWindow);
        action_save->setObjectName("action_save");
        QIcon icon11;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::DocumentSave");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QString::fromUtf8(":/img/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_save->setIcon(icon11);
        action_save->setMenuRole(QAction::NoRole);
        action_new = new QAction(MainWindow);
        action_new->setObjectName("action_new");
        QIcon icon12;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::DocumentNew");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon12 = QIcon::fromTheme(iconThemeName);
        } else {
            icon12.addFile(QString::fromUtf8(":/img/images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_new->setIcon(icon12);
        action_new->setMenuRole(QAction::NoRole);
        action_print = new QAction(MainWindow);
        action_print->setObjectName("action_print");
        QIcon icon13;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::DocumentPrint");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon13 = QIcon::fromTheme(iconThemeName);
        } else {
            icon13.addFile(QString::fromUtf8(":/img/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_print->setIcon(icon13);
        action_print->setMenuRole(QAction::NoRole);
        action_bold = new QAction(MainWindow);
        action_bold->setObjectName("action_bold");
        QIcon icon14;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::FormatTextBold");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon14 = QIcon::fromTheme(iconThemeName);
        } else {
            icon14.addFile(QString::fromUtf8(":/img/images/500.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_bold->setIcon(icon14);
        action_bold->setMenuRole(QAction::NoRole);
        action_italic = new QAction(MainWindow);
        action_italic->setObjectName("action_italic");
        QIcon icon15;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::FormatTextItalic");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon15 = QIcon::fromTheme(iconThemeName);
        } else {
            icon15.addFile(QString::fromUtf8(":/img/images/502.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_italic->setIcon(icon15);
        action_italic->setMenuRole(QAction::NoRole);
        action_underLine = new QAction(MainWindow);
        action_underLine->setObjectName("action_underLine");
        QIcon icon16;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::FormatTextUnderline");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon16 = QIcon::fromTheme(iconThemeName);
        } else {
            icon16.addFile(QString::fromUtf8(":/img/images/504.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_underLine->setIcon(icon16);
        action_underLine->setMenuRole(QAction::NoRole);
        action_left = new QAction(MainWindow);
        action_left->setObjectName("action_left");
        QIcon icon17;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::FormatJustifyLeft");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon17 = QIcon::fromTheme(iconThemeName);
        } else {
            icon17.addFile(QString::fromUtf8(":/img/images/508.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_left->setIcon(icon17);
        action_left->setMenuRole(QAction::NoRole);
        action_center = new QAction(MainWindow);
        action_center->setObjectName("action_center");
        QIcon icon18;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::FormatJustifyCenter");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon18 = QIcon::fromTheme(iconThemeName);
        } else {
            icon18.addFile(QString::fromUtf8(":/img/images/510.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_center->setIcon(icon18);
        action_center->setMenuRole(QAction::NoRole);
        action_right = new QAction(MainWindow);
        action_right->setObjectName("action_right");
        QIcon icon19;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::FormatJustifyRight");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon19 = QIcon::fromTheme(iconThemeName);
        } else {
            icon19.addFile(QString::fromUtf8(":/img/images/512.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_right->setIcon(icon19);
        action_right->setMenuRole(QAction::NoRole);
        action_color = new QAction(MainWindow);
        action_color->setObjectName("action_color");
        action_color->setMenuRole(QAction::NoRole);
        action_saveAs = new QAction(MainWindow);
        action_saveAs->setObjectName("action_saveAs");
        action_double_align = new QAction(MainWindow);
        action_double_align->setObjectName("action_double_align");
        QIcon icon20;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::FormatJustifyFill");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon20 = QIcon::fromTheme(iconThemeName);
        } else {
            icon20.addFile(QString::fromUtf8(":/img/images/514.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_double_align->setIcon(icon20);
        action_double_align->setMenuRole(QAction::NoRole);
        actionclose = new QAction(MainWindow);
        actionclose->setObjectName("actionclose");
        actioncloseAll = new QAction(MainWindow);
        actioncloseAll->setObjectName("actioncloseAll");
        actionnext = new QAction(MainWindow);
        actionnext->setObjectName("actionnext");
        actionprev = new QAction(MainWindow);
        actionprev->setObjectName("actionprev");
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName("actionabout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName("mdiArea");
        mdiArea->setGeometry(QRect(230, 140, 200, 160));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu->setTearOffEnabled(false);
        menu_G = new QMenu(menubar);
        menu_G->setObjectName("menu_G");
        menu_O = new QMenu(menubar);
        menu_O->setObjectName("menu_O");
        menu_2 = new QMenu(menu_O);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menu_O);
        menu_3->setObjectName("menu_3");
        menu_W = new QMenu(menubar);
        menu_W->setObjectName("menu_W");
        menu_H = new QMenu(menubar);
        menu_H->setObjectName("menu_H");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName("toolBar_2");
        toolBar_2->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        MainWindow->insertToolBarBreak(toolBar_2);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_G->menuAction());
        menubar->addAction(menu_O->menuAction());
        menubar->addAction(menu_W->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addSeparator();
        menu->addAction(action_save);
        menu->addAction(action_saveAs);
        menu->addSeparator();
        menu->addAction(action_print);
        menu->addSeparator();
        menu->addAction(action_quit);
        menu_G->addAction(action_undo);
        menu_G->addAction(action_redo);
        menu_G->addSeparator();
        menu_G->addAction(action_cut);
        menu_G->addAction(action_copy);
        menu_G->addAction(action_paste);
        menu_O->addAction(menu_2->menuAction());
        menu_O->addAction(menu_3->menuAction());
        menu_O->addAction(action_color);
        menu_2->addAction(action_bold);
        menu_2->addAction(action_italic);
        menu_2->addAction(action_underLine);
        menu_3->addAction(action_left);
        menu_3->addAction(action_center);
        menu_3->addAction(action_right);
        menu_3->addAction(action_double_align);
        menu_W->addAction(actionclose);
        menu_W->addAction(actioncloseAll);
        menu_W->addSeparator();
        menu_W->addAction(action_view_model);
        menu_W->addAction(action_cascade);
        menu_W->addAction(action_tile);
        menu_W->addSeparator();
        menu_W->addAction(actionnext);
        menu_W->addAction(actionprev);
        menu_H->addAction(actionabout);
        toolBar->addAction(action_new);
        toolBar->addAction(action_open);
        toolBar->addAction(action_save);
        toolBar->addAction(action_print);
        toolBar->addSeparator();
        toolBar->addAction(action_undo);
        toolBar->addAction(action_redo);
        toolBar->addSeparator();
        toolBar->addAction(action_cut);
        toolBar->addAction(action_copy);
        toolBar->addAction(action_paste);
        toolBar->addSeparator();
        toolBar->addAction(action_bold);
        toolBar->addAction(action_italic);
        toolBar->addAction(action_underLine);
        toolBar->addSeparator();
        toolBar->addAction(action_view_model);
        toolBar->addAction(action_cascade);
        toolBar->addAction(action_tile);
        toolBar->addSeparator();
        toolBar->addAction(action_left);
        toolBar->addAction(action_center);
        toolBar->addAction(action_double_align);
        toolBar->addAction(action_right);
        toolBar->addSeparator();
        toolBar->addAction(action_color);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        action_copy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        action_undo->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_redo->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\244\215", nullptr));
#if QT_CONFIG(shortcut)
        action_redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        action_paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(shortcut)
        action_paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\346\216\245", nullptr));
#if QT_CONFIG(tooltip)
        action_cut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\346\216\245", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_view_model->setText(QCoreApplication::translate("MainWindow", "MDI\346\250\241\345\274\217", nullptr));
        action_cascade->setText(QCoreApplication::translate("MainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_cascade->setToolTip(QCoreApplication::translate("MainWindow", " \347\252\227\345\217\243\344\273\245\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        action_tile->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_tile->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\344\273\245\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        action_close_all->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
        action_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_new->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        action_new->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_new->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_print->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
#if QT_CONFIG(shortcut)
        action_print->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        action_bold->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
#if QT_CONFIG(tooltip)
        action_bold->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_bold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        action_italic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        action_italic->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_italic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        action_underLine->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        action_underLine->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_underLine->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        action_left->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        action_left->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\267\246\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_left->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        action_center->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        action_center->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_center->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        action_right->setText(QCoreApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        action_right->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\345\217\263\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_right->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        action_color->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262(&C)", nullptr));
#if QT_CONFIG(tooltip)
        action_color->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_CONFIG(tooltip)
        action_saveAs->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", nullptr));
        action_double_align->setText(QCoreApplication::translate("MainWindow", "\344\270\244\347\253\257\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        action_double_align->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\207\345\255\227\344\270\244\347\253\257\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_double_align->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionclose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255(&O)", nullptr));
#if QT_CONFIG(tooltip)
        actionclose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\275\223\345\211\215\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actioncloseAll->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actioncloseAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\345\255\220\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actionnext->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252", nullptr));
#if QT_CONFIG(shortcut)
        actionnext->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        actionprev->setText(QCoreApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252", nullptr));
#if QT_CONFIG(tooltip)
        actionprev->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236\345\211\215\344\270\200\344\270\252\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionprev->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        actionabout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
#if QT_CONFIG(tooltip)
        actionabout->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\254\350\275\257\344\273\266\347\232\204\347\233\270\345\205\263\344\277\241\346\201\257", nullptr));
#endif // QT_CONFIG(tooltip)
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_G->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_O->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(O)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223(&D)", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\257\271\351\275\220", nullptr));
        menu_W->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243(&W)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "\351\200\232\347\224\250\345\267\245\345\205\267\346\240\217", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\273\204\345\220\210\345\267\245\345\205\267\346\240\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
