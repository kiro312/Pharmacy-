#ifndef USER_DATA_H
#define USER_DATA_H
#include<iostream>
#include<string>
#include<fstream>
#include<QMessageBox>
#include<cstring>
#include<stdio.h>
#include<string.h>
using namespace std;


const string file = "C:/Users/asaid/OneDrive/Desktop/users.bin";
class user_data
{
public:
    user_data();
    //void getusername(char iusername[10]);
   // void getpassword(char ipassword[10]);
    void writetofile(string iusername,string ipassword);
    bool  readfile(string iusername,string ipassword);
    bool  checklogin(string iusername,string ipassword);
private:
    char username_class[10];
    char password_class[10];
    int id;
};

#endif // USER_DATA_H
