#include <iostream> 
using namespace std; 
template <class T> 
class Array 
{ 
    T *ptr;
    int size;
public:
    Array()
    {
        size=3;
        ptr=new T[size];
        for(int i=0;i<size;i++)
            ptr[i]=0;

    }
    Array(T arr[], int s); 
    void print(); 
}; 


template <typename T> 
void Array<T>::Array(T arr[], int s) //Array(a,5) class_name :: function_name 
{ 
    ptr = new T[s]; //ptr=new int[5]
    size = s; 
    for(int i = 0; i < size; i++) 
        ptr[i] = arr[i]; 
} 

template <typename T> 
void Array<T>::print() 
{ 
    for (int i = 0; i < size; i++) 
        cout<<" "<<*(ptr + i); 
    cout<<endl; 
} 

int main() { 
    int arr[5] = {1, 2, 3, 4, 5}; 
    Array<int> a(arr, 5); 
    a.print(); 
    float arr1[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; 
    Array<float> obj1(arr1, 5); 
    obj1.print(); 
    
    return 0; 
} 
