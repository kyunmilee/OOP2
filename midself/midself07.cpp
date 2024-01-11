/*#include <iostream>
using namespace std;

int main() {
    int a{7};
    int* aPtr = &a;

    cout << "The address of a is " << &a << "\nThe value of aPtr is " << aPtr;
    cout << "\n\nThe value of a is " << a << "\nThe value of *aPtr is " << *aPtr << endl;
}*/


// pass-by-value
/*#include <iostream>
using namespace std;

int cubeByValue(int);

int main() {
    int number{5};

    cout << "The original value of number is " << number;
    number = cubeByValue(number);
    cout << "\nThe new value of number is " << number <<  endl;
}

int cubeByValue(int n) {
    return n * n * n;
}*/

// pass-by-reference with reference arguments
/*#include <iostream>
using namespace std;

void cubeByValue(int&);

int main() {
    int number{5};

    cout << "The original value of number is " << number;
    cubeByValue(number);
    cout << "\nThe new value of number is " << number << endl;
}

void cubeByValue(int &n) {
    n = n * n * n;
}*/


// pass-by-reference with a pointer argument
/*#include <iostream>
using namespace std;

void cubeByReference(int*);

int main() {
    int number{5};

    cout << "The original value of number is " << number;
    cubeByReference(&number);
    cout << "\nThe new value of number is " << number << endl;
}

void cubeByReference(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int b[]{10, 20, 30, 40};
    int* bPtr{b};

    cout << "Array b displayed with:\n\nArray subscript notation\n";

    for (size_t i{0}; i < 4; ++i) {
        cout << "b[" << i <<"] = " << b[i] << "\n";
    }

    cout << "\nPointer/offset notation where " << "the pointer is the array name\n";

    for (size_t offset1{0}; offset1 < 4; ++offset1) {
        cout << "*(b + " << offset1 << ") = " << *(b + offset1) << "\n";
    }

    cout << "\nPointer subscript notation\n";

    for (size_t j{0}; j < 4; ++j) {
        cout << "bPtr[" << j <<"] = " << bPtr[j] << "\n";
    }

    cout << "\nPointer/offset notation\n";

    for (size_t offset2{0}; offset2 < 4; ++offset2) {
        cout << "*(bPtr + " << offset2 << ") = " << *(bPtr + offset2) << "\n";
    }
}*/

#include <iostream>
using namespace std;

int cubeByValue(int);
void cubeByRef(int&);
void cubeByPointer(int*);

int main() {
    int num{3};
    int* numPtr{&num};

    cout << "The address of num is " << &num << "\nThe value of numPtr is " << numPtr;
    cout << "\n\nThe value of num is " << num << "\nThe value of *numptr is " << *numPtr;

    cout << "\n\nThe reult of cubeByValue is " << cubeByValue(num);

    cubeByRef(num);
    cout << "\nAfter the cubeByRef, the new value of num is " << num;

    num = 3;
    cout <<"\nReset num as " << num;
    cubeByPointer(numPtr);
    cout << "\nAfter the cubeByPointer, the new value of *numPtr is " << *numPtr;

    int b[]{10, 20, 30, 40};
    numPtr = b + 1;
    cout << "\n\nMake int array and set numPtr as b + 1\n";

    for (size_t i{0}; i < 4; i++) {
        cout << "b[" << i << "] = " << b[i] << "\n";
    }
    for (size_t j{0}; j < 4; j++) {
        cout << "*(b + " << j << ") = " << *(b + 1) << "\n";
    }

    cout << "*(numPtr - 1) = " << *(numPtr - 1) << "\n";
    for (size_t k{0}; k < 3; k++) {
        cout << "*(numPtr + )" << k << ") = " << *(numPtr + k) << "\n";
    }
}

int cubeByValue(int n) {
    return n * n * n;
}
void cubeByRef(int& n) {
    n = n * n * n;
}
void cubeByPointer(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr;
}