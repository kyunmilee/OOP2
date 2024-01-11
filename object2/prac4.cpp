/*#include <iostream>

using namespace std;

unsigned int boxVolume(unsigned int length = 1, unsigned int width = 1, unsigned int height = 1);
// prototype에서는 매개변수명 생략하기도 함.
// default argument는 parameter list에서 오른쪽에 몰려 있어야한다.

int main() {
    cout << "The default box volume is: " << boxVolume();

    cout << "\n\nThe volume of a box with length 10.\n" << "width 1 and height 1 is: " << boxVolume(10);
    cout << "\n\nThe volume of a box with length 10.\n" << "width 5 and height 1 is: " << boxVolume(10, 5);
    cout << "\n\nThe volume of a box with length 10.\n" << "width 5 and height 2 is: " << boxVolume(10, 5, 2) << endl;
}

unsigned int boxVolume(unsigned int length, unsigned int width, unsigned int height) {
    return length * width * height;
}*/


// 함수 오버로딩이란 같은 이름의 여러 함수들이 서로 다른 파라미터 타입 혹은 파라미터 수 등을 갖도록 구현할 수 것을 의미
/*#include <iostream>
using namespace std;

int square(int x) {
    cout << "square of integer " << x << " is ";
    return x * x;
}

double square(double y) {
    cout << "square of double " << y << " is ";
    return y * y;
}

int main() {
    cout << square(7);
    cout << endl;
    cout << square(7.5);
    cout << endl;
}*/

// 재귀는 스스로를 호출
// base case: 재귀함수가 return될 가장 기본적인 조건에 대해 처리가 되어 있어야함
// recursice step: 주어진 상황에서 base step으로 가기 위한 재귀적인 단계가 필요
/*#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long);

int main() {
    for (unsigned int counter{0}; counter <= 10; ++counter) {
        cout << setw(2) << counter << "! = " << factorial(counter) << endl;
    }
}

unsigned long factorial(unsigned long number) {
    if (number <= 1) {
        return 1;
    }
    else {
        return number * factorial(number - 1);
    }
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned int);

int main() {
    for (unsigned int counter{0}; counter <= 10; ++counter) {
        cout << setw(2) << counter << "! = " << factorial(counter) << endl;
    }
}

unsigned  long factorial(unsigned int number) {
    unsigned long result{1};

    for (unsigned int i{number}; i >= 1; --i) {
        result *= i;
    }
    return result;
}*/