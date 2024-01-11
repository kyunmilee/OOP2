#include <iostream>
#include <sstream>
#include <stdexcept>
#include "HourlyEmployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee(const string& first, const string& last,
    const string& ssn, double wagePerPiece, double hourTime)
    : Employee(first, last, ssn) {
    setWage(wagePerPiece);
    setHours(hourTime);
}

void HourlyEmployee::setWage(double wagePerPieces) {
    if (wagePerPieces < 0.0) {
        throw invalid_argument("Wage must be >= 0.0");
    }

    wage = wagePerPieces;
}

double HourlyEmployee::getWage() const {
    return wage;
}

void HourlyEmployee::setHours(double hourTime) {
    if (hourTime < 0.0 || hourTime > 168.0) {
        throw invalid_argument("Hours produced must be >= 0 and <=168");
    }

    hour = hourTime;
}

double HourlyEmployee::getHours() const {
    return hour;
}

double HourlyEmployee::earnings() const {
    if(hour <= 40.0) { 
        return getWage() * getHours();
    }
    else {
        return 40.0 * getWage() + ((getHours() - 40.0) * getWage() * 1.5);
    }
}

string HourlyEmployee::toString() const {
    ostringstream output;
    output << "hourly employee: " << Employee::toString()
        << "\nhourly wage: " << getWage() << "; hours worked: " << getHours(); 
    return output.str();
}
