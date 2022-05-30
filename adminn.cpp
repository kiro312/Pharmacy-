#include "adminn.h"
#include "ui_adminn.h"
#include "medicine_data.h"
#include "user_data.h"
#include<QString>
#include<QMessageBox>
#include<QFile>
#include<fstream>
#include<QTextStream>
#include<iostream>
#include <stdio.h>

using namespace std;
adminn::adminn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminn)
{
    ui->setupUi(this);
}

adminn::~adminn()
{
    delete ui;
}
user_data user[10];
medicine_data medicine;
void adminn::on_actionusers_triggered()
{
    string iusername, ipassword;
   for(int k=0;k<10;k++)
   {
    user[k].readfile(iusername,ipassword);
    }

}
void adminn::on_actionmedicine_triggered()
{


    medicine_data medicine;
    ifstream  medicines;
    medicines.open(med_file,ios::in|ios::binary);
    if(!medicines)
    {
        QMessageBox msgError;
        msgError.setText("CRITICAL ERROR!\file not open !");
        msgError.setIcon(QMessageBox::Critical);
        msgError.setWindowTitle("Error");
        msgError.exec();
        exit(0);
    }
    medicines.read((char *) &medicine,sizeof (medicine));
//add med in binary
    ifstream mfil;
    mfil.open("C:/Users/asaid/OneDrive/Desktop/med_file.txt");
 medicine.readfile();
    for(int x=0;x<10;x++)
    {
        string medi,medi2;
        mfil >> medi>>medi2;
        QString qmedi = QString::fromStdString(medi);
 ui->textEdit->setText(qmedi);
    }
        mfil.close();

    medicines.close();


}
void adminn::on_actionsave_medicine_triggered()
{
    medicine.writetofile();

}

void adminn::on_actionsave_user_triggered()
{
    //user->writetofile(iusername, ipassword);
}
