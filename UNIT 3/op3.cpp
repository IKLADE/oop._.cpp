#include<iostream>
using namespace std;
class space
{
   int x,y,z;
  public :
      void operator -();
       void getdata(int a,int b,int c);
        void display();
};
 void space::operator-()
 {
   x=-x;
   y=-y;
   z=-z;
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
  space s;
   int a,b,c;
  s.getdata(2,-5,-6);
  s.display();
  -s; //s.operator-();compile will convert
  s.display();
  return 0;
}
