#include <iostream>
#include <stdexcept>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main() {
   DoubleSubscriptedArray integers1{2, 4}; // seven-element array
   DoubleSubscriptedArray integers2; // 3-by-3 array by default

   // print integers1 size and contents
   cout << "Size of DoubleSubscriptedArray integers1 is "
      << integers1.getRowSize() << " X " << integers1.getColumnSize()
      << "\nDoubleSubscriptedArray after initialization:\n" << integers1;

   // print integers2 size and contents
   cout << "\nSize of DoubleSubscriptedArray integers2 is "
      << integers2.getRowSize() << " X " << integers2.getColumnSize()
      << "\nDoubleSubscriptedArray after initialization:\n" << integers2;

   // input and print integers1 and integers2
   cout << "\nEnter 17 integers:" << endl;
   cin >> integers1 >> integers2;

   cout << "\nAfter input, the DoubleSubscriptedArrays contain:\n"
      << "integers1:\n" << integers1
      << "\nintegers2:\n" << integers2 << endl;

   // use overloaded inequality (!=) operator
   cout << "Evaluating: integers1 != integers2" << endl;

   if (integers1 != integers2) {
      cout << "integers1 and integers2 are not equal" << endl;
   }

   // create DoubleSubscriptedArray integers3 using integers1 as an
   // initializer with copy constructor; print size and contents
   DoubleSubscriptedArray integers3(integers1);

   cout << "\nSize of DoubleSubscriptedArray integers3 is "
      << integers3.getRowSize() << " X " << integers3.getColumnSize()
      << "\nDoubleSubscriptedArray after initialization:\n" << integers3;

   // use overloaded assignment (=) operator
   cout << "\nAssigning integers2 to integers1:" << endl;
   integers1 = integers2; // note target Array is smaller

   cout << "integers1:\n" << integers1
      << "\nintegers2:\n" << integers2;

   // use overloaded equality (==) operator
   cout << "\nEvaluating: integers1 == integers2" << endl;

   if (integers1 == integers2) {
      cout << "integers1 and integers2 are equal" << endl;
   }

   // use overloaded subscript operator to create rvalue
   cout << "\nintegers1(1, 2) is " << integers1(1, 2);

   // use overloaded subscript operator to create lvalue
   cout << "\n\nAssigning 1000 to integers1(1, 2)" << endl;
   integers1(1, 2) = 1000;
   cout << "integers1:\n" << integers1;

   // attempt to use out-of-range subscript
   try {
      cout << "\nAttempt to assign 1000 to integers1(15, 2)" << endl;
      integers1(15, 2) = 1000; // ERROR: out of range
   }
   catch (invalid_argument& ex) {
      cout << "\nAn exception occurred: " << ex.what() << endl;
   }
} 