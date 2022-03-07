#include<iostream>
using namespace std;
class ex{
int x,y;
public:
   void setx(int a)//mutators
    {
     x=a;
    }
    void sety(int b)
     {
       y=b;
     }
    int getx() //accessors
    { 
      return(x);
     }
    int gety()
    {
      return(y);
    }
};
int main()
{
  ex e;
  e.setx(10);
  e.sety(3);
  int x=e.getx();
  cout<<"x="<<x<<endl;
  int y=e.gety();
  cout<<"y="<<y<<endl;
}

