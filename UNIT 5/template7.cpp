#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    T num1 ;  
    T num2 ;
    public:  
    A()
    {
        num1=0;
        num2=0;
    }
    A(T x,T y)
    {
        num1=x;
        num2=y;
    }
    void add()  
    {  
       cout << "Addition of num1 and num2 : " << num1+num2<<endl;  
    }  
      
};  
  
int main()  
{  
    A<int> d(3,5);  
    d.add();  
    A<float> d1(4.5,7.6);
    A<int> d2(13,15);
    d1.add();
    d2.add();
    return 0;  
}  

