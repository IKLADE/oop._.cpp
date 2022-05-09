#include<iostream>
using namespace std;
int main()
{
 try{

  int a;
  int b;
  cout<<"enter the values of a and b\n";
  cin>>a>>b;
  float c;
  if(b==0)
   throw 'c';// throw 4.5
 c= a/b;
 cout<<c;
 int a1[2];
 int j;
 cout<<"enter the value of j\n";
 cin>>j;
 if(j>2)
 {
   throw 5;
   // cout<<"this line is not reached\n";
 }
 a1[j]=20;
 cout<<a1[j];
 
//  a1[j]=15;
}
 catch(int i) //catch(float f)
 {
  cout<<"array out of bounds error\n";
}
catch(char c)
{
  cout<<"denominator can not be zero\n";
}
catch(...)
{
 cout<<"genral exception caught\n";
}

}
