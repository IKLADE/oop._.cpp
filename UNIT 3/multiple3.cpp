#include<iostream> 
using namespace std; 
  
class A 
{ 
  protected:  int x;
public: 
  A()  { x=0;cout << "A's constructor called" << endl; } 
  A(int a)
  {
    x=a;
  }
}; 
  
class B 
{ 
  protected: int y;
public: 
  B()  { y=0;cout << "B's constructor called" << endl; } 
  B(int b) 
  {
    y=b;
  }
}; 
  
class C: public B, public A  // Note the order 
{ 
  protected:  int z;
public: 
  C()  { z=0; cout << "C's constructor called" << endl; } 
  C(int a,int b,int c):B(b),A(a)
  {
    z=c;
  }
   void display()
   {
    cout<<"x="<<x<<"\t"<<"y="<<y<<"\t"<<"z="<<z<<"\n";
    }
}; 
  
int main() 
{ 
    C c; 
    c.display(); 
   //  int x,y,z;
  // cin>>x>>y>>z;
    C obj1(4,5,6);
    obj1.display();
    
    return 0; 
} 
