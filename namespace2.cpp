#include <iostream>
#include"head1.h";
#include"head2.h"
using namespace std;
using namespace first_space;
int main () {
   // This calls function from first name space.
   func();
  second_space::func();
   
   return 0;
}
