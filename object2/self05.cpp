/*객체란, 변수들과 참고 자료들로 이루어진 소프트웨어 덩어리이다.
이와 같이 어떠한 객체는 자기 만의 정보를 나타내는 변수들과, 이를 가지고 어떠한 작업을 하는 함수들로 둘러싸고 있다.
이러한 객체의 변수나 함수들을 보통 인스턴스 변수와 인스턴스 메소드라고 부른다. 외부에서 어떠한 객체의 인스턴스 변수의 값을
바꾸지 못하고 오직 객체의 인스턴스 함수를 통해서만 가능하다는 것 
Animal animal;
// 초기화 과정 생략

animal.food += 100;    // -- > 불가능
animal.increase_food(100);  // -- > 가능

자체 외부에서 animal 이라는 객체의 인스턴스 변수에 직접 접근하는 것이기 때문에 불가능하다. animal.increase_food(100)의 경우 animal 객체의 
인스턴스 함수를 통해서 값을 수정하는 것이기 때문에 가능하다. 외부에서 직접 인스턴스 변수의 값을 바꿀 수 없고 항상 인스턴스 메소드를 통해서 
간접적으로 조절하는 것을 캡슐화라고 한다. 
클래스 : 객체의 '설계도'라고 볼수 있다.
클래스를 이용해서 만들어진 객체를 인스턴스라고 부른다. 
*/

/*#include <iostream>
using namespace std;

class Animal {
private:
    int food;   // 멤버 변수 정의
    int weight;

public:
    void set_animal(int _food, int _weight) {
        food = _food;
        weight = _weight;
    }

    void increase_food(int inc) {
        food += inc;
        weight += (inc / 3);
    }
    void view_start() {
        cout << "이 동물의 food    :" << food << endl;
        cout << "이 동물의 weight  :" << weight << endl;
    }
};

int main() {
    Animal animal;   // 클래스의 인스턴스 animal을 만들게 된것 이다.
    animal.set_animal(100, 50);
    animal.increase_food(30);

    animal.view_start();
    return 0;
} */
/* 위는 Animal 이라는 클래스를 나타낸 것으로 Animal 클래스를 통해서 생성될 임의의 객체에 대한 설계도라고 볼 수 있다. 즉, Animal 클래스를
통해서 생성될 객체는 food, weight라는 변수가 있고 set_animal, increase_food, view_start이라는 함수들이 있는데, Animal 클래스 상에서 이들을 지칭할 때 각각
멤버 변수, 멤버 함수라고 부른다.
*/

#include <iostream>

class Date{
private:
    int year_;
    int month_;
    int day_;

public:
    void SetDate(int year, int month, int date) {
        year_ = year;
        month_ = month;
        day_ = date;
    }

    void AddDay(int inc) {
        int maxDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        day_ += inc;

        while (day_ > maxDays[month_]) {
            day_ -= maxDays[month_];
            month_++;
            if (month_ > 12) {
                month_ = 1;
                year_++;
            }
        }
    }

    void AddMonth(int inc) {
        month_ += inc;
        while (month_ > 12) {
            month_ -= 12;
            year_++;
        }
        
    }

    void AddYear(int inc) {
        year_ += inc;
    }

    void ShowDate() {
        std::cout << year_ << "년 " << month_ << "월 " << day_ << "일" << std::endl;
    }
};

int main() {
  Date date;
  date.SetDate(2012, 2, 28);
  
  date.AddDay(3);
  date.ShowDate();  // 2012년 3월 2일 출력
  
  return 0;
}