//Program to read a file
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    char fileName[30], ch;
    fstream fp;   //ifstream infile
    cout<<"Enter the Name of File: ";
    gets(fileName);
    fp.open(fileName, fstream::in); //infile.open(fileName)
    if(!fp)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    cout<<"\n------"<<fileName<<"-------\n";
    while(fp>>noskipws>>ch)//cin>>ch; fp>>ch
    cout<<ch;
    fp.close();
    cout<<endl;
    return 0;
}

