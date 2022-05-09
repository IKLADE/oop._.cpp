#include <iostream>
using namespace std;
 
// Here we specify the exceptions that this function 
// throws.
void fun(int *ptr, int x) 
{
    if (ptr == NULL)
        throw 5;
    if (x == 0)
        throw 10.5;
    /* Some functionality */
}
 
int main()
{
    try 
    {
       fun(NULL, 0);  
    }
    catch(...)
    {
        cout << "Caught exception from fun()";
    }
    return 0;
}
