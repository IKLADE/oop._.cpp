#include<iostream>
using namespace std;
int main()
{
 try{

  int a=4;
  int b=5;
  float c;
  if(b==0)
   throw 'c';// throw c
 else
 {
  c= a/b;
 // cout<<c;
  //throw 2;
 throw 4.5;
 }
 
}
 catch(char i) //catch(float f)
 {
  cout<<"denomiantor should not be  zero its an error\n";
}
catch(float f)
{
 cout<<"user exception handler for float\n";
}
catch(...)
{
  cout<<"generic exception handler\n";
}
}
