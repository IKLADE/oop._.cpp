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
      cout<<"Base\n";
     }
 };
int main()
{
 D d;
 d.show();
 d.B::show();
}
