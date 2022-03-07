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
bool operator ==(complex c) {
         
         if(x == c.x && y == c.y) {
            return true;
         }
         
         return false;
      }
void display()
  {
   cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
  }
};
int main()
{
  int a,b;
  cout<<"enter the first complex number\n";
  cin>>a>>b;
  complex c1(a,b); //dynamic initilization
  cout<<"enter the second complex number\n";
  cin>>a>>b; 
complex c2(a,b);
 if(c1 == c2)// c1.operator==(c2);
  cout<<"equal\n";
 else
  cout<<"not equal\n";
}
