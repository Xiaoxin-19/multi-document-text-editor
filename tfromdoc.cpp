#include "tfromdoc.h"
#include "ui_tfromdoc.h"

#include <QVBoxLayout>
#include <QPlainTextEdit>
#include <QFileInfo>
#include <QFile>
TFromDoc::TFromDoc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TFromDoc)
{
    ui->setupUi(this);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(ui->textEdit);
    this->setLayout(layout);
}

TFromDoc::~TFromDoc()
{
    delete ui;
}


//文件操作
void TFromDoc::actNew()
{

}
void TFromDoc::actOpen()
{

}
void TFromDoc::actSave()
{

}
void TFromDoc::actSaveAs()
{

}

//编辑操作
void TFromDoc::actCopy()
{

}
void TFromDoc::actCut()
{

}
void TFromDoc::actPaste()
{

}

// 撤销与重做
void actUndo();
void TFromDoc::TFromDoc::actRedo()
{

}

// 设置格式
void TFromDoc::actFont()
{

}
void TFromDoc::actFontSize()
{

}
void TFromDoc::actColor()
{

}
void TFromDoc::actBold()
{

}
void TFromDoc::actItalic()
{

}
void TFromDoc::actUnderline()
{

}

// 设置对齐方式
void TFromDoc::actAlignLeft()
{

}
void TFromDoc::actAlignCenter()
{

}
void TFromDoc::actAlignRight()
{

}
void TFromDoc::actAlignJustify()
{

}

// 设置列表
void TFromDoc::actList()
{

}

// 打印相关
void TFromDoc::actPrint()
{

}
void TFromDoc::actPrintPreview()
{

}

void TFromDoc::on_action_open_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "打开文件", ".", "C/C++ Files(*.c *.cpp *.h);;文本文件(*.txt);;All Files(*.*)");
    if (fileName.isEmpty())
        return;

    if(!QFile::exists(fileName))
        return;

    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
    QTextStream stream(&file);
    ui->textEdit->clear();
    while (!stream.atEnd())
    {
        QString str = stream.readLine();
        ui->textEdit->append(str);
    }
    file.close();

    QFileInfo fileInfo(fileName);
    QString shortName = fileInfo.fileName();
    this->setWindowTitle(shortName);
    emit titleChanged(shortName);
}




void TFromDoc::on_action_font_triggered()
{
    QTextCharFormat fmt;
    QTextCursor cursor = ui->textEdit->textCursor();
    if(!cursor.hasSelection())
        return;
    bool ok = false;
    QFont font = QFontDialog::getFont(&ok, cursor.charFormat().font());
    if(!ok) return;
    fmt.setFont(font);
    cursor.mergeCharFormat(fmt);
}

