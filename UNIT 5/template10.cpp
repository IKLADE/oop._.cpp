#include <iostream>
using namespace std;
template <class T>  //template <typename T> 
T largest(T a[], int n)
{
    T lar=a[0];
    for (int i=1;i<n-1;i++) 
    {
        if(a[i]>lar)
            lar=a[i];
    }
    return(lar);
} 

// Driver Code 
int main() { 
    int a[5] = {10, 50, 30, 40, 20}; 
    int n = sizeof(a) / sizeof(a[0]);
    // calls template function
    cout<<largest<int>(a,n)<<endl;
   // int result=largest(a,n);
   // cout<<"largest of array elements is\n";
   // cout<<result<<"\n";
    float b[5] = {10.5, 50.6, 30.3, 40.8, 20.6}; 
    n = sizeof(b) / sizeof(b[0]); 
    // calls template function  
    float f=largest<float>(b,n); 
    cout<<"largest of float array elements is\n";
    cout<<f<<"\n";
    return 0; 
}

