#include<iostream>
using namespace std;
class Abase
{
  int x;//private
  protected:
   int z;
   void proread()
   {
     cout<<"enter the z values\n";
     cin>>z;
    }
   void prodisplay()
    {
     cout<<"value of z is\n";
     cout<<z;
    }

  public:
   void read()
   {
     cout<<"enter the value of x\n";
      cin>>x;
    //proread();//valid
    // cin>>z;//valid
   }
   void display()
   {
     cout<<"inside base class\n";
     cout<<x;
   //prodisplay();//valid
   //  cout<<z;//valid
    }
};
class sub :private Abase
{
  int y;    // private of sub class will have z,proread(),prodisplay()
            //read(),display();
  public:   
  void input()
  {
    cout<<"enter the value of y\n";
    cin>>y;//valid
   // read();//valid
   // cin>>x; //invalid its private to base
    cin>>z;//valid 
    proread();//valid
  }
  }
  void output()
   {
    cout<<"inside derieved class\n";
    cout<<"y="<<y<<endl; //valid
   // cout<<"x="<<x<<endl;  //invalid
   // cout<<"z="<<z<<endl; //valid
    // prodisplay();  //valid
    display();
   }
};
  class sub1 : public sub
{
    //public section will have input and output
 public:
 void dis()
 { 
   proread();/* invalid*/
   read(); /*invalid*/
   input();/*valid*/
   ouput();/*valid*/
   cout<<"inside the sub1 class\n"};
  }
};
int main()
{
  Abase obj;
//  obj.x=10;//invalid private variable
  obj.read();//valid
  obj.display();//valid
  sub obj1;
  obj1.read();//invalid
  obj1.display();//invalid
  obj1.input();//valid
  obj1.output();//valid
 // obj.input();//invalid
 // obj.output();//invalid
 //obj.z=100;// invalid
 //obj.proread();//invalid
 //obj.prodisplay();//invalid
//obj1.z=200;// invalid
 //obj1.proread();//invalid
 //obj1.prodisplay();//invalid
  sub1 obj2;
   //obj.prodisplay();//invalid
//obj2.z=200;// invalid
 //obj2.proread();//invalid
 //obj2.prodisplay();//invalid
}
