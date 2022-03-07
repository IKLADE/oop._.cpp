#include<iostream>
#include<string.h>
using namespace std;
class string1
{
  char str[100];
  int len;
public :
  void read();
  void print();
 string1  operator +(string1);
 int operator ==(string1);
};
void string1::read()
{
  cout<<"enter the string:\n";
  cin>>str;
  len=strlen(str);
}
void string1::print()
{
 cout<<"String is"<<str;
}
string1 string1::operator+(string1 s)//s3=s1+s2==> s3=s1.operator+(s2);
{
  string1 t;
  strcpy(t.str,str);
  strcat(t.str,s.str);
  t.len=len+s.len;
  return t;
}
int string1 ::operator==(string1 s) // s1==s2===> s1.operator==(s2)
{
  if(strcmp(str,s.str)==0)
  return(1);
  else
  return(0);
}
int main()
{
 string1 s1,s2,s3;
 s1.read();
 s2.read();
 s3=s1+s2;
 if(s1==s2)
   cout<<"equal\n";
 else
   cout<<"not equal\n";
 s3.print();
}  
