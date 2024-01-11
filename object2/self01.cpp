#include <iostream>  // iostream이라는 헤더파일을 include

int main(){
    std::cout << "Hello, World!!!" << std::endl;
}
/* std:endl는 한 줄 엔터를 쳐서 나타내라는 표시
 std는 c++ 표쥰 라이브러리의 모든 함수, 객체 등이 정의된 이름 공간
 이름 공간이란 것은 어떤 정의된 객체에 대해 어디 소속인지 지정해주는 것
 --> 코드의 길이가 늘어남에 따라 혹은 다른 사람들이 쓴 코드를 가져다 쓰는 경우가 많아지면서 중복된 이름을 가진 함수들이
 많아졌다. 따라서 C++에서는 이를 구분하기 위해, 같은 이름이라도 소속된 이름 공간이 다르면 다른 것으로 취급하게 됨
 ex) std::cout 은 std라는 이름 공간에 정의되어 있는 cout을 의미

namespace header1 {
int foo();
void bar();
}

namespace header2 {
int foo();
void bar();
} 

위에 두 코드에서 header1에 있는 foo는 header1이라는 이름 공간에 살고 있고 header2에 있는 foo는 header2이라는 이름 공간에 삼


#include "header1.h"

namespace header1 {
int func()
    foo();     // 알아서 header1::foo()가 실행
}

#include "header1.h"
#include "header2.h"

namespace header1 {
int func(){
    foo();     // 알아서 header1::foo()가 실행
    header2::foo();  // header2::foo()가 실행
}
}

앞으로 header1 이란 이름 공간에 들어있는 foo만 쓸거다
#include "header1.h"
#include "header2.h"

using header1::foo;
int main() {
    foo();
}

기본적으로 header1 이름 공간안에 정의된 모든 것들을 header1:: 없이 사용하고 싶으면
#include "header1.h"
#include "header2.h"

using namespace header1;
int main() {
    header2::foo();  // header2에 있는 함수를 호출
    bar();
}

cout이란??
ostream 클래스의 객체로 표준 출력을 담당
endl이란??
화면에 출력해주는 함수*/