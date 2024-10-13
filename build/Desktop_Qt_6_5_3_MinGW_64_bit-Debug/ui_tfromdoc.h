/********************************************************************************
** Form generated from reading UI file 'tfromdoc.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFROMDOC_H
#define UI_TFROMDOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFromDoc
{
public:
    QAction *action_open;
    QAction *action_font;
    QAction *action_cut;
    QAction *action_copy;
    QAction *action_paste;
    QAction *action_undo;
    QAction *action_redo;
    QTextEdit *textEdit;

    void setupUi(QWidget *TFromDoc)
    {
        if (TFromDoc->objectName().isEmpty())
            TFromDoc->setObjectName("TFromDoc");
        TFromDoc->resize(400, 300);
        action_open = new QAction(TFromDoc);
        action_open->setObjectName("action_open");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon);
        action_open->setMenuRole(QAction::NoRole);
        action_font = new QAction(TFromDoc);
        action_font->setObjectName("action_font");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        action_font->setIcon(icon1);
        action_font->setMenuRole(QAction::NoRole);
        action_cut = new QAction(TFromDoc);
        action_cut->setObjectName("action_cut");
        QIcon icon2;
        QString iconThemeName = QString::fromUtf8("edit-cut");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8(":/img/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_cut->setIcon(icon2);
        action_cut->setMenuRole(QAction::NoRole);
        action_copy = new QAction(TFromDoc);
        action_copy->setObjectName("action_copy");
        QIcon icon3;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::EditCopy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8(":/img/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_copy->setIcon(icon3);
        action_copy->setMenuRole(QAction::NoRole);
        action_paste = new QAction(TFromDoc);
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
        action_undo = new QAction(TFromDoc);
        action_undo->setObjectName("action_undo");
        QIcon icon5;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::EditUndo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8(":/img/images/206.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_undo->setIcon(icon5);
        action_undo->setMenuRole(QAction::NoRole);
        action_redo = new QAction(TFromDoc);
        action_redo->setObjectName("action_redo");
        QIcon icon6;
        iconThemeName = QString::fromUtf8("QIcon::ThemeIcon::EditRedo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8(":/img/images/208.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_redo->setIcon(icon6);
        action_redo->setMenuRole(QAction::NoRole);
        textEdit = new QTextEdit(TFromDoc);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(100, 90, 104, 71));

        retranslateUi(TFromDoc);
        QObject::connect(action_copy, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::copy));
        QObject::connect(action_cut, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(action_paste, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::paste));
        QObject::connect(action_redo, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::redo));
        QObject::connect(action_undo, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::undo));

        QMetaObject::connectSlotsByName(TFromDoc);
    } // setupUi

    void retranslateUi(QWidget *TFromDoc)
    {
        TFromDoc->setWindowTitle(QCoreApplication::translate("TFromDoc", "Form", nullptr));
        action_open->setText(QCoreApplication::translate("TFromDoc", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("TFromDoc", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        action_font->setText(QCoreApplication::translate("TFromDoc", "\345\255\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        action_font->setToolTip(QCoreApplication::translate("TFromDoc", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        action_cut->setText(QCoreApplication::translate("TFromDoc", "\345\211\252\346\216\245", nullptr));
#if QT_CONFIG(tooltip)
        action_cut->setToolTip(QCoreApplication::translate("TFromDoc", "\345\211\252\346\216\245", nullptr));
#endif // QT_CONFIG(tooltip)
        action_copy->setText(QCoreApplication::translate("TFromDoc", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        action_copy->setToolTip(QCoreApplication::translate("TFromDoc", "\345\244\215\345\210\266\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
        action_paste->setText(QCoreApplication::translate("TFromDoc", "\347\262\230\350\264\264", nullptr));
        action_undo->setText(QCoreApplication::translate("TFromDoc", " \346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        action_undo->setToolTip(QCoreApplication::translate("TFromDoc", " \346\222\244\351\224\200\346\223\215\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
        action_redo->setText(QCoreApplication::translate("TFromDoc", "\351\207\215\345\244\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TFromDoc: public Ui_TFromDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFROMDOC_H
