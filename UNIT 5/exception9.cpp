#include <iostream> 
using namespace std;

class myException:public exception
{
public:
    void func()
    {
        cout<<"Error";
    }
};

class student{
    int usn;
    int age;
    int marks;
public:
 void read()
 {
    cin>>usn>>age>>marks;   
    if(age<18)
        throw 4;
    if(marks>100)
    {
        myException e;
        throw e;
    }
}
void display()
{
    cout<<"usn  "<<usn<<"age= "<<age<<"\n";
}
};
int main() 
{ 
    student s;
    try
    {
      s.read();
      s.display();
    }
    catch(int i)
    {
        cout<<"not eligible for voting\n";
    }

    catch(myException e)
    {
        e.func();
    }
    return 0;
}
