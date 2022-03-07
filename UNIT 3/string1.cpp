#include<iostream>
#include<string.h>
using namespace std;
class string1
{
 char *name;
 int len;
public:
   string1()
    {
     len=0;
     name= new char[len+1];
    }
 string1(char *s)
 { 
  len=strlen(s);
  name=new char[len+1];
  strcpy(name,s);
 }
void display()
{
  cout<<name<<"\n";
}
};
int main()
{
  char *first="shubha";
string1 name1(first);
string1 name2("rao");
string1 name3("bms");
name1.display();
name2.display();
name3.display();
}
