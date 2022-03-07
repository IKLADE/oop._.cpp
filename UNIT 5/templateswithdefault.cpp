#include<iostream> 
using namespace std; 
  
template<class T=int> class A 
{ 
public: 
    T x; 
     A()
     {
       x=7;
      }
     A(T a)
      {
         x=a;
      }
     void display()
     {
      cout<<"value of member variable is"<<x<<"\n";
   }
};
  
int main() 
{ 
     A<float> a; 
     A<int> b; 
     A< > c;
     a.display();
     b.display();
     c.display();
     A<int> obj(4);
     obj.display();
     A<string> obj1("hello");
     obj1.display();
       return 0; 
} 
