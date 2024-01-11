/*컴퓨터에서 메모리를 관리하는 문제는 언제나 중요한 문제
프로그램이 정확하게 실행되기 위해서는 컴파일 시에 모든 변수의 주소값이 확정되어야했다.
하지만 이를 위해서는 프로그램에 많은 제약이 따르기 때문에 프로그램 프로그램 실행 시 자유롭게 할당하고 해제할수 있는 
heap(힙) 이라는 공간이 따로 생김
*/

/*어느정도 안정성이 보장되는 스택(stack)과는 다르게 힙은 사용자가 스스로 제어해야 하는 부분인 만큼 책임이 크다.*/

/*컴퓨터에서 낭비란 곧 비효율적인 프로그램을 의미한다는 뜻, 이렇게 쓸데 없이 낭비되는 자원을 막기 위해 '학생 수'를 입력 받고 그 학생 수 만큼 배열의 크기를 지정하면 좋다.
바로 동적 메모리 할당!!!
말 그대로 동적으로 메모리를 할당, 여기서 동적이란 말은 딱 정해진 것이 아니라 가변적으로 변할 수 있다는 말, 또한 메모리를 '할당' 한다는 이야기는 역시 우리가 배열을 정의하면
배열에 맞는 메모리의 특정한 공간이 배열을 나타내는 것 처럼 메모링의 특정한 부분을 사용

정적(static)이란 한번 정해놓으면 변하지 않고 계속 유지되는 성질을 말하며, 동적(dynamic)이란 상황에 따라서 실시간으로 변하는 성질을 말하는 것이었습니다.
*/


/*
C++에서도 마찬가지로 malloc과 free 함수를 사용
하지만 언어 차원에서 지원하는 것은 바로 new와 delete라고 할 수 있다. new는 말 그대로 malloc과 대응되는 것으로 메모리를 할당하고 delete는 free에 대응 되는 것으로 메모리를 
해제한다.
*/
/*new와 delete의 사용*/
/*#include <iostream>
using namespace std;

int main() {
    int* p = new int;  // 정수를 가리키는 포인터 p를 선언하고 new 연산자를 이용해 동적으로 정수형 변수 할당하고 그 메모리 주소를 p에 저장
    *p = 10;           // p를 가리키는 메모리 위치에 10을 저장

    cout << *p << endl;

    delete p;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int arr_size;
    cout << "array size: ";
    cin >> arr_size;

    int *list = new int[arr_size];  //arr_size 크기의 정수형 배열을 동적으로 할당하고, 그 주소를 list 포인터에 저장합니다. 이 배열은 사용자가 입력한 크기에 따라 크기가 동적으로 조정됩니다.
    for (int i = 0; i < arr_size; i++) {
        cin >> list[i];
    }
    for (int i = 0; i < arr_size; i++) {
        cout << i << "th element of list: " << list[i] << endl;
    }
    delete[] list;
    return 0;
}*/
/*
#include <iostream>

typedef struct Animal {
  char name[30];  // 이름
  int age;        // 나이

  int health;  // 체력
  int food;    // 배부른 정도
  int clean;   // 깨끗한 정도
} Animal;

void create_animal(Animal *animal) {
  std::cout << "동물의 이름? ";
  std::cin >> animal->name;

  std::cout << "동물의 나이? ";
  std::cin >> animal->age;

  animal->health = 100;
  animal->food = 100;
  animal->clean = 100;
}

void play(Animal *animal) {
  animal->health += 10;
  animal->food -= 20;
  animal->clean -= 30;
}
void one_day_pass(Animal *animal) {
  // 하루가 지나면
  animal->health -= 10;
  animal->food -= 30;
  animal->clean -= 20;
}
void show_stat(Animal *animal) {
  std::cout << animal->name << "의 상태" << std::endl;
  std::cout << "체력    : " << animal->health << std::endl;
  std::cout << "배부름 : " << animal->food << std::endl;
  std::cout << "청결    : " << animal->clean << std::endl;
}
int main() {
  Animal *list[10];
  int animal_num = 0;

  for (;;) {
    std::cout << "1. 동물 추가하기" << std::endl;
    std::cout << "2. 놀기 " << std::endl;
    std::cout << "3. 상태 보기 " << std::endl;

    int input;
    std::cin >> input;

    switch (input) {
      int play_with;
      case 1:
        list[animal_num] = new Animal;
        create_animal(list[animal_num]);

        animal_num++;
        break;
      case 2:
        std::cout << "누구랑 놀게? : ";
        std::cin >> play_with;

        if (play_with < animal_num) play(list[play_with]);

        break;

      case 3:
        std::cout << "누구껄 보게? : ";
        std::cin >> play_with;
        if (play_with < animal_num) show_stat(list[play_with]);
        break;
    }

    for (int i = 0; i != animal_num; i++) {
      one_day_pass(list[i]);
    }
  }
  for (int i = 0; i != animal_num; i++) {
    delete list[i];
  }
}*/

// animal->name은 animal이 가리키는 Animal 구조체를 가리킬때 animal->name은 animal이 가리키는 Animal의 name 맴버에 접근