#include<iostream>
using namespace std;
class B
{
  public:
    void show()
    {
      cout<<"Base\n";
     }
 };
class D:public B
{
  public:
    void show()
    {
      cout<<"Derieved\n";
     }
 };
int main()
{
 D d;
 cout<<"compile time polymorphsim\n"; 
 d.show();
 d.B::show();
 B *cptr;
 B  b;
 cout<<"Run time polyporhism\n";
 cptr=&b;
  cptr->show();
 cptr=&d;
 cptr->show();
}
