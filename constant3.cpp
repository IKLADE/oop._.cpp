#include<iostream> 
using namespace std; 
class Demo 
{ 
    int value; 
    public: 
    Demo(int v = 0) {value = v;} 
    void showMessage() 
    { 
        cout<<"Hello World We are  Inside"
        " showMessage() Function"<<endl; 
    } 
    void display()const
    { 
   //  value=56;        
cout<<"Hello world  Inside display() Function"<<endl; 
    } 
}; 
int main() 
{ 
   //Constant object are initialised at the time of declaration using constructor 
    const Demo d1(4); 
//  d1.showMessage();//Error occurred . 
    d1.display(); 
    Demo d2(5);
     d2.showMessage();
      d2.display();
    return(0); 
} 
