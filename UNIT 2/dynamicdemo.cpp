#include<iostream>
using namespace std;
int main()
{ 
  int **ptr;
  //cout<<"\n value at ptr "<<ptr<<"\n";
  ptr= new int*[5];//m 1 d array each of size n 5 and 5 
   for(int i=0;i<5;i++)
   ptr[i]=new int[5];
  for(int i=0;i<5;i++)
  for(int j=0;j<5;j++)
    ptr[i][j]=5;
   cout<<"\n value at ptr "<<ptr<<"\n";
   cout<<"\n   address of ptr "<<&ptr<<"\n";
   cout<<"\n  base  address of array of pointers"<<&ptr[0]<<"\n";
   for(int i=0;i<5;i++)
   cout<<&ptr[i]<<"\t"<<ptr[i]<<endl;
   int j=0;

   for(int i=0;i<5;i++)
{
  //  for(int j=0;j<5;j++)
   cout<<ptr[i]<<"\t"<<&ptr[i][j]<<"\t"<<ptr[i][j]<<"endl";
}
   
   

}

