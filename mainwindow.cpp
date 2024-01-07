#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_plus_clicked()
{   bool success,success2;


    ui->mov->setText("+");
    QString namber1=ui->namber1->text();
    QString namber2=ui->namber2->text();
    namber1.toDouble(&success);
    namber2.toDouble(&success2);
    if(success&&success2)
    {
        double result;
        result= namber1.toDouble()+namber2.toDouble();
        QString show;
        show.setNum(result);
        ui->result_show->setText(show);
    }
    else
    {
        ui->result_show->setText("EROR");
    }


}






void MainWindow::on_minus_clicked()
{
    bool success,success2;
    ui->mov->setText("-");
    QString namber1=ui->namber1->text();
    QString namber2=ui->namber2->text();
    namber1.toDouble(&success);
    namber2.toDouble(&success2);
    if(success&&success2)
    {
        double result;
        result= namber1.toDouble()-namber2.toDouble();
        QString show;
        show.setNum(result);
        ui->result_show->setText(show);
    }
    else
    {
        ui->result_show->setText("EROR");
    }

}


void MainWindow::on_umnojit_clicked()
{bool success,success2;
    ui->mov->setText("*");
    QString namber1=ui->namber1->text();
    QString namber2=ui->namber2->text();
   namber1.toDouble(&success);
    namber2.toDouble(&success2);
    if(success&&success2)
    {
        double result;
        result= namber1.toDouble()*namber2.toDouble();
        QString show;
        show.setNum(result);
        ui->result_show->setText(show);
    }
    else
    {
        ui->result_show->setText("EROR");
    }
}


void MainWindow::on_delit_clicked()
{bool success,success2;
    ui->mov->setText("/");
    QString namber1=ui->namber1->text();
    QString namber2=ui->namber2->text();
    namber1.toDouble(&success);
    namber2.toDouble(&success2);

    if(success&&success2&&namber2!=0)
    {
        double result;
        result= namber1.toDouble()/namber2.toDouble();
        QString show;
        show.setNum(result);
        ui->result_show->setText(show);
    }
    else
    {
        ui->result_show->setText("EROR");
    }
}

