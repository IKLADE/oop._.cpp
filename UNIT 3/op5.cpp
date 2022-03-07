#include<iostream>
using namespace std;
class complex
{
 int x,y;
public:
  complex() //default 
  {
    x=0;
    y=0;
 }
  complex(int a,int b=6) //parmetrized constructor with default argument
   {
      x=a;
      y=b;
   }
  friend istream& operator>>(istream &input,complex &c);//input
  friend ostream& operator<<(ostream &output,const complex &c); //output
 };
 istream& operator>>(istream &input,complex &c)
 {
   input>>c.x;
   cin>>c.y;
   return(input);
}
ostream& operator<<(ostream &output,const complex &c)
 {
   output<<c.x<<"\t";
   output<<c.y<<"\n";
   return(output);
}
  
int main()
{
  complex c1,c2,c3;
  cout<<"enter the first complex number\n";
  cin>>c1;  //c1.read(); cin=operator>>(cin,c1)
  cout<<"enter the second complex number\n";
  cin>>c2;  //c2.read();
  cout<<"complex numbers are\n";
   cout<<c1;  //c1.display(); cout=operator<<(cout,c1);
   cout<<c2; // c2.display();
}
