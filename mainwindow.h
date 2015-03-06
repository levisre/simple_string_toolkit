#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "mainstrfunc.h"
#include "hashes.h"
#include "morse.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_Action_clicked();
    void on_btn_proceed_clicked();

    void on_btn_cDecStep_clicked();

    void on_pushButton_2_clicked();

    void on_tab_group_currentChanged(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
