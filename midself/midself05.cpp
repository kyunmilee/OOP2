/*#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int x, int y, int z);

int main() {
    cout << "Enter three integer values: ";
    int int1, int2, int3;
    cin >> int1 >> int2 >> int3;

    cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;
}

int maximum(int x, int y, int z) {
    int maximumValue{x};

    if (y > maximumValue) {
        maximumValue = y;
    }
    if (z > maximumValue) {
        maximumValue = z;
    }

    return maximumValue;
}*/

/*#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x{1};

int main() {
    cout << "global x in main is " << x << endl;

    int x{5};

    cout <<"local x in main's outer scope is " << x << endl;

    {
        int x{7};

        cout << "local x in main's inner scope is " << x << endl;
    }

    cout << "local x in main's outer scope is " << x << endl;

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    cout << "\nlocal x in main is " << x << endl;
}

void useLocal() {
    int x{25};

    cout << "\nlocal x is " << x << " on entering useLocal" << endl;
    ++x;
    cout << "local x is " << x << " on exiting useLocal" << endl;
}

void useStaticLocal() {
    static int x{50};

    cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
    ++x;
    cout << "local static x is " << x << " on exiting useStarticLocal" << endl;
}

void useGlobal() {
    cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
    x *= 10;
    cout << "global x is " << x << " on exiting useGlobal" << endl;
}*/

/*#include <iostream>
using namespace std;

int square(int);

int main() {
    int a{10};

    cout << a << " squared: " << square(a) << endl;
}

int square(int x) {
    return x * x;
}*/

/*#include <iostream>
using namespace std;

inline double cube(const double side) {
    return side * side * side;
}

int main() {
    double sideValue;
    cout << "Enter the side length of your cube: ";
    cin >> sideValue;

    cout << "Volume of cube with side " << sideValue << " is " << cube(sideValue) << endl;
}*/

/*#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int&);

int main() {
    int x{2};
    int z{4};

    cout << "x= " << x << " before squareByValue\n";
    cout << "Value returned by squareByValue: " << squareByValue(x) << endl;
    cout << "x= " << x << " after squareByValue\n" << endl;

    cout << "z= " << z << " before squareByReference" << endl;
    squareByReference(z);
    cout << "z= " << z << " after squareByReference" << endl;
}

int squareByValue(int number) {
    return number * number;
}

void squareByReference(int& numberRef) {
    numberRef *= numberRef;
}*/

/*#include <iostream>
using namespace std;

unsigned int boxVolume(unsigned int length = 1, unsigned int width = 1, unsigned int height = 1);

int main() {
    cout << "The default box volume is: " << boxVolume();

    cout << "\n\nThe volume of a box with length 10.\n" << "width 1 and height 1 is: " << boxVolume(10);

    cout << "\n\nThe volume of a box with length 10.\n" << "width 5 and height 1 is: " << boxVolume(10, 5);

    cout << "\n\nThe volume of a box with legth 10.\n" << "width 5 and height 2 is: " << boxVolume(10, 5, 2) << endl;
}

unsigned int boxVolume(unsigned int length, unsigned int width, unsigned int height) {
    return length * width * height;
}*/

/*#include <iostream>
using namespace std;

int square(int x) {
    cout << "square of integer " << x << " is ";
    return x * x;
}

double square(double y) {
    cout << "square of double " << y << " is ";
    return y * y;
}

int main() {
    cout << square(7);
    cout << endl;
    cout << square(7.5);
    cout << endl;
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long);

int main() {
    for (unsigned int counter{0}; counter <= 10; ++counter) {
        cout << setw(2) << counter << "! = " << factorial(counter) << endl;
    }
}

unsigned long factorial(unsigned long number) {
     if(number <= 1) {
        return 1;
     }
     else {
        return number * factorial(number - 1);
     }
}*/

/*#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long);

int main() {
    for (unsigned int counter{0}; counter <= 10; ++counter) {
        cout << "fibonacci(" << counter << ") = " << fibonacci(counter) << endl;
    }

    cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
    cout << "\nfibonacci(30) = " << fibonacci(30) << endl;
    cout << "\nfibonacci(35) = " << fibonacci(35) << endl;
}

unsigned long fibonacci(unsigned long number) {
    if ((0 == number) || (1 == number)) {
        return number;
    }
    else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned int);

int main() {
    for (unsigned int counter{0}; counter <= 10; ++counter) {
        cout << setw(2) << counter << "! = " << factorial(counter) << endl;
    }
}

unsigned long factorial(unsigned int number) {
    unsigned long result{1};

    for (unsigned int i{number}; i >= 1; --i) {
        result *= i;
    }

    return result;
}*/

/*#include <iostream>
using namespace std;

int cubeByValue(int number = 2);
void cubeByReference(int&);

int main() {
    int v{3};
    int r{4};

    cout << "cubeByValue with default parameter: " << cubeByValue() << endl;

    cout << "x= " << v << " before squareByValue\n";
    cout << "Value returned by squareByValue: " << cubeByValue(v) << endl;
    cout << "x= " << v << " after squareByValue\n" << endl;

    cout << "z= " << r << " before squareByReference" << endl;
    cubeByReference(r);
    cout << "z= " << r << " after squareByReference" << endl;
}

int cubeByValue(int number) {
    return number * number * number;
}

void cubeByReference(int& numRef) {
    numRef = numRef * numRef * numRef;
}*/