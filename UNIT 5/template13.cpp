#include<iostream>
using namespace std;
class ex{
public:
  template <class T> void function(T X)
   {
     cout<<"hello of class\n"<<X;
   }
};
int main()
{
  ex e;
  int x=9;
  e.function(x);
  float f=5.5;
  e.function(f);
}
