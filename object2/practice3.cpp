#include <iostream>
using namespace std;

int main() {
    unsigned int passesA{0};
    unsigned int passesB{0};
    unsigned int passesC{0};
    unsigned int passesD{0};
    unsigned int passesF{0};
    unsigned int failures{0};
    unsigned int studentCounter{1};
    unsigned int total{0};

    while (studentCounter <= 10) {
        cout << "Enter score(<= 100 and >= 0):  ";
        int result;
        cin >> result;

        if (result > 100) {
            cout << "Please enter vaild score!" << endl;
        }
        
        else if (result < 0) {
            cout << "Plese enter vaild score!" << endl;
        }

        else{
            if (result >= 90) {
                passesA = passesA + 1; 
            }
            else if ((80 <= result) && (result < 90)) {
                passesB = passesB + 1;
            }
            else if ((70 <= result) && (result < 80)) {
                passesC = passesC + 1;
            }
            else if ((60 <= result) && (result < 70)) {
                passesD = passesD + 1;
            }
            else if (result < 60) {
                passesF = passesF + 1;
            }
            total = total + result;
            studentCounter = studentCounter + 1;
        }
    }
    int average(total/10);
    cout << "A: " << passesA << endl;
    cout << "B: " << passesB << endl;
    cout << "C: " << passesC << endl;
    cout << "D: " << passesD << endl;
    cout << "F: " << passesF << endl;
    cout<< "Avg: " << average << endl;
}