#include<iostream>
using namespace std;
int main()
{
  int arr[10]={1,99,4,37,88,3,19,45,62,87};

  int i,num,*ptr;  //stntax for pointer char *ptr  
  int flag=0;     

  ptr=arr;//base address or ptr= &arr[0];    arr{1}  & address

  cout<<"Enter the element to be searched";
  cin>>num;//100

  for(i=0;i<10;i++)      //ptr=1000,*ptr=1,&ptr=2000  i=1,2,3,4,    8,9
  {
     if(*ptr==num)  
     {
       cout<<"found\n";// flag=1;
       break;
     } 

     else if(i==9)
      cout<<"not found\n";

     ptr++;
  }
}

