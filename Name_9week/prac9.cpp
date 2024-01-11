#include <iostream>
#include <string>
#include <stdexcept>
#include "Name.h"
using namespace std;

int main() {
    Name defaultArg;
    Name lk{"Kyoungmin"};
    Name lkm{"Kyoungmin", "Lee"};

    cout << "Default: " << defaultArg.getFullName() << endl;
    cout << "LK: " << lk.getFullName() << endl;
    cout << "LKM: " << lkm.getFullName() << endl;

    lk.setLastName("LEE");
    cout << "LK after setLastName: " << lk.getFullName() << endl;

    try {
        lk.setFirstName("L");
    }
    catch (invalid_argument& e) {
        cout << "\nException: " << e.what() << endl;
    }
    try {
        lkm.setLastName("");
    }
    catch (invalid_argument& e) {
        cout << "\nException: " << e.what() << endl;
    }
}