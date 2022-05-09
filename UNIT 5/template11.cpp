#include <iostream>  
using namespace std;  
 template<class T>
class A   
{  
    public:  
    int num1 ;  
    int num2 ;
    A()
    {
        num1=0;
        num2=0;
    }
    A(int  x,int  y)
    {
        num1=x;
        num2=y;
    }
  void display(T &p);  
    
}; 
template <typename T> 
void A<T>::display(T &p)
{  
       cout << "Addition of num1 and num2 : " << num1+num2<<endl; 
       cout<<p<<endl;     
}   
  
int main()  
{  
    A d<int>(3,5);  
    d.display<int>(12);  
    d.display<char>('h');
    d.display<float>(4.5);
      return 0;  
}  

