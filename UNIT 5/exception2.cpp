#include<iostream>
using namespace std;
int main()
{
  int a=4;
  int b;
  float c;
  try{  
    cout<<"enter the vlaue of b\n";
    cin>>b;
    if(b!=0)
    {
      c= a/b;
      cout<<c<<endl;
    }
    else
    {
      cout<<"control reached here\n";
      throw 10;
      cout<<"this message is not displayed\n";
    }
    cout<<"this message is outside division\n";
  }   
  catch(int i)
  {
    cout<<"denominator should not be zero \n"<<"value of b"<<i<<endl;
  }
  catch (float f)
  {
    cout<<"Inside float handler\n";
  }
  cout<<"this is after catch\n";
}
