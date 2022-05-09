#include<iostream>
using namespace std;
class Test { 
    int value; 
   
public: 
    Test(int v = 0) {value = v;} 
    void func(const Test &t2) 
     {
    //    t2.value=35;
        value=t2.value; 
        }   
     void display()
     {
      cout<<value<<"\n";
     }
   
    
}; 
  
int main()
 { 
    Test t(20); 
    Test t1(45);
   t.display();
     t1.display();
    t.func(t1);
    t1.display();
      return 0; 
} 
