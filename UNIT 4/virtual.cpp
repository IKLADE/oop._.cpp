/* program to demonstrate virtual functions*/
#include<iostream>
using namespace std;
class base
{
  public:
     void display(){ cout<<"\n in base\n";}
    virtual void show(){ cout<<"show base\n";}
};
class dc:public base
{
 public:
     void display(){ cout<<"\n Display in deieved\n";}
     void show(){ cout<<"\n Show derived\n";}
};
int main()
{
  base B;
  dc D;
  base *bptr;
  cout<<"\n bptr points to Base\n";
   bptr=&B;
   bptr->display();//base class
   bptr->show();//base class
   cout<<"\n bptr points to derieved\n";
   bptr=&D;
   bptr->display();//base class
   bptr->show();//derieved class
 }

 

