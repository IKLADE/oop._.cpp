#include<iostream>
using namespace std;
struct student
{ 
private:
  int usn;
  int mark;
 public:
  void read()
  {
    cout<<"enter the details\n";
    cin>>usn>>mark;
}
 void display()
  {
    cout<<" details\n";
    cout<<usn<<"\t"<<mark<<"\n";
}
};
int main(int argc, char *argv[])
{
  struct student s1;
  s1.read();
  s1.display();
  s1.usn=1;
  s1.mark=25;
  cout<<"details are "<<s1.usn<<"\t"<<s1.mark<<"\n";
} 
