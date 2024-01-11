/*#include <iostream>
using namespace std;

int main() {
    unsigned int counter{1};

    while (counter <= 10) {
        cout << counter << " ";
        ++counter;
    }
    cout << endl;
}*/

/*#include <iostream>
using namespace std;

int main() {
    unsigned int total{0};

    for (unsigned int number{2}; number <= 20; number += 2) {
        total += number;
    }

    cout << "Sum is " << total << endl;
}*/

/*#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout << fixed << setprecision(2);

    double principal{1000.00};
    double rate{0.05};

    cout << "Initial pricipal: " << principal << endl;
    cout << "   Interest rate: " << rate << endl;

    cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

    for (unsigned int year{1}; year <= 10; year++) {
        double amount = principal * pow(1.0 + rate, year);

        cout << setw(4) << year << setw(20) << amount << endl;
    }
}*/

/*#include <iostream>
#include <iomanip>
#include <string>
#include "DollarAmount.h"
using namespace std;

int main() {
    DollarAmount d1{12345};
    DollarAmount d2{1576};

    cout << "After adding d2 (" << d2.toString() << ") into d1 (" << d1.toString() << "), d1 = ";
    d1.add(d2);
    cout << d1.toString() << "\n";

    cout << "After subtractinging d2 (" << d2.toString() << ") from d1 (" << d1.toString() << "), d1 = ";
    d1.subtract(d2);
    cout << d1.toString() << "\n";

    cout << "After subtractinging d1 (" << d1.toString() << ") from d2 (" << d2.toString() << "), d2 = ";
    d2.subtract(d1);
    cout << d2.toString() << "\n\n";

    int rate, divisor;

    cin >> rate >> divisor;

    DollarAmount balance{100000};
    cout << "\nInitial balance: " << balance.toString() << endl;

    cout << "\nYear" << setw(20) << "Amounht on deposit" << endl;

    for (unsigned int year{1}; year <= 10; year++) {
        balance.addInterest(rate, divisor);

        cout << setw(4) << year << setw(20) << balance.toString() << endl;
    }
}*/

/*#include <iostream>
using namespace std;

int main() {
    unsigned int counter{1};
    
    do {
        cout << counter << "  ";
        ++counter;
    } while (counter <= 10);

    cout << endl;
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total{0};
    unsigned int gradeCounter{0};
    unsigned int aCount{0};
    unsigned int bCount{0};
    unsigned int cCount{0};
    unsigned int dCount{0};
    unsigned int fCount{0};

    cout << "Enter the integer grades in the range 0-100.\n"
        << "Type the end-of-file indicator to terminate input:\n"
        << "   On UNIX/Linux/Mac OS X type <Ctrl> d then press Enter\n"
        << "   On windows type <Ctrl> z then press Enter\n";

    int grade;

    while (cin >> grade) {
        total += grade;
        ++gradeCounter;

        switch (grade / 10) {
        case 9:
        case 10:
            ++aCount;
            break;
        case 8:
            ++bCount;
            break;
        case 7:
            ++cCount;
            break;
        case 6:
            ++dCount;
            break;
        default:
            ++fCount;
            break;
        }
    }

    cout << fixed << setprecision(2);

    cout << "\nGrade Report:\n";

    if (gradeCounter != 0) {
        double average = static_cast<double>(total) / gradeCounter;

        cout << "Total of the " << gradeCounter << " grades entered is "
            << total << "\nClass average is " << average
            << "\nNumber of students who received each grade:"
            << "\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount
            << "\nD: " << dCount << "\nF: " << fCount << fCount << endl;
    }
    else {
        cout << "No grades were entered" << endl;
    }
}*/

/*#include <iostream>
using namespace std;

int main() {
    unsigned int count;

    for (count = 1; count <= 10; count++) {
        if (5 == count) {
            break;
        }

        cout << count << " ";
    }

    cout << "\nBroke out of loop at count = " << count << endl;
}*/

/*#include <iostream>
using namespace std;

int main() {
    for (unsigned int count{1}; count <= 10; count++) {
        if (5 == count) {
            continue;
        }

        cout << count << " ";
    }

    cout << "\nUsed continue to skip printing 5" << endl;
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int length;

    cout << "Please enter the length of the square. (The length must be greater than 2 and less than 21)\n"
        << "Type the end-of-file indicator to terminate the program.\n"
        << "(windows: Ctrl + z Linux/Mac: Ctrl + d)\n\n"
        << "Input the length: ";

    while (cin >> length) {
        for (unsigned int i{1}; i <= length; i++) {
            switch (i % length) {
                case 1:
                case 0:
                    for (unsigned int j{1}; j <= length; j++) {
                        cout << "*";
                    }
                    cout << endl;
                    break;
                default:
                    cout << "*";
                    for (unsigned int j{2}; j < length; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    cout << endl;
            }
        }
        cout << "\nInput the length: ";
    }
}*/