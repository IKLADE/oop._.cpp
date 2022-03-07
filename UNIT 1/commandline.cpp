#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
  cout<<"command line arguments are\n";
  for(int i=1;i<argc;i++)
   cout<<argv[i]<<"\t";
}
