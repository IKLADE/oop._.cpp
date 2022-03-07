//dyamic constructor
#include<iostream>
using namespace std;
class ex{
int *ptr;
public:
 ex()
 {
   ptr= new int;
   *ptr=10;
 }
ex(int x)
 {
   ptr= new int;//dynamic constructor
   *ptr=x;
 }
void display()
{
  cout<<"Value at newly allocated memory is"<<*ptr<<"\n";
}
};

 
int main()
{
  ex e1;//e1.ex()
  e1.display();//10
ex e2;
e2.display();// 10
int p;
cout<<"enter the value of p\n";
cin>>p;
ex ex3(p);//dynamic initilaization
ex3.display();

}
