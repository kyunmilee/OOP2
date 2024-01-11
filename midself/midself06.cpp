#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;


/*#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    array<int, 5> n;

    for (size_t i{0}; i < n.size(); ++i) {
        n[i] = 0;
    }

    for (size_t j{0}; j < n.size(); ++j) {
        cout << setw(7) << j << setw(10) << n[j] << endl;
    }
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    array<int, 5> n{32, 27, 64, 18, 95};

    cout << "Element" << setw(10) << "Value" << endl;

    for (size_t i{0}; i < n.size(); ++i) {
        cout << setw(7) << i << setw(10) << n[i] << endl;
    }
}*/

/*#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    const size_t arraySize{5};

    array<int, arraySize> values;

    for (size_t i{0}; i < values.size(); ++i) {
        values[i] = 2 + 2 * i;
    }

    cout << "Element" << setw(10) << "Value" << endl;

    for (size_t j{0}; j < values.size(); ++j) {
        cout << setw(7) << j << setw(10) << values[j] << endl;
    }
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const size_t arraySize{4};
    array<int, arraySize> a{10, 20, 30, 40};
    int total{0};

    for (size_t i{0}; i < a.size(); ++i) {
        total += a[i];
    }

    cout << "Total of array elements: " << total << endl;
}*/

/*#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    const size_t arraySize{11};
    array<unsigned int, arraySize> n{0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

    cout << "Grade distribution: " << endl;


    for (size_t i{0}; i < n.size(); ++i) {
        if (0 == i) {
            cout << "  0-9: ";
        }
        else if (10 == i) {
            cout << "  100: ";
        }
        else {
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";
        }

        for (unsigned int stars{0}; stars < n[i]; ++stars) {
            cout << "*";
        }
        cout << endl;
    }
}*/

/*#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {
    default_random_engine engine(static_cast<unsigned int>(time(0)));

    uniform_int_distribution<unsigned int> randomInt(1, 6);

    const size_t arraySize{7};
    array<unsigned int, arraySize> frequency{};

    for (unsigned int roll{1}; roll <= 60000000; ++roll) {
        ++frequency[randomInt(engine)];
    }

    cout << "Face" << setw(13) << "Frequency" << endl;

    for (size_t face{1}; face < frequency.size(); ++face) {
        cout << setw(4) << face << setw(13) << frequency[face] << endl;
    }

}*/

/*#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
    const size_t responseSize{20};
    const size_t frequencySize{6};

    const array<unsigned int, responseSize> responses{1, 2, 5, 4, 3, 5, 2, 1, 3, 1, 4, 3, 3, 3, 2, 3, 3, 2, 2, 5};

    array<unsigned int, frequencySize> frequency{};

    for (size_t answer{0}; answer < responses.size(); ++answer) {
        ++frequency[responses[answer]];
    }

    cout << "Rating" << setw(12) << "Frequency" << endl;

    for (size_t rating{1}; rating < frequency.size(); ++rating) {
        cout << setw(6) << rating << setw(12) << frequency[rating] << endl;
    }
}*/

/*#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> items{1, 2, 3, 4, 5};

    cout << "itmes before modification: ";
    for (int item : items) {
        cout << item << " ";
    }

    for (int& itemRef : items) {
        itemRef *= 2;
    }

    cout << "\ntimes after modification: ";
    for (int item : items) {
        cout << item << " ";
    }

    cout << endl;
}*/

/*#include <iostream>
#include "GradeBook.h"
using namespace std;

int main() {
    const array<int, GradeBook::students> grades{87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    string courseName{"CS101 sdadasa   asdasdas"};

    GradeBook myGradeBook(courseName, grades);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
}*/

/*#include <iostream>
#include <array>
using namespace std;

const size_t rows{2};
const size_t columns{3};
void printArray(const array<array<int, columns>, rows>&);

int main() {
    array<array<int, columns>, rows> array1{1, 2, 3, 4, 5, 6};
    array<array<int, columns>, rows> array2{1, 2, 3, 4, 5};

    cout << "Values in array1 by row are:" << endl;
    printArray(array1);

    cout << "\nValues in array2 by row are:" << endl;
    printArray(array2);
}

void printArray(const array<array<int, columns>, rows>& a) {
    for (auto const& row : a) {
        for (auto const& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main() {
    vector<int> integers1{7};
    vector<int> integers2{10};

    cout << "Size of vector integers1 is " << integers1.size() << "\nvector after initialization:";
    outputVector(integers1);

    cout << "Size of vector integers2 is " << integers2.size() << "\nvector after initialization:";
    outputVector(integers2);

    cout << "\nEnter 17 integers:" << endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input, the vectors contain:\n" << "integers1:";
    outputVector(integers1);
    cout<< "intergers2:";
    outputVector(integers2);

    cout << "\nEvaluating: integers1 != integers2" << endl;
    if (integers1 == integers2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }

    vector<int> integers3{integers1};

    cout << "\nSize of vector integer3 is " << integers3.size() << "\nvector after initialization: ";
    outputVector(integers3);

    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;

    cout << "integers1: ";
    outputVector(integers1);
    cout << "integers2: ";
    outputVector(integers2);

    cout << "Evaluating: integers1 == integers2" << endl;

    if (integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }

    cout << "\nintegers1[5] is " << integers1[5];

    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1: ";
    outputVector(integers1);

    try {
        cout << "\nAttempt to display integers1.at(15)" << endl;
        cout << integers1.at(15) << endl;
    }
    catch (out_of_range& ex) {
        cerr << "An exception occured: " << ex.what() << endl;
    }

    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers3.push_back(1000);
    cout << "New integers3 size is: " << integers3.size() << endl;
    outputVector(integers3);
}

void outputVector(const vector<int>& items) {
    for (int item : items) {
        cout << item << " ";
    }
    cout << endl;
}

void inputVector(vector<int>& items) {
    for (int& item : items) {
        cin >> item;
    }
}