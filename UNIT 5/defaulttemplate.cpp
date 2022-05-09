#include<iostream> 
using namespace std; 
  
template<class T, class U = char> void function(T x,U y='c')
{
  cout<<x<<y;
}

  
int main() 
{ 
    function<int,int>(4,5);
     function<int>(4);
    return 0; 
} 
