#include <iostream>
using namespace std;
template <class T> 
void largest(T a[], int n,T& lar)
{
    for (int i = 0; i < n - 1; i++) 
    {
        if(a[i]>lar)
        lar=a[i];
    }
} 
// Driver Code 
int main() { 
    int a[5] = {10, 50, 30, 40, 20}; 
    int n = sizeof(a) / sizeof(a[0]); 
    int lar2=0;
    // calls template function  
   largest<int>(a,n,lar2); 
   cout<<"largest of array elements is\n";
   cout<<lar2<<"\n";
   float b[5] = {10.5, 50.6, 30.3, 40.8, 20.6}; 
    n = sizeof(a) / sizeof(a[0]); 
   float lar1=0.0;
   // calls template function  
   largest(b,n,lar1); 
   cout<<"largest of float array elements is\n";
   cout<<lar1<<"\n";
  return 0; 
}


