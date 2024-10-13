#include "tfromdoc.h"
#include "ui_tfromdoc.h"

#include <QVBoxLayout>
#include <QPlainTextEdit>
#include <QFileInfo>
#include <QFile>
#include <QStringDecoder>
#include <QFileInfo>
#include <QTextList>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrintPreviewDialog>

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
void TFromDoc::actUndo()
{
    ui->textEdit->undo();
}

void TFromDoc::TFromDoc::actRedo()
{
    ui->textEdit->redo();
}

// 设置格式
void TFromDoc::actFont(const QFont &font)
{
    QTextCharFormat fmt;
    QTextCursor cursor = ui->textEdit->textCursor();
    if(!cursor.hasSelection())
        return;
    fmt.setFont(font);
    cursor.mergeCharFormat(fmt);
}


void TFromDoc::actFontSize(int value)
{
    QTextCharFormat fmt;
    QTextCursor cursor = ui->textEdit->textCursor();
    if(!cursor.hasSelection())
        return;
    fmt.setFontPointSize(value);
    cursor.mergeCharFormat(fmt);
}
void TFromDoc::actColor(const QColor &color)
{
    QTextCharFormat fmt;
    QTextCursor cursor = ui->textEdit->textCursor();
    if(!cursor.hasSelection())
        return;
    fmt.setForeground(color);
    cursor.mergeCharFormat(fmt);
}
void TFromDoc::actBold()
{
    QTextCharFormat fmt;
    QTextCursor cursor = ui->textEdit->textCursor();
    if(!cursor.hasSelection())
        return;
    fmt.setFontWeight(cursor.charFormat().fontWeight() == QFont::Bold ? QFont::Normal : QFont::Bold);
    cursor.mergeCharFormat(fmt);
}
void TFromDoc::actItalic()
{
    QTextCharFormat fmt;
    QTextCursor cursor = ui->textEdit->textCursor();
    if(!cursor.hasSelection())
        return;
    fmt.setFontItalic(!cursor.charFormat().fontItalic());
    cursor.mergeCharFormat(fmt);
}
void TFromDoc::actUnderline()
{
    QTextCharFormat fmt;
    QTextCursor cursor = ui->textEdit->textCursor();
    if(!cursor.hasSelection())
        return;
    fmt.setFontUnderline(!cursor.charFormat().fontUnderline());
    cursor.mergeCharFormat(fmt);
}

// 设置对齐方式
void TFromDoc::actAlignLeft()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
}
void TFromDoc::actAlignCenter()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);

}
void TFromDoc::actAlignRight()
{
    ui->textEdit->setAlignment(Qt::AlignRight);

}
void TFromDoc::actAlignJustify()
{
    ui->textEdit->setAlignment(Qt::AlignJustify);

}

// 设置列表
void TFromDoc::actList(int style)
{
    QTextCursor cursor = ui->textEdit->textCursor();

    if (style != 0) {
        QTextListFormat::Style stylename;

        switch (style) {
        case 1:
            stylename = QTextListFormat::ListDisc;
            break;
        case 2:
            stylename = QTextListFormat::ListCircle;
            break;
        case 3:
            stylename = QTextListFormat::ListSquare;
            break;
        case 4:
            stylename = QTextListFormat::ListDecimal;
            break;
        case 5:
            stylename = QTextListFormat::ListLowerAlpha;
            break;
        case 6:
            stylename = QTextListFormat::ListUpperAlpha;
            break;
        case 7:
            stylename = QTextListFormat::ListLowerRoman;
            break;
        case 8:
            stylename = QTextListFormat::ListUpperRoman;
            break;
        default:
            stylename = QTextListFormat::ListDisc;
            break;
        }

        cursor.beginEditBlock();

        QTextBlockFormat blockFmt = cursor.blockFormat();
        QTextListFormat listFmt;

        if (cursor.currentList()) {
            listFmt = cursor.currentList()->format();
        } else {
            listFmt.setIndent(blockFmt.indent() + 1);
            cursor.setBlockFormat(blockFmt);
        }

        listFmt.setStyle(stylename);
        cursor.createList(listFmt);

        cursor.endEditBlock();
    } else {
        QTextBlockFormat bfmt;
        bfmt.setObjectIndex(-1);
        cursor.mergeBlockFormat(bfmt);
    }
}


// 打印相关
void TFromDoc::actPrint()
{
    QPrinter printer;
    QPrintDialog *dialog=new QPrintDialog(&printer);
    dialog->setWhatsThis(tr("打印文档"));

    if(ui->textEdit->textCursor().hasSelection())
        dialog->setOption(QAbstractPrintDialog::PrintSelection,true);

    if (dialog->exec() != QDialog::Accepted) {
        return; // 如果用户取消，则返回
    }

    ui->textEdit->print(&printer);
    delete dialog;
}
void TFromDoc::actPrintPreview()
{
    // 创建 QPrinter 对象
    QPrinter printer(QPrinter::HighResolution);
    printer.setPageSize(QPageSize(QPageSize::A4)); // 设置纸张大小
    printer.setPageOrientation(QPageLayout::Portrait); // 设置纸张方向

    // 创建打印预览对话框
    QPrintPreviewDialog previewDialog(&printer);
    previewDialog.setWindowTitle("打印预览");

    // 将 QTextEdit 的内容传递给 QPrinter
    QObject::connect(&previewDialog, &QPrintPreviewDialog::paintRequested, this,[&](QPrinter *printer) {
        QTextDocument *doc = ui->textEdit->document();
        doc->print(printer); // 将 QTextEdit 的内容打印到 printer
    });

    // 显示打印预览对话框
    if (previewDialog.exec() == QDialog::Accepted) {
        // 用户确认打印
        QTextDocument *doc = ui->textEdit->document();
        doc->print(&printer);
    }
}

