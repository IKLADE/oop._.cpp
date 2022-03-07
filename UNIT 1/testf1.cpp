#include <iostream>

using namespace std;
int g=100;//gloabal variable
void func()
{ 
  static   int s=1;
  int l=0;
   cout<<"l="<<l<<"\n";
   /* int l;//local variable
    g=g+10;
    cout<<"g inside func"<<g<<endl;
    l=25;
    cout<<"Local variable of func"<<l<<endl;*/
    s++;
    cout<<"static variable value is equal="<<s<<endl;
    l++;
    cout<<"local  variable value is equal="<<l<<endl;
}

int main()
{   
    
 /*   int g=50;
    int l;//local variable 
    cout<<g<<endl; //100
    func();
    cout<<g;//110
    g=g+5;*/
    func();
    /*cout<<g<<endl;
    cout<<"gloabl variable in side main"<<::g<<endl;
   cout<<"local variable of main"<<l;*/
   func();
   func();
   func();
    return 0;
}
