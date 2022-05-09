#include<iostream>
using namespace std;
int i=9;
int main()
{
   int i=6;
  // cout<<"enter the value of i\n";
  //cin>>i;
  //cout<<"hello world\n";
  cout<<i<<endl; //6
  cout<<"i outside main is \n"<<::i<<endl;
  cout<<"address of i which is declared inside main is"<<&i<<"\n";
  cout<<"address of i which is declared inside main is"<<&::i<<"\n";
  if(i==6)
  {
    int i=7;
    cout<<"i inside if"<<i<<"\n";//7
    cout<<"global i is"<<::i<<"\n";//9
    cout<<"address of i inside if"<<&i<<endl;
  }
  cout<<"global i is"<<::i<<"\n";//9
  cout<<"i is"<<i<<"\n"; //6
}
