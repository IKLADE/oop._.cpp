#include<iostream> 
using namespace std; 
  
template<class T, class U = char> void function(T x,U y)
{
  cout<<x<<y;
}

  
int main() 
{ 
    function(4,5);
     function(4);
    return 0; 
} 
