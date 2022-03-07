#include<iostream>
using namespace std;
class ex
{
  int x,y;
  public:
    ex()
    {
      x=10;
      y=20;
     }
   void display()
   {
    cout<<"x="<<x<<"y="<<y<<endl;
   }
};
int main()
{
 ex e;
 e.display();
 ex e1=ex();
 e1.display();
}
