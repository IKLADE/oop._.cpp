#include<iostream>
using namespace std;
 int func(int x,const int y)
{
   x=x+y;//valid
  // y=y+x;//invlaid
   return(x);}
 int func(const int a,const char b) 
{
 // a=100;//invalid
//  b='f'; //invalid
  int x=a+4;
  char d=b+4;
   cout<<endl<<"d="<<d<<endl;
  return(x);
}

int main()
{
 int tot=func(4,5);
 cout<<"tot="<<tot<<"\n";
   tot=func(15,7);
  cout<<"tot="<<tot<<"\n";
 tot=func(4,'a');
cout<<tot;
  tot=tot+10;
 cout<<tot;
 tot=func(100,'f');
 cout<<tot;
char t='A';
int j=t;
cout<<"j="<<j<<"\n";
int j1=65;
char t1=j1;
cout<<endl<<"j1="<<t<<"\n";
}
