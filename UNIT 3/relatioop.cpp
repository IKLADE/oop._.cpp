#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet; 
     int inches; 
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
// method to display distance
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator- () {
         feet = -feet;
         inches = -inches;
         return Distance(feet, inches);
      }
friend ostream & operator << (ostream &out, const Distance &D);
friend istream & operator >>(istream &in, Distance &D);
      // overloaded < operator relatinal operator if(d1<d2) // d1.operator<(d2)
      bool operator <(const Distance& d) {
         if(feet < d.feet) {
            return true;
         }
         if(feet == d.feet && inches < d.inches) {
            return true;
         }
         
         return false;
      }
};
ostream & operator << (ostream &out, const Distance &D)
{
    out << "Feet " << D.feet << " inches " << D.inches << endl;
    return out;
}
istream & operator >>(istream &in, Distance &D)
{
   
   in>>D.feet;
   in>>D.inches;
    return in;
}
int main() {
   Distance D1(11, 10), D2(5, 11);
    if( D1 < D2 ) { //D1.operator <(D2);
      cout << "D1 is less than D2 " << endl;
   } else {
      cout << "D2 is less than D1 " << endl;
   }
    cout<<"enter the distance1 values\n";
    cin>>D1;
    cout<<"enter the distance2 values\n";
    cin>>D2;
   if( D1 < D2 ) {
      cout << "D1 is less than D2 " << endl;
   } else {
      cout << "D2 is less than D1 " << endl;
   }
   cout<<"entered distance is\n";
   cout<<D1;
   cout<<D2;
   
   return 0;
}

