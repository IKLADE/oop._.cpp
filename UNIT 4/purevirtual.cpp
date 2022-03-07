#include<iostream> 
using namespace std; 
  
class Base 
{ 
   int x; 
public: 
    virtual void fun()=0; //pure virtual function
    int getX() { return x; } 
}; 
  
// This class inherits from Base and implements fun() 
class Derived: public Base 
{ 
    int y; 
public: 
    void fun() { cout << "fun() called by derieved class"<<endl; } 
}; 

class Derived2 :public Base
    {
        int z;
    public:
        void fun(){ cout<<"derived2"<<endl;}
    };

  
int main(void) 
{ 
    Derived d; 
    d.fun(); 
    // Base B;
    // B.fun();
    Derived2 d2;
    d2.fun();
    return 0; 
} 
