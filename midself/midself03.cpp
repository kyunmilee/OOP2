/*#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    Student account1{"Jane Green", 93};
    Student account2{"John Blue", 72};

    cout << account1.getName() << "'s letter grade equivalent of " << account1.getAverage() << " is: " << account1.getLetterGrade() << "\n";
    cout << account2.getName() << "'s letter grade equivalent of " << account2.getAverage() << " is: " << account2.getLetterGrade() << endl;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int total{0};
    unsigned int gradeCounter{1};

    while (gradeCounter <= 10) {
        cout << "Enter grade: ";
        int grade;
        cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }

    int average{total / 10};

    cout << "\nTotal of all 10 grades is " << total;
    cout << "\nClass average is " << average << endl;
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total{0};
    unsigned int gradeCounter{0};

    cout << "Enter grade or -1 to quit: ";
    int grade;
    cin >> grade;

    while (grade != -1) {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if (gradeCounter != 0) {
        double average{static_cast<double>(total) / gradeCounter};

        cout << "\nTotal of the " << gradeCounter << " grades entered is " << total;
        cout << setprecision(2) << fixed;
        cout << "\nClass average is " << average << endl;
    }
    else {
        cout << "No grades were entered" << endl;
    }
}*/

/*#include <iostream>
using namespace std;

int main() {
    unsigned int c{5};
    cout << "c before postincrement: " << c << endl;
    cout << "    postincrementing c: " << c++ << endl;
    cout << " c after postincrement: " << c << endl;

    cout << endl;

    c= 5;
    cout << "c before postincrement: " << c << endl;
    cout << "    postincrementing c: " << ++c << endl;
    cout << " c after postincrement: " << c << endl;
}*/

#include <iostream>
using namespace std;

int main() {
    unsigned int passes{0};
    unsigned int failures{0};
    unsigned int studentCounter{1};

    while (studentCounter <= 10) {
        cout << "Enter score (<= 100 and >= 0): ";
        int result;
        cin >> result;

        if (result > 100) {
            cout << "Please enter vaild score!" << endl;
        }
        else if (result < 0) {
            cout << "Please enter vaild score!" << endl;
        }
        else {
            if (result >= 70) {
                passes = passes + 1;
            }
            else {
                failures = failures + 1;
            }
            studentCounter = studentCounter + 1;
        }
    }

    cout << "Passed: " << passes << endl;
    cout << "Failed: " << failures << endl;
}