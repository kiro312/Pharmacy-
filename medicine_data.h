#ifndef MEDICINE_DATA_H
#define MEDICINE_DATA_H
#include<iostream>
#include<string>
#include<fstream>
#include<QMessageBox>
using namespace std;
const string med_file ="C:/Users/asaid/OneDrive/Desktop/med_file.txt";
class medicine_data
{
public:
    medicine_data();
    void writetofile();
    void  readfile();

};

#endif // MEDICINE_DATA_H
