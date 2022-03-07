#include<iostream>
using namespace std;
class ex{
int a;
public:
  template <class T> void function(T X,int p=9)
   {
     cout<<"hello of class"<<X<<"\n";
     a=p;
     cout<<"value  of a is"<<a<<"\n";
   }
};
int main()
{
 ex e;
  cout<<"integer data to function\n";
  e.function(4,6);
  cout<<"float data to function\n";
  e.function(4.5,8);
  e.function(3);
}
