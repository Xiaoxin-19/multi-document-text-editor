#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QMdiArea>
#include "tfromdoc.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_new_triggered();
    void on_action_open_triggered();
    void on_action_save_triggered();

    void on_action_saveAs_triggered();

    void on_action_cut_triggered();

    void on_action_copy_triggered();

    void on_action_paste_triggered();

private:
    Ui::MainWindow *ui;
    QLabel *currFilePath;

private:
    void buildUI();
    TFromDoc* activeSubWindow();
};
#endif // MAINWINDOW_H
