#include<iostream>
using namespace std;
int main()
{
 try{

  int a=4;
  int b=0;
  float c;
  if(b==0)
   throw 0;
   c= a/b;
  cout<<c;
  }
 catch(int i)
 {
  cout<<"denomiantor should not be  zero error\n";
}
}
