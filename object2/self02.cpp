#include <iostream>

/*int main() {
    int i;
    char c;
    double d;
    float f;

    return 0;
} */

/* 기초적인 변수 정의
1. 숫자가 오면 안됨.
2. 다른 사람이 봤을 때 확실하게 알 수 있어야함.
3. 띄어쓰기 부분에 _ 하거나 대문자로 작성한다.
*/

int arr[10];
int *parr = arr;

int i;
int *pi = &i;

/* for문 
#include <iostream>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        std::cout << i << std:: endl;
    }
}  */

/* 1부터 10까지의 합*/

/* #include <iostream>

int main() {
    int i, sum = 0;

    for (i = 1; i <= 10; i++) {
        sum += i;
    }

    std::cout <<  "sum: " << sum << std::endl;
    return 0;
} */

/* while문 이용하기 */
/*#include <iostream>

int main() {
    int i = 1, sum = 0;

    while (i <= 10) {
        sum += i;
        i++;
    }

    std::cout << "sum:  " << sum << std::endl;
    return 0;
}   */


/* 행운의 숫자 맞추기 */
/*#include <iostream>
using namespace std;

int main() {
    int lucky_number = 3;
    cout << "choose: " << endl;

    int user_input;

    while(1) {
        cout << "pick: ";
        cin >> user_input;
        if (lucky_number == user_input) {
            cout << "correct__ " << endl;
            break;
        }
        else {
            cout << "moe choose: " << endl;
        }
    }
    return 0;
}   */

// switch문 이용하기
#include <iostream>

using namespace std;

int main() {
    int user_input;
    cout <<  "my privite!!" << endl;
    cout << "1.name " << endl;
    cout << "2.age " << endl;
    cout << "3. sex " << endl;

    cin >> user_input;

    switch (user_input) {
    case 1:
      cout << "Psi ! " << endl;
      break;

    case 2:
      cout << "99 살" << endl;
      break;

    case 3:
      cout << "남자" << endl;
      break;

    default:
      cout << "궁금한게 없군요~" << endl;
      break;
  }
  return 0;
}
