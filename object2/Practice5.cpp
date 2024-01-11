#include <iostream>
using namespace std;

unsigned long power(unsigned long, unsigned long);

int main () {
    cout << "Enter a base and an exponent: ";
    unsigned long base, exponent;
    cin >> base >> exponent;

    cout << base << " raised to the " << exponent << " is " << power(base, exponent) << endl;

}

unsigned long power(unsigned long base, unsigned long exponent) {

    if (exponent == 0) {
        return 1;
    }

    else {
        return base * power(base, exponent - 1);
    }
}