#include <iostream>  
#include <exception>  
using namespace std;  
class ex{  
    public:  
        ex(){cout<<"construcotr\n";}
    
};

int main()  
{  
    try  
    {  
        int x, y;  
        cout << "Enter the two numbers : \n";  
        cin >> x >> y;  
        if (y == 0)  
        {  
            ex e;  
            throw e;  
        }  
        else  
        {  
            cout << "x / y = " << x/y << endl;  
        }  
    }  
    catch(ex e1)  
    {  
        cout << "in catch handler\n";  
    }  
}  
