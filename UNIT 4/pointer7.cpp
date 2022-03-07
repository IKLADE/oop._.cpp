#include<iostream>
using namespace std;
class BC
{
  public:
   int b;
  virtual void show()
  {
    cout<<"b="<<b<<"\n";
    cout<<"base"<<endl;
   }
   virtual void demo()
   {
    cout<<"demo"<<endl;
   }
};
class DC :public BC
{
 public: 
      int d;
    void show()
    {
      cout<<"b="<<b<<"\n";
      cout<<"d="<<d<<"\n";
      cout<<"dc"<<endl;
    }
};
int main()
{
  BC *bptr;
  BC bobj;
  bptr=&bobj;
  bptr->b=100;
  bptr->show();

  DC dobj;
  bptr=&dobj;
   bptr->b=200;
   // bptr->d=300; invalid
   bptr->show();
   bptr->demo();

  DC *dptr;
  dptr=&dobj;
  dptr->show();
  dptr->d=300;
  dptr->b=200;
  dptr->show();
}
