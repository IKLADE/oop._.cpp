#include<iostream>
using namespace std;
class ex{
int *ptr;
public:
 ex()
 {
   ptr= new int[5];
   for(int i=0;i<5;i++)
   cin>>ptr[i];
 }

void display()
{
  cout<<"Value at newly allocated memory is\n";
  for(int i=0;i<5;i++)
   cout<<ptr[i]<<"\n";
}
~ex()
{
cout<<"destructor called\n";
delete(ptr);
}
};

 
int main()
{
  ex e1;//e1.ex();
  e1.display();
}
