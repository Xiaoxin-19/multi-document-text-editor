#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontComboBox>
#include <QDebug>
#include <QSpinBox>
#include <QComboBox>
#include <QColorDialog>
#include <QLabel>
#include <QDebug>
#include <QFileDialog>
#include <QMdiSubWindow>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buildUI();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_new_triggered()
{
    qDebug() << "新建文件";
    TFromDoc* tFromDoc = new TFromDoc(this);
    ui->mdiArea->addSubWindow(tFromDoc);
    tFromDoc->show();

    // 设置工具栏的可编辑状态
}


void MainWindow::buildUI()
{
    // 设置程序名称和图标
    this->setWindowTitle("文字编辑器");
    this->setWindowIcon(QIcon(":/img/images/Doc.ico"));

    // 设置颜色Action图标
    QPixmap pix(16,16);
    pix.fill(Qt::red);
    ui->action_color->setIcon(pix);

    QComboBox* listStyleCombox = new QComboBox(this);
    listStyleCombox->addItem("标准");
    listStyleCombox->addItem("项目符号 (●)");
    listStyleCombox->addItem("项目符号 (○)");
    listStyleCombox->addItem("项目符号 (■)");
    listStyleCombox->addItem("编号 (⒈⒉⒊)");
    listStyleCombox->addItem("编号 ( a.b.c.)");
    listStyleCombox->addItem("编号 ( A.B.C.)");
    listStyleCombox->addItem("编号 (ⅰ.ⅱ.ⅲ.)");
    listStyleCombox->addItem("编号 (Ⅰ.Ⅱ.Ⅲ.)");
    listStyleCombox->setStatusTip("段落加标号或编号");
    ui->toolBar_2->addWidget(listStyleCombox);
    connect(listStyleCombox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [this](int index){
        auto tFromDoc = this->activeSubWindow();
        if(tFromDoc != nullptr){
            tFromDoc->actList(index);
        }
    });

    // 设置字体类型
    QFontComboBox* fontComboBox = new QFontComboBox(this);
    fontComboBox->setStatusTip("设置字体类型");
    ui->toolBar_2->addWidget(fontComboBox);
    connect(fontComboBox, &QFontComboBox::currentFontChanged, this, [this](const QFont &font){
        auto tFromDoc = this->activeSubWindow();
        if(tFromDoc != nullptr){
            tFromDoc->actFont(font);
        }
    });

    // 设置字号
    QSpinBox* spinBox = new QSpinBox(this);
    spinBox->setRange(5, 50);
    spinBox->setMinimumWidth(50);
    ui->toolBar_2->addWidget(spinBox);
    spinBox->setStatusTip("设置字号");
    connect(spinBox, &QSpinBox::valueChanged,this, [this](int value){
        auto tFromDoc = this->activeSubWindow();
        if(tFromDoc != nullptr){
            tFromDoc->actFontSize(value);
        }
    });

    // 设置状态栏文件信息
    currFilePath = new QLabel("请打开或创建新文件", this);
    ui->statusbar->addWidget(this->currFilePath);

    // 设置MDI区域
    ui->mdiArea->setTabsClosable(true);
    ui->mdiArea->setTabsMovable(true);
    ui->mdiArea->setViewMode(QMdiArea::TabbedView);

    // 设置窗口最大化并设置中心窗口
    this->setWindowState(Qt::WindowMaximized);
    this->setCentralWidget(ui->mdiArea);

}


TFromDoc* MainWindow::activeSubWindow()
{
    auto sub = ui->mdiArea->activeSubWindow();
    if(sub == nullptr) return nullptr;
    TFromDoc* tFromDoc = dynamic_cast<TFromDoc *>(sub->widget());
    return tFromDoc;
}


void MainWindow::on_action_open_triggered()
{
    qDebug() << "打开文件";
    QString filename = QFileDialog::getOpenFileName(this, "打开文件", ".", "C/C++ Files(*.c *.cpp *.h);;文本文件(*.txt *.html *.htm);;All Files(*.*)");
    if(!filename.isEmpty() && QFile::exists(filename)){
        TFromDoc* tFromDoc = new TFromDoc(filename,this);
        auto window = ui->mdiArea->addSubWindow(tFromDoc);
        ui->mdiArea->setActiveSubWindow(window);
        tFromDoc->show();
        tFromDoc->actOpen(filename);
    }
}


void MainWindow::on_action_save_triggered()
{
    qDebug() << "保存文件";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actSave();
    }
}


void MainWindow::on_action_saveAs_triggered()
{
    qDebug() << "另存为文件";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actSaveAs();
    }
}


void MainWindow::on_action_cut_triggered()
{
    qDebug() << "剪切文本";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actCut();
    }
}


void MainWindow::on_action_copy_triggered()
{
    qDebug() << "复制文本";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actCopy();
    }
}


void MainWindow::on_action_paste_triggered()
{
    qDebug() << "粘贴文本";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actPaste();
    }
}


void MainWindow::on_action_undo_triggered()
{
    qDebug() << "撤销";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actUndo();
    }
}


void MainWindow::on_action_redo_triggered()
{
    qDebug() << "重做";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actRedo();
    }
}


void MainWindow::on_action_bold_triggered()
{
    qDebug() << "设置粗体";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actBold();
    }
}


void MainWindow::on_action_italic_triggered()
{
    qDebug() << "设置斜体";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actItalic();
    }
}


void MainWindow::on_action_underLine_triggered()
{
    qDebug() << "设置下划线";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actUnderline();
    }
}


void MainWindow::on_action_left_triggered()
{
    qDebug() << "设置左对齐";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actAlignLeft();
    }
}


void MainWindow::on_action_center_triggered()
{
    qDebug() << "设置居中对齐";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actAlignCenter();
    }
}


void MainWindow::on_action_right_triggered()
{
    qDebug() << "设置右对齐";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actAlignRight();
    }
}


void MainWindow::on_action_double_align_triggered()
{
    qDebug() << "设置两端对齐";
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actAlignJustify();
    }
}



void MainWindow::on_action_color_triggered()
{
    qDebug() << "设置颜色";
    QColor color = QColorDialog::getColor(Qt::black, this, "选择颜色");
    if(!color.isValid()){
        return ;
    }
    auto tFromDoc = this->activeSubWindow();
    if(tFromDoc != nullptr){
        tFromDoc->actColor(color);
    }
}


