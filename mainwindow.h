#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "user.h"
#include "logindialog.h"
#include "food.h"
#include "order.h"
#include "systemcontroll.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow , SystemControll
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   void logIncheck();


private slots:
   void on_btnlogin_clicked();
   void on_actionExit_triggered();
   void on_actionAdd_user_triggered();
   void on_actionadd_Food_triggered();
   void on_btnMenu_clicked();

   void on_btnKuche_clicked();

   void on_btn_exit_clicked();
   void Shutdown() ;

private:
    Ui::MainWindow *ui;
    User myuser ;
    LoginDialog lg ;
    Food myFood ;
    Order myOrder;
};

#endif // MAINWINDOW_H
