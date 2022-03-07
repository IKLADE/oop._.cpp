//illustration of multiple parameters
#include <iostream>  
using namespace std;  
template<class X,class Y> void fun(X a,Y b)  
{  
    cout << "Value of a is : " <<a<< std::endl;  
    cout << "Value of b is : " <<b<< std::endl;  
}  
  
int main()  
{  
   fun<int,float>(15,12.3); 
   fun("bms",2); 
   fun('c',4.5f);
   fun(5,6);
   
   return 0;  
}  

