#include<iostream>
using namespace std;

class mat{
    int n,m;
    int **ptr;
    public:
        mat()
        {
            m=2;
            n=2;
            ptr = new int*[m];
            for(int i=0;i<m;i++)
            {
                ptr[i]=new int[n];
            }
            for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                ptr[i][j]=0;
            }
        }
        mat(int x, int y)
        {
            m=x;
            n=y;
            ptr = new int*[m];
            for(int i=0;i<m;i++)
                ptr[i]= new int[n];
            for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ptr[i][j]=0;
        }

        void read();
        void display();
        friend mat mul(int b, mat &a);

       ~mat();
        };

void mat::read()
{
    for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                cout<<"Enter the "<<i<<" "<<j<<" :";
                cin>>ptr[i][j];
            }
}

void mat::display()
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
}
mat::~mat()
        {
            cout<<"Destructor called:";
           for(int i=0;i<m;i++)
                 delete ptr[i];
                delete ptr;
        }

mat mul(int a, mat &b)
{
    mat res(b.m, b.n);
    for(int i=0;i<b.m;i++)
    {
        for(int j=0;j<b.n; j++)
        {
            res.ptr[i][j]= a * b.ptr[i][j];
        }
        cout<<endl;
    }
    return res;
}

int main()
{
    int m,n;
    cout<<"Enter the number of rows and colm: ";
    cin>>m>>n;
    mat a(m,n);
    a.read();
    mat result(m,n);
    int k;
    cout<<"enter the no. to be multiplied: ";
    cin>>k;
    result = mul(k,a);
    cout<<"M1\n";
    a.display();
    cout<<"RES: \n";
    result.display();
}
