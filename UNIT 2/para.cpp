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
    ex(int a,int b=5);
 //   ex(int a);
    void display()
   {
    cout<<"x="<<x<<"y="<<y<<endl;
   }
};
ex::ex(int a,int b)
    {
      x=a;
      y=b;
    }
/*ex::ex(int a)
{
  x=a;
  y=a;
}*/
int main()
{
 ex e;//default constructor
 e.display();
 ex e1=ex();
 e1.display();
 ex e2=ex(3,4);//parametized constructor
 e2.display();
 ex e3(5,5); // constructor overloading
 e3.display();
 ex e4(4); //constructor overloading
 e4.display();
 int a,b;
 cout<<"enter the values of a and b\n";
 cin>>a>>b;
 ex e5(a,b);
 e5.display(); 
}
 
