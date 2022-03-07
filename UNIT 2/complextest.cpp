#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        Complex(){
            cout<<"Constructor1\n";
            a=0;
            b=0;
        }
      Complex(int k){  
            cout<<"\nConstructor2\n";
            a=k;
            b=0;
        }
       Complex(int k,int q){  
            cout<<"\nConstructor2\n";
            a=k;
            b=q;
        }
        void Disp(){
      
            cout<<"\nA="<<a<<" B="<<b;
        }
};

int main(){
    Complex a;
    a.Disp();//0,0
    int x=4;
    int y=6;
    cout<<"address of object a\n"<<&a<<endl;
    a = x;//basic to class it is invoking paratmetrized constructor (conversion
             //constructor).
    cout<<"address of object a\n"<<&a<<endl;
    a.Disp();
    a={x,y}; 
    cout<<"address of object a\n"<<&a<<endl;
    a.Disp();
}
