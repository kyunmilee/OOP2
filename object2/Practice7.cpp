#include <iostream>
using namespace std;

void recursiveBackward(const int*, size_t);

int main() {
    int b []{10, 20, 30, 40};

    cout << "\nTest of the recursiveBackward function\n";

    recursiveBackward(b, 4);
}

void recursiveBackward(const int* arr, size_t size) {
    if (size==0) {
        return ;
    }
    else {
        recursiveBackward(arr + 1, size - 1);
        cout << *arr << " ";
    }
}