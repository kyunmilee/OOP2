#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "HourlyEmployee.h"
using namespace std;

void virtualViaPointer(const Employee* const); // prototype
void virtualViaReference(const Employee&); // prototype

int main() {
   // set floating-point output formatting
   cout << fixed << setprecision(2);

   // create derived-class objects
   HourlyEmployee hourlyEmployee("Karen", "Price", "222-22-2222", 16.0, 45);

   cout << "Employees processed individually using static binding:\n\n";

   // output each Employee�s information and earnings using static binding
   cout << hourlyEmployee.toString() << "\nearned $" << hourlyEmployee.earnings() << "\n\n";

   // create vector of five base-class pointers
   vector<Employee*> employees(1);

   // initialize vector with Employees
   employees[0] = &hourlyEmployee;

   cout << "Employees processed polymorphically via dynamic binding:\n\n";

   // call virtualViaPointer to print each Employee's information
   // and earnings using dynamic binding
   cout << "Virtual function calls made off base-class pointers:\n\n";

   for (size_t i{0}; i < employees.size(); ++i) {
      virtualViaPointer(employees[i]);
   }

   // call virtualViaReference to print each Employee's information 
   // and earnings using dynamic binding
   cout << "Virtual function calls made off base-class references:\n\n";

   for (size_t i{0}; i < employees.size(); ++i) {
      virtualViaReference(*employees[i]); // note dereferencing
   }
} 

// call Employee virtual functions print and earnings off a 
// base-class pointer using dynamic binding
void virtualViaPointer(const Employee* const baseClassPtr) {
   cout << baseClassPtr->toString() << "\nearned $" << baseClassPtr->earnings() << "\n\n";
} 

// call Employee virtual functions print and earnings off a 
// base-class reference using dynamic binding
void virtualViaReference(const Employee& baseClassRef) {
   cout << baseClassRef.toString() << "\nearned $" << baseClassRef.earnings() << "\n\n";
} 

