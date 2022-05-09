#include <iostream> 
using namespace std; 
// template <class T> 
// void swap(T &p, T &q)
// {
//      T temp;
//      temp=p;
//      p=q;
//      q=temp;
// }

template <class T> 
void bubbleSort(T a[], int n) 
{ 
    for (int i=0;i<n-1;i++)
    { 
        for (int j=i+1;j<n;j++)
        { 
            if (a[i]>a[j]) 
            {
                T x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
}

// Driver Code 
int main() { 
    int a[5] = {10, 50, 30, 40, 20};  
    bubbleSort<int>(a, 5); 
    cout << " Sorted array : "; 
    for (int i = 0; i < 5; i++) 
        cout << a[i] << " "; 
    cout << endl; 

    float b[5] = {10.5, 50.6, 30.7, 40.6, 20.7}; 
    //n = sizeof(b) / sizeof(b[0]);
    bubbleSort<float>(b, 5);
    cout << " Sorted array : "; 
    for (int i = 0; i < 5; i++) 
        cout << b[i] << " "; 
    cout << endl;
    return 0; 
} 

