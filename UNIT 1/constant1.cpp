#include<iostream>
using namespace std;
class Test { 
    int value; 
    int x;
public: 
    Test(int v = 0) {value = v;} 
      
     
   int getValue() const 
{
  //value=100;//error
  int v=value+10;
  return value;
}  
int getValue1(const int v1,const int v2) const
{
  value=100;
   x=45;
  int v=value+10;
  // v1=v1+3;//error
   v2=v2+4;
  return value;
}    
}; 
  
int main() { 
    Test t(20); 
    cout<<t.getValue()<<endl; 
    cout<<t.getValue1(4,5)<<endl;
    return 0; 
} 
