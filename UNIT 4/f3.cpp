#include<iostream>
using namespace std;
class student
{
  int usn;
  int mark;
  void input()
  {
    cout<<"a private\n";
  }
 public:
   int i;
  void read()
  {
    cout<<"enter the details\n";
    cin>>usn>>mark>>i;
    input();
}
 void display()
  {
    read();
    cout<<" details\n";
    cout<<usn<<"\t"<<mark<<"\n";
}
};
int main()
{
  student s1;
  s1.read();
  s1.display();
 //  s1.input();//private
  //read();//should be associated with dot operator
 // display();
  //s1.usn=1;
 // s1.mark=25;
//  cout<<"details are "<<s1.usn<<"\t"<<s1.mark<<"\n";
 //   i=90;
    s1.i=90;
  cout<<s1.i;
  cout<<"s1 is\n";
  cout<<&s1;
  student s2;
  s2.read();
  s2.display();
}
 
