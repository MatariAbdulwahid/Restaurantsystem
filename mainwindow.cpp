#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::Shutdown() {
    exit(0);
}
void MainWindow::logIncheck(){

     ui->btnMenu->setEnabled(true);
     ui->btnKuche->setEnabled(true);

}

void MainWindow::on_btnlogin_clicked()
{
    if(ui->btnlogin->text() == "Anmelden"){

        lg.setModal(true);
        lg.exec();

        if(lg.loginstatus == 1){
            ui->btnlogin->setText("Abmelden");
            logIncheck();

        }
    } else {
        exit(0);
        }


}



void MainWindow::on_actionExit_triggered()
{
    exit(0);

}

void MainWindow::on_actionAdd_user_triggered()
{
    if(lg.loginstatus == 1){
        myuser.setModal(true);
        myuser.exec();
        logIncheck();
    } else {
        lg.setModal(true);
        lg.exec();
}
}

void MainWindow::on_actionadd_Food_triggered(){
    if(lg.loginstatus == 1){
        myFood.setModal(true);
        myFood.exec();
        logIncheck();
    } else {
        lg.setModal(true);
        lg.exec();
}
}




void MainWindow::on_btnMenu_clicked()
{
    myOrder.setModal(true);
    myOrder.exec();
}

void MainWindow::on_btnKuche_clicked()
{

}

void MainWindow::on_btn_exit_clicked()
{
     Shutdown();
}
