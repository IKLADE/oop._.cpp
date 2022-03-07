#include <iostream>  
using namespace std; 
int func(int a,int b,char c){cout<<a;} 
int add(int a , int b)  
{  
  return a+b;  
}  
int sub(int a , int b)  
{  
  return a-b;  
}  
int sum1(int a)
{
  cout<<"inside sum1";
  return 1;
}

// int a= add(5,4) a=9
// int b=sub(5,4) b=1
//int (*fptr)(int,int)
// fptr=add   cout<<fptr(5,4)
//fptr=sub(5,4)  cout<<*fptr  1
int main()  
{  
   int (*funcptr)(int,int);  // function pointer declaration  
   int (*fptr)(int); //fptr can be used to point to any function which has 1 int paramenter
   funcptr=add; // funcptr is pointing to the add function  
   int sum=funcptr(5,5);  
   cout << "value of sum is :" <<sum<<endl;  //cout<<funcptr(5,4); 
   fptr=sum1;
   fptr(5);    
   // sum=fptr(4);
   cout<<"value of sum is:"<<fptr(5)<<endl;
   funcptr=sub;
   int res=funcptr(6,4);
   cout << "value of sub is :" <<res<<endl;  
   return 0;  
}


