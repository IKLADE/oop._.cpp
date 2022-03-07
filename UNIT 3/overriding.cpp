//Function overriding
#include<iostream>
using namespace std;
class A
{
  public:
   void display()
{
  cout<<"Inside base class\n";
 }
};
 class B:public A
{  
  public:
    void display()//function overriding
    {
    //   A::display();//base class
        cout<<"Inside derieved class\n";
    }
};
int main()
{
  B obj1;
//  obj1.display();//derieved class
 // obj1.A::display();//base display
  A obj2;
 // obj2.display();//base class display
  A obj3= obj1; 
  obj3.display();
}


