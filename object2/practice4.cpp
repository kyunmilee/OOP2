#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int length;

    cout << "Please enter the length of the square.(The legth must be grater than 4 and less than 22)\n"
        << "Type the end-of-file indicator to terminate the program.\n"
        << "(Window: Ctrl + z, Linux/Mac: Ctrl + d)\n\n"
        << "input the length: ";

    while (cin >> length) {
        if ((length % 2 == 0) || (length <= 4) || (length >= 22)) {
            cout << "Please enter the vaild length!\n";
            cout << "\ninput the length: ";
            continue;
        }

        for (unsigned int i{ 0 }; i < length; i++) {
            for (unsigned int j = 0; j < length; j++) {
                if (i == 0 || i == length - 1 || j == 0 || j == length - 1) {
                    cout << "#";
                }
                else if ((i >= length / 2) && (j <= i) && (j >= length - i - 1)) {
                    cout << "*";
                }
                else if ((i < length / 2) && (j >= i) && (j < length - i)) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << "\ninput the length: ";
    }
}