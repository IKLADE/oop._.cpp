//illustration of multiple parameters
#include <iostream>  
using namespace std;  
template<class X,class Y> 
void fun(X a,Y b)  
{  
    cout << "Value of a is : " <<a<< endl;  
    cout << "Value of b is : " <<b<< endl;  
}  
  
int main()  
{  
   fun<int,float>(15,12.3);
   fun<char [],int>("bms",2);
   fun<char,float>('c',4.5);
   fun<int,int>(5,6);
   return 0;
}

