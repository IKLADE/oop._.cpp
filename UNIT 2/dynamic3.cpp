#include<iostream>
using namespace std;
class ex{
int *ptr;
public:
 ex()
 {
   ptr= new int[10];
   for(int i=0;i<5;i++)
   ptr[i]=10;
 }
void display()
{
  cout<<"Value at newly allocated memory is\n";
  for(int i=0;i<5;i++)
   cout<<ptr[i]<<"\n";
}
};

 
int main()
{
  ex e1;
  e1.display();
}
