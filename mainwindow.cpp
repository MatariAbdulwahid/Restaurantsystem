#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "login.h"
#include "menus.h"
#include "usersmange.h"
#include "setting.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSave_triggered()
{
    Menus mn ;
    mn.parentWidget();
   // mn.setModal(true);
    mn.exec();
}

void MainWindow::on_actionExit_triggered()
{
    exit(0);

}

void MainWindow::on_actionUsers_mange_triggered()
{
    UsersMange um ;
    um.parentWidget();
   // mn.setModal(true);
    um.exec();
}

void MainWindow::on_actionItems_triggered()
{
    Login ln ;
    ln.setModal(true);
    ln.exec();
}



void MainWindow::on_btnLogin_clicked()
{
    bool log ;
    Login lg ;
    if(!log ){
    lg.show();
    lg.exec();
    log = true ;
    ui->btnLogin->setText("abmelden");
    }
    else  {
    exit(0);
    log = false ;
    }


}

void MainWindow::logIncheck(){

     ui->mainToolBar->setEnabled(true);

}

