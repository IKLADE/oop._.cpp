#include<iostream>
using namespace std;
class ex
{
  int x;
  public:
  ex()
  {
   cout<<"In constructor\n";
   x=100;
 }
 void display() 
 {
  cout<<"x="<<x<<"\n";
 }
~ex()
{
cout<<"destructor called\n";
}
};
int main()
{
ex e1;
e1.display();
}
