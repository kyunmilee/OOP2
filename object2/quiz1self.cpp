#include <iostream>

int main() {
    int size;
    std::cout << "홀수 크기를 입력하세요: ";
    std::cin >> size;

    if (size % 2 == 0) {
        std::cout << "홀수 크기를 입력해주세요." << std::endl;
        return 1;
    }

    int middle = size / 2;
    bool toBeIncreased = true;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == middle) {
                std::cout << "#";
            } else if (j < middle - i || j > middle + i) {
                std::cout << " ";
            } else {
                std::cout << "*";
            }
        }

        std::cout << std::endl;

        if (toBeIncreased) {
            if (i >= middle) {
                toBeIncreased = false;
            }
        } else {
            toBeIncreased = (i < middle);
        }
    }

    return 0;
}



#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int length;

    cout << "Please enter the length of the square.(The legth must be grater than 2 and less than 21)\n"
        << "Type the end-of-file indicator to terminate the program.\n"
        << "(Window: Ctrl + z, Linux/Mac: Ctrl + d)\n\n"
        << "input the length: ";

    while (cin >> length) {
        if ((length % 2 == 0) || (length <= 4) || (length >= 21)) {
            cout << "Please enter the vaild length!\n";
            cout << "\ninput the length: ";
            continue;
        }
        for (unsigned int i{ 1 }; i <= length; i++) {

            switch (i % length) {
                case 1:                //first line
                    for (unsigned int j{ 1 }; j <= length; j++) {
                        cout << "#";
                    }
                    cout << endl;
                    break;
                case 0:             // last line
                    for (unsigned int j{ 1 }; j <= length; j++) {
                        cout << "#";
                    }
                    cout << endl;
                    break;
                default:
                    cout << "#";
                    for (unsigned int j(2); j < length; j++) {
                        cout << " ";
                    }
                    cout << "#";
                    cout << endl;
            }
        }
        cout << "\ninput the length: ";
    }    
}