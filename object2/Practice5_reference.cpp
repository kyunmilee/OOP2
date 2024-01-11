#include <iostream>
using namespace std;

int cubeByValue(int number = 2);
void cubeByReference(int&);

int main() {
    int v{3};
    int r{4};

    cout << " cubeByValue with default parameter: " << cubeByValue() << endl;

    cout << "\nv before cubeByValue: " << v << endl;
    cout << "cubeByValue(v): " << cubeByValue(v) << endl;
    cout << "v after cubeByValue: " << v << endl;

    cout << "\nr before cubeByRefernece: " << r << endl;
    cubeByReference(r);
    cout << "r after cubeByReference: " << r << endl;
}

int cubeByValue(int number) {
    return number * number * number;
}

void cubeByReference(int& numRef) {
    numRef = numRef * numRef * numRef;
}