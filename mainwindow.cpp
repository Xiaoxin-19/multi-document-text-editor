#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontComboBox>
#include <QDebug>
#include <QSpinBox>
#include <QComboBox>
#include <QColorDialog>
#include <QLabel>
#include <QDebug>

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
    qDebug()<<"new triggered";
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

    // 设置字体类型
    QFontComboBox* fontComboBox = new QFontComboBox(this);
    fontComboBox->setStatusTip("设置字体类型");
    ui->toolBar_2->addWidget(fontComboBox);

    // 设置字号
    QSpinBox* spinBox = new QSpinBox(this);
    spinBox->setRange(5, 50);
    spinBox->setMinimumWidth(50);
    ui->toolBar_2->addWidget(spinBox);
    spinBox->setStatusTip("设置字号");

    // 设置状态栏文件信息
    currFilePath = new QLabel("请打开或创建新文件", this);
    ui->statusbar->addWidget(this->currFilePath);

    // 设置MDI区域
    ui->mdiArea->setTabsClosable(true);
    ui->mdiArea->setTabsMovable(true);
    this->setCentralWidget(ui->mdiArea);
    this->setWindowState(Qt::WindowMaximized);
}
