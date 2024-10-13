#include "tfromdoc.h"
#include "ui_tfromdoc.h"

#include <QVBoxLayout>
#include <QPlainTextEdit>
#include <QFileInfo>
#include <QFile>
#include <QStringDecoder>
#include <QFileInfo>

TFromDoc::TFromDoc(QWidget *parent):TFromDoc(DEFAULT_PATH, parent){}

TFromDoc::TFromDoc(const QString &filepath, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TFromDoc)
    , filepath(filepath)
{
    ui->setupUi(this);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(ui->textEdit);
    this->setLayout(layout);

    // 设置窗口标题和属性
    setAttribute(Qt::WA_DeleteOnClose);
    // 设置友好的窗口标题
    setWindowTitle(QFileInfo(filepath).fileName() + "[*]");

    connect(ui->textEdit, &QTextEdit::textChanged, this, [this](){
        this->setWindowModified(true);
    });
}


TFromDoc::~TFromDoc()
{
    delete ui;
}


//文件操作
void TFromDoc::actNew()
{

}

void TFromDoc::actOpen(const QString &path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    // 提供一个字节数组,QByteArray可用于存储原始字节（包括“\ 0” ）和传统的8位 “\ 0” 端接字符串 .
    QByteArray data = file.readAll();

    QStringDecoder decoder(QStringDecoder::System);
    QString str = decoder.decode(data);

    if(Qt::mightBeRichText(str))
    {

        ui->textEdit->setHtml(str);
    }
    else
    {
        str = QString::fromUtf8(data);
        ui->textEdit->setPlainText(str);
    }
    this->setWindowModified(false);
}
void TFromDoc::actSave()
{
    if(filepath == DEFAULT_PATH)
    {
        actSaveAs();
        return;
    }
    QFile file(filepath);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;
    QTextStream stream(&file);
    stream << ui->textEdit->toHtml();

    file.close();
    // 设置窗口标题为未修改状态
    this->setWindowModified(false);
}

void TFromDoc::actSaveAs()
{
    QString path = QFileDialog::getSaveFileName(this, "另存为", filepath, "HTML文件(*.html *.htm);;文本文件(*.txt);;All Files(*.*)");
    if(path.isEmpty())
        return;
    filepath = path;
    actSave();
    // 设置窗口标题为未修改状态更新文件名称
    setWindowTitle(QFileInfo(filepath).fileName() + "[*]");
}

//编辑操作
void TFromDoc::actCopy()
{
    ui->textEdit->copy();
}
void TFromDoc::actCut()
{
    ui->textEdit->cut();
}
void TFromDoc::actPaste()
{
    ui->textEdit->paste();
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

