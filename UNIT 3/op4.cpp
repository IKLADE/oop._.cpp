#include<iostream>
using namespace std;
class space
{
   int x,y,z;
  public :
      friend void operator -(space &s);
       void getdata(int a,int b,int c);
        void display();
};
 void operator-(space &s)      
 {
   s.x=-s.x;
   s.y=-s.y;
   s.z=-s.z;
 }

 void space::getdata(int a,int b,int c)
{
  x=a;
  y=b;
  z=c;
}
void space::display() 
    {
        cout<<"elements are\n"<<x<<"\t"<<y<<"\t"<<z<<endl;
    }

int main()
{
  space s1;
  s1.getdata(2,-5,-6);
  s1.display();
  -s1; //operator-(s1); compiler will convert 
  s1.display();
  return 0;
}
