#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "main_userwindow.h"
#include "main_admin.h"
#include "user_data.h"
#include<QPixmap>
#include<QMessageBox>
#include<QFile>
#include<fstream>
#include<QTextStream>
#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string.h>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/logo.jpg");
    int w=ui->label_logo->width();
    int h=ui->label_logo->height();
    ui->label_logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Admin_clicked()
{
    QString username =ui->lineEdit_username->text();
    QString password =ui->lineEdit_password->text();
    if((username== "admin"||username== "ADMIN") && (password=="admin"||password=="ADMIN"))
    {
        hide();
        main_admin = new class main_admin();
        main_admin->show();
    }
    else
    {
        QMessageBox::warning(this,"login","username or password in not correct");

    }
}

void MainWindow::on_pushButton_Register_clicked()
{user_data user;
    ifstream idfile;
    idfile.open("C:/Users/asaid/OneDrive/Desktop/id.txt");
    int i;
    idfile >>i;
    string iusername =(ui->lineEdit_username->text()).toStdString();
    //user[i].getusername(iusername);
    string ipassword =(ui->lineEdit_password->text()).toStdString();
   // user[i].getpassword(ipassword);
    user.writetofile(iusername,ipassword);
//    main_userwindow = new class main_userwindow();
//    main_userwindow->show();
    idfile.close();
}


void MainWindow::on_pushButton_login_clicked()
{
    user_data user;

    string iusername =(ui->lineEdit_username->text()).toStdString();
    string ipassword =(ui->lineEdit_password->text()).toStdString();

//    main_userwindow = new class main_userwindow();
    //main_userwindow->show();

        if(user.readfile(iusername,ipassword))
        {
            main_userwindow = new class main_userwindow();
            main_userwindow->show();
        }
        else
        {
            QMessageBox::warning(this,"login","the username or password is not correct");
        }

    }

