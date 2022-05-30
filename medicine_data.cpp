#include "medicine_data.h"
#include "main_userwindow.h"
#include<QFile>
#include<fstream>
#include<QTextStream>
#include<iostream>
using namespace std;
medicine_data::medicine_data()
{

}
void medicine_data::readfile()
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
    medicines.close();
}
void medicine_data::writetofile()
{
    medicine_data medicine[10];
    ofstream medicines;
    medicines.open(med_file,ios::out|ios::binary|ios::app);
    if(!medicines)
    {
        QMessageBox msgError;
        msgError.setText("CRITICAL ERROR!\file not open!");
        msgError.setIcon(QMessageBox::Critical);
        msgError.setWindowTitle("Error");
        msgError.exec();
        exit(0);
    }
    medicines.write((char *) &medicine,sizeof (medicine))<<endl;
    medicines.close();
}
