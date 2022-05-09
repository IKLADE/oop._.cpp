#include<iostream>
using namespace std;
 
class A
{
        
        public:
                A( )  
                {
                     
                     cout << "\n Constructor of class A  is invoked" ;
                }
                ~A()
                {
                        cout<<"destructor A"<<endl;
                }
                              
                
};
 
class B : public A
{
        protected:
                int y ;
        public:
                B( ) 
                {
                       y=0;
                        cout << "\n Constructor of class B without any argument is invoked" ;
                }
                  
                B( int X):A()   
                {
                 y=X;                       
                cout << "\n Constructor of class B  is invoked" ;
                }
                ~B()
                {
                        cout<<"destructor B"<<endl;
                }
              void displayy()
                { cout << "\n\t y= " << y ; }
                
                 };
 
class C : public B
{
                public:
                C( ) : B( )   
               {
                       cout << "\n Constructor of class C  is invoked\n" ;
                }
                
                C(int X):B(X)
               {               
                       cout << "\n Constructor of class C  is invoked" ;
                }
                ~C()
                {
                        cout<<"destructor C"<<endl;
                }
               
              
};
 
 
int main()
{
                cout << "\n\n The second object is\n" ;
                C c2(5) ;
                c2.displayy( );
              
return 0;
}
