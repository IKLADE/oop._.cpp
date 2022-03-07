#include <iostream> 
using namespace std;

int main() { 
   try{

   int arr[] = {1,2,3,4,5};  
   cout<<"The elements of array : "; 
   for(int i = 0; i<=6; i++)
   {
      if(i>=5)
       throw i; 
      cout<<arr[i]<<"\n";
    }
   }
   catch(int c)
   {
     cout<<"array out of bound\n";
   }
   return 0; 
}
