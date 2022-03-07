#include <iostream>
using namespace std;
class array {
   private:
      int arr[5];
      
   public:
      array() {
         int i;
         for(i = 0; i < 5; i++) {
           arr[i] = i;
         }
      }
      
      int &operator[](int i) {  //A[1]==>A.operator [](1)
         if( i >= 5 ) {
            cout << "Index out of bounds" <<endl; 
            // return first element.
            return arr[0];
         }
         
         return arr[i];
      }
};

int main() {
   array A;

   cout << "Value of A[2] : " << A[2] <<endl;//A.operator[](2);
   cout << "Value of A[5] : " << A[5]<<endl;
   cout << "Value of A[4] : " << A[4]<<endl;
    cout << "Value of A[0] : " << A[0]<<endl;    

   return 0;
}
