#include "user_data.h"
#include "main_userwindow.h"
#include<QFile>
#include<fstream>
#include<QTextStream>
#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string.h>
using namespace std;

user_data::user_data()
{

}
//void user_data::getusername(char iusername[10])
//{
//    username_class[10] = iusername[10];
//}
//void user_data::getpassword(char ipassword[10])
//{
//    password_class = ipassword;
//}

void user_data::writetofile(string iusername,string ipassword)
{
    user_data user[10];
    ofstream userid;
    ifstream getidfile;
    getidfile.open("C:/Users/asaid/OneDrive/Desktop/id.txt");
    getidfile >> id;
    userid.open("C:/Users/asaid/OneDrive/Desktop/id.txt");
    ofstream newusers;
    newusers.open(file,ios::out|ios::binary|ios::app);
    if(!newusers)
    {
        QMessageBox msgError;
        msgError.setText("CRITICAL ERROR!\file not open!");
        msgError.setIcon(QMessageBox::Critical);
        msgError.setWindowTitle("Error");
        msgError.exec();
        exit(0);
    }
    strncpy(user[id].username_class, iusername.c_str(), sizeof(user[id].username_class));
    strncpy(user[id].password_class, ipassword.c_str(), sizeof(user[id].password_class));
    newusers.write((char *) &user,sizeof (user))<<endl;
    id++;
    userid<<id;
    newusers.close();
    userid.close();
    getidfile.close();
}
bool user_data::readfile(string iusername,string ipassword)
{
    user_data user[10];
    ifstream  newusers;
    newusers.open(file,ios::in|ios::binary);
    if(!newusers)
    {
        QMessageBox msgError;
        msgError.setText("CRITICAL ERROR!\file not open !");
        msgError.setIcon(QMessageBox::Critical);
        msgError.setWindowTitle("Error");
        msgError.exec();
        exit(0);
    }
    newusers.read((char *) &user,sizeof (user));
    for(int j=0;j<10;j++)
    {
        if(iusername==user[j].username_class && ipassword==user[j].password_class)
           {
            return true;
            break;
           }
    }
    return false;
    newusers.close();
}
