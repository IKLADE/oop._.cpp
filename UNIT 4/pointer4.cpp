#include<iostream>
using namespace std;
class ex
{
  int x,y;  //member variables
  public:
    // ex()
    // {
    //   x=0;
    //   y=0;
    // }
    void getdata(int a,int b)
    {
      x=a;
      y=b;
    }
   void show()
   {
     cout<<"x="<<x<<"\n";
     cout<<"y="<<y<<"\n";
   }
};
int main()
{
  ex *ptr;   //pointer object(*ptr)  //ptr can point to any object of type ex
  ex e;// static memory and memory is allocated in stack
  ex e2;
  ptr=&e;   

  ex *p=new ex();//dynamic memory and memory is from heap.
  //class_name *pointer_name=new class_name()

  ptr->getdata(67,8);//(*p).getdata();
  ptr->show(); //(*p).show();

  ptr=&e2;
  ptr->getdata(77,5);
  ptr->show();
  
  p->getdata(4,3);
  p->show();


 } 



