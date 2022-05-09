#include<iostream>
using namespace std;
int main()
{
  int *ptr;//memory is allocated from  stack
  ptr=new int;//memory is allocated from heap
  *ptr=100;
 cout<<"ptr value ="<<*ptr<<endl;
 cout<<"adress of new location ="<<ptr<<endl;
 cout<<"address of ptr\n"<<&ptr<<endl; 
// delete(ptr);
  int *p;
  p= new int[5];
  for(int i=0;i<5;i++)
  p[i]=5;
cout<<p;
  for(int i=0;i<5;i++)
  {
  // cout<<"Value of dynamic array is"<<p[i]<<"\n";
 cout<<"addres of each location is"<<(p+i)<<"\n";
 // cout<<"value of array loction is"<<i[p]<<"\n";
  cout<<"value of array location is "<<*(p+i)<<"\n";
}
}
