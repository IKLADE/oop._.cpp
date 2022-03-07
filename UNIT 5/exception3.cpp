#include<iostream>
using namespace std;
int main()
{
 try{

  int a=4;
  int b=0;
  float c;
  if(b==0)
   throw 5;
   c= a/b;
  cout<<c;
  }
catch(double i)
{
cout<<"divide by zero error\n";
}
 /*catch(...)
 {
  cout<<"generic error\n";
}*/
}
