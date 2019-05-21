#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void logIncheck();

private slots:


    void on_actionSave_triggered();

    void on_actionExit_triggered();

    void on_actionUsers_mange_triggered();

    void on_actionItems_triggered();



    void on_btnLogin_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
