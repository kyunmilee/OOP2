#include <iomanip>
#include <sstream>
#include <stdexcept>
#include "Alumni.h"
using namespace std;


Alumni::Alumni(Name& name, string regNum, string email, string degreeNum)
    : Student(name, regNum, email) {
    setdegreeNumber(degreeNum);
}

Alumni& Alumni::setdegreeNumber(string degreeNum) {
    degreeNumber = degreeNum;
    return *this;
}

string Alumni::getdegreeNumber() const {
    return degreeNumber;
}

string Alumni::toString() const {
    ostringstream output;
    
    output << Student::toString()
        << "Degree num: " << degreeNumber;
    return output.str();
}

