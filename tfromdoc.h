#ifndef TFROMDOC_H
#define TFROMDOC_H

#include <QWidget>
#include <QFileDialog>
#include <QToolBar>
#include <QAction>
#include <QFontDialog>
#include <QColorDialog>

namespace Ui {
class TFromDoc;
}

const QString DEFAULT_PATH = "new_doc";

class TFromDoc : public QWidget
{
    Q_OBJECT

public:
    explicit TFromDoc(QWidget *parent = nullptr);
    explicit TFromDoc(const QString &filepath = DEFAULT_PATH, QWidget *parent = nullptr);
    ~TFromDoc();

    //文件操作
    void actNew();
    void actOpen(const QString &path);
    void actSave();
    void actSaveAs();

    //编辑操作
    void actCopy();
    void actCut();
    void actPaste();

    // 撤销与重做
    void actUndo();
    void actRedo();

    // 设置格式
    void actFont();
    void actFontSize();
    void actColor();
    void actBold();
    void actItalic();
    void actUnderline();

    // 设置对齐方式
    void actAlignLeft();
    void actAlignCenter();
    void actAlignRight();
    void actAlignJustify();

    // 设置列表
    void actList();

    // 打印相关
    void actPrint();
    void actPrintPreview();

private slots:
    void on_action_open_triggered();
    void on_action_font_triggered();

signals:
    void titleChanged(QString title);

private:
    Ui::TFromDoc *ui;
    QString filepath;
};

#endif // TFROMDOC_H
