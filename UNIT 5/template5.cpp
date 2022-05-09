/* program to demonstrate template function overloading*/
#include <iostream>  
using namespace std;

template<class X> 
void fun(X a)  //fun1
{  
    cout << "Value of a is : " <<a<< endl;  
}

template<class X,class Y> 
void fun(X b ,Y c)  
{  
    cout << "Value of b is : " <<b<< endl;  
    cout << "Value of c is : " <<c<< endl;  
}

int main()  
{  
   fun<int>(10);  
   fun<int,float>(20,30.5);  
   fun("hello");
   fun('c',56);
   return 0;  
}  

