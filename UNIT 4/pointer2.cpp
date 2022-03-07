/* pointers and strings.*/
#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main () {
const char *names[MAX] = { "Bangalore", "Hubli", "Tumkur", "Mysore" };  //const,values cant be changed by user

   for (int i = 0; i < MAX; i++) {
      cout << "Address of each names[" << i << "] = ";
      cout << (names + i) << endl; 
      
   }
   for (int i = 0; i < MAX; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << *(names + i) << endl;
      
   }
    return 0;
}
