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

    void on_action_undo_triggered();

    void on_action_redo_triggered();

    void on_action_bold_triggered();

    void on_action_italic_triggered();

    void on_action_underLine_triggered();

    void on_action_left_triggered();

    void on_action_center_triggered();

    void on_action_right_triggered();

    void on_action_double_align_triggered();

    void on_action_color_triggered();

    void on_action_cascade_triggered();

    void on_action_tile_triggered();

    void on_action_view_model_triggered(bool checked);

    void on_actioncloseAll_triggered();

    void on_actionclose_triggered();

    void on_actionnext_triggered();

    void on_actionprev_triggered();


    void on_action_print_triggered();

    void on_action_orint_preview_triggered();

    void on_action_quit_triggered();


private:
    Ui::MainWindow *ui;
    QLabel *currFilePath;

private:
    void buildUI();
    TFromDoc* activeSubWindow();
};
#endif // MAINWINDOW_H
