#include <array>
#include "GradeBook.h"
using namespace std;

int main() {    
    const size_t students{5};
    const size_t tests{3};

    string courseName;
    cout << "Please enter the course name: ";
    getline(std::cin, courseName);

    array<array<int, tests>, students> gradesArray;

    for (size_t student{0}; student < students; ++student) {
        cout << "Please enter grades for Sudent " << student + 1 << ": ";
        for (size_t test{0}; test < tests; ++test) {
            cin >> gradesArray[student][test];
        }
    }

    GradeBook myGradeBook(courseName, gradesArray);
    myGradeBook.displayMEssage();
    myGradeBook.processGrades();
}