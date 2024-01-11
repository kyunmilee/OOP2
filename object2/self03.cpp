/*C 언어 포인터
포인터: 메모리의 위치를 표현한 기호

포인터 변수 선언
int *a;
*a = 10
print(a)   주소가 출력
print(*a)  10이 출력


변수의 주소 찾기
int b = 10;
int *a;
a = &b;
print(*a)   10 출력
print(b)    10 출력
*/

/*#include <iostream>
using namespace std;

int change_val(int *p) {
    *p = 3;

    return 0;
}
int main() {
    int number = 5;

    cout << number << endl;
    change_val(&number);
    cout << number << endl;
}  */

/*C 언어에서는 어떠한 변수를 가리키고 싶을 땐 반드시 포인터를 사용해야만 했다. 그런데 c++에서는 
다른 변수나 상수를 가리키는 방법으로 또 다른 방식을 제공하는데, 이를 바로 참조자(레퍼런스 - reference)라고 부른다.
*/

// 레퍼랜스는 어떤 변수의 참조자가 되버린다면, 더 이상 다른 변수를 참조할 수 없게 된다.

/* #include <iostream>
using namespace std;

int main() {
    int a = 3;
    int& another_a = a;   //a의 참조자 another_a를 정의 -->>> another_a는 a의 또 다른 이름이라고 컴파일러에게 알려주는 것 

    another_a = 5;
    cout << "a :  " << a << endl;
    cout << "another_a :  " << another_a << endl;
}  */



/* 포인터는 누구를 가리키는지 자유롭게 바뀔 수 있다. 하지만 레퍼랜스는 아니다. 아래처럼 포인터는 가능
int a = 10;
int* p = &a;

int b = 3;
p = &b;    >>>> 이제 p는 a를 버리고 b를 가리킨다.
*/



// 레퍼런스는 메모리 상에 존재하지 않을 수 도 있다.
/* 포인터의 경우를 생각해보자, 우리가 아래와 같이 포인터 p를 정의 한다면 
int a = 10;
int* p = &a;
>>>>>>>>>>>>>> p는 당당하게 메모리 상에서 8 바이트를 차지한다.
*/

/*반면 레퍼랜스는 another_a 위해서 메모리 상에 공간을 할당할 필요가 없다! 
왜냐하면 another_a 가 쓰이는 자리는 모두 a 로 바꾸면 된다. 따라서 
이 경우 레퍼런스는 메모리 상에 존재하지 않게 됩니다.
int a = 10;
int &another_a = a;
 */

//함수 인자로 레퍼랜스 받기
/* #include <iostream>
using namespace std;

int change_val(int &p) {
    p = 3;

    return 0;
}

int main() { 
    int number = 5;
    cout << number << endl;
    change_val(number);
    cout << number << endl;
}*/
/// >>>>>>>>>>>>> number를 change_val 안에 전달된 코드를 참조자를 이용해서 바꾼것 


// 참조자 예제

/* #include <iostream>
int main() {
    int x;
    int& y = x;
    int& z = y;

    x = 1; 
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    y = 2;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

    z = 3;
    std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;
}  */

// 레퍼런스의 배열은 불가능, 배열들의 래퍼런스는 가능
/* #include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int(&ref)[3] = arr;

    ref[0] = 2;
    ref[1] = 3;
    ref[2] = 1;

    std::cout << arr[0] << arr[1] << arr[2] << std::endl;
    return 0;
} */

#include <iostream>

int function() {
    int a = 5;
    return a;
}

int main() {
    const int& c = function();
    std::cout << "c: " << c << std::endl;
    return 0;
}
