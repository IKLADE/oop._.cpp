#include<iostream>
#include"header1.h"
#include"headrer2.h"
using namespace std;
int main()
{
  int a,b;
   float c,d,res;
   int r1,r2,r3;
  cout<<"enter the numbers\n";
  cin>>a>>b;
  cout<<"enter numbers for division\n";
  cin>>c>>d;
  r1=add(a,b);
  r2=sub(a,b);
  r3=mul(a,b);
  res=div(c,d);
  cout<<r1<<"\t"<<r2<<"\t"<<r3<<"\t"<<res<<"\n";
}

