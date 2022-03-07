#include<iostream> 
using namespace std; 
  
class Test { 
    int value; 
public: 
    Test(int v = 0) {value = v;} 
    int getValue() const {
    //value=7;
   return value;} 
 
}; 
  
int main() { 
    const Test t(4); 
    cout << t.getValue();
    return 0; 
} 
