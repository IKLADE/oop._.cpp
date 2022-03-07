#include <iostream>  
#include <exception>  
using namespace std;  
class MyException : public exception{  
    public:  
        const char * what()   
        {  
            return "Invalid input!\n";  
        }  
};  
class student 
{
  int usn;
   int marks;
 int age;
    public: 
     student()
     {
       cin>>usn>>age>>marks;
        MyException e;
       if(age<18)
       throw e;
       if(marks>100)
       throw e;
     }
};
int main()  
{  
    try  
    {  
        student s1;
        
    }  
    catch(MyException& e)  
    {  
        cout << e.what();  
    }  
}  
