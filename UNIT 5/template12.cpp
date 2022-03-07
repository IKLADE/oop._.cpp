#include <iostream>  
using namespace std;  
/*template<class X> void fun(X a)  
{  
    cout << "Value of a is : " <<a<< endl;  
}*/  
template<class X> void fun(X b ,X c=X(5))  
{  
    cout << "Value of b is : " <<b<< endl;  
    cout << "Value of c is : " <<c<< endl;  
}  
int main()  
{  
   fun(10);  
   fun(20,30);  
   fun(20.5);
   fun("hello","world");
  // fun("Good");
   fun('g'); 
   return 0;  
}  

