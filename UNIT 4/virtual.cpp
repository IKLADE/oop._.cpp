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
  dc *dptr;
   bptr=&B;
   bptr->display();//base class
   bptr->show();//base class

   bptr=&D;
   bptr->display();//base class
   bptr->show();//derieved class

   dptr=&D;
   dptr->display();//derived
   dptr->show(); //derived

   // dptr=&B; //invalid
   // dptr->display();
   // dptr->show(); 

 }

 

