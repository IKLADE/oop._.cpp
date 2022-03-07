#include <iostream> 
using namespace std;

int main() 
{ 
     int arr[] = {1,2,3,4,5};  
   cout<<"The elements of array : "; 
    try{

   for(int i = 0; i<=6; i++)
  {
      if(i<=4)
           cout<<arr[i]<<"\n";
    else
       throw 5;
    }
  }

catch(int j)
{
  cout<<"array out of bound\n";
}
   return 0; 
}
