#include<iostream>
using namespace std;
class ex
{ 
  int x;
  int y;
  
void input(){
  cout<<"inside private access specifier";
}
public:
int z;
void read()
{
 input();
 x=10;
 y=5;
z=100;
}
void read1(int a,int b)
{
  x=a;
  y=b;
  z=b;
 
}
void display()
{
  //read();
 cout<<"x="<<x<<"\t"<<"y="<<y <<"\t"<<"z="<<z<<endl;
 }
}; 
int main()
{
  ex e;//object or variable of type ex or  instance of class variable
  ex e1;
//  x=100;
 // y=79;
  //e.x=5;//invalid
//  e.y=78;//invalid
  e.read();
  e.z=90;
  e.display();
  int p,q;
  cout<<"enter p and q\n";
  cin>>p>>q;
 ex e3;
  e3.read1(p,q);
  e3.display();
}


  

