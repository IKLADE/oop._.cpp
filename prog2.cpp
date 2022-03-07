#include<iostream>
using namespace std;
class student
{
 int usn;
 int marks[3];
public:
 void read()
 {
   cout<<"enter the student usn and marks\n";
   cin>>usn;
   for(int i=0;i<3;i++)
    cin>>marks[i];
  }
void display()
{
   cout<<usn<<"\t";
   for(int i=0;i<3;i++)
    cout<<marks[i]<<"\t";
    cout<<endl;
  }
int sum()
{
  int total=0;
  for(int i=0;i<3;i++)
    total=total+marks[i];
   return(total);
}
};
int main()
{
  student s1;
  s1.read();
  int res= s1.sum();
  cout<<"result="<<res<<endl;
  student s[10];
  for(int i=0;i<3;i++)
  { 
   s[i].read();
  int res= s[i].sum();
  cout<<"result="<<res<<endl;
 }
}
  

