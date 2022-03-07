#include<iostream>
using namespace std;
class Area
{
	public:
		int getArea(int l, int b)
		{
			return l * b;
		}
            void display()
            {
              cout<<"in area class\n";
             }
};

class Perimeter
{
	public:
		int getPerimeter(int l, int b)
		{
			return 2*(l + b);
		}
            void display()
            {
              cout<<"in perimeter class\n";
            }
};

class Rectangle : public Area, public Perimeter
{
	int length;
	int breadth;
	public:
		Rectangle()
		{
			length = 7;
			breadth = 4;
		}
		int area()
		{
			return getArea(length, breadth);
		}
		int perimeter()
		{
			return getPerimeter(length, breadth);
		}
           void display()
            {
              Area::display();
              cout<<"in rectangle class\n";
            }
};
int main()
{
	Rectangle rt;
	cout << "Area : " << rt.area() << endl;
	cout << "Perimeter : " << rt.perimeter() << endl;
        rt.display(); 
        rt.Perimeter::display(); 
	return 0;
}
