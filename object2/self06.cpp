//함수의 오버로딩 case1
/*#include <iostream>
using namespace std;

void print(int x) {
    cout << "int : " << x << endl;    
}

void print(char x) {
    cout << "char : " << x << endl;
}

void print(double x) {
    cout << "double : " << x << endl;
}

int main() {
    int a = 1;
    char b = 'c';
    double c = 3.2f;

    print(a);
    print(b);
    print(c);

    return 0;
}*/
// -->>>>> 함수 이름이 같더라도 인자가 다르면 다른 함수라고 판단하기 때문에 오류가 발생하지 않는다.

//함수의 오버로딩 case2
#include <iostream>
using namespace std;

void print(int x) {
    cout << "int : " << x << endl;
}

void print(double x) {
    cout << "double : " << x << endl;
}

int main() {
    int a = 1;
    char b = 'c';
    double c = 3.2f;

    print(a);
    print(b);
    print(c);

    return 0;
}
// ----->>>>  int 타입의 인자나 double 타입의 인자를 하나 받는 함수 하나 밖에 없다. 하지만 char의 경우 자기와 정확히 일치하는 인자를 가지는 함수가 없기 때문에 자신과 최대로 근접한 함수를 찾게 된다.



/* C++ 컴파일러에서 함수를 오버로딩하는 과정

1. 자신과 타입이 정확히 일치하는 함수를 찾는다.
2. 정확히 일치하는 타입이 없는 경우 아래와 같은 형변환을 통해서 일치하는 함수를 찾아본다
    - char, unsigned char, short는 int 로 변환
    - unsigned short는 int의 크기에 따라 int 혹은 unsigned int로 변환
    - float는 double로
    - Enum은 int로 변환
3. 위와 같이 변환해도 일치하는 것이 없다면 아래의 좀  포괄적인 형변환을 통해 일치하는 함수를 찾는다.
    - 임의의 숫자(numeric) 타입은 다른 숫자 타입으로 변환 (float -> int)
    - Enum 도 임의 숫자 타입으로 변환 (Enum -> double)
    - 포인터는 void 포인터로 변환
4. 유저 정의된 타입 변환으로 일치하는 것을 찾는다. 만약 컴파일러가 위 과정을 통하더라ㅏ도 일치하는 함수를 찾을 수 없거나, 같은 단계에서 두 개 이상이 일치하는 경우에 모호하다하고 판단해서 오류를 발생하게 한다.
-->> 위의 코드는 2단계 오버로딩 이용*/

#include <iostream>

    class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

 public:
  void SetDate(int year, int month, int date);
  void AddDay(int inc);
  void AddMonth(int inc);
  void AddYear(int inc);

  // 해당 월의 총 일 수를 구한다.
  int GetCurrentMonthTotalDays(int year, int month);

  void ShowDate();
};

void Date::SetDate(int year, int month, int day) {
  year_ = year;
  month_ = month;
  day_ = day;
}

int Date::GetCurrentMonthTotalDays(int year, int month) {
  static int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month != 2) {
    return month_day[month - 1];
  } else if (year % 4 == 0 && year % 100 != 0) {
    return 29;  // 윤년
  } else {
    return 28;
  }
}

void Date::AddDay(int inc) {
  while (true) {
    // 현재 달의 총 일 수
    int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);

    // 같은 달 안에 들어온다면;
    if (day_ + inc <= current_month_total_days) {
      day_ += inc;
      return;
    } else {
      // 다음달로 넘어가야 한다.
      inc -= (current_month_total_days - day_ + 1);
      day_ = 1;
      AddMonth(1);
    }
  }
}

void Date::AddMonth(int inc) {
  AddYear((inc + month_ - 1) / 12);
  month_ = month_ + inc % 12;
  month_ = (month_ == 12 ? 12 : month_ % 12);
}

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate() {
  std::cout << "오늘은 " << year_ << " 년 " << month_ << " 월 " << day_
            << " 일 입니다 " << std::endl;
}

int main() {
  Date day;
  day.SetDate(2011, 3, 1);
  day.ShowDate();

  day.AddDay(30);
  day.ShowDate();

  day.AddDay(2000);
  day.ShowDate();

  day.SetDate(2012, 1, 31);  // 윤년
  day.AddDay(29);
  day.ShowDate();

  day.SetDate(2012, 8, 4);
  day.AddDay(2500);
  day.ShowDate();
  return 0;
}

/* -->>>> Date::을 함수 이름 앞에 붙여주게 되면 이 함수가 Date 클래스의 정의된 함수라는 의미이다.
우리가 생성자를 정의하지도 않았는데 어떤 생성자가 호출이 될까요? 바로 디폴트 생성자(Default Constructor) 입니다. 디폴트 생성자는 인자를 하나도 가지지 않는 생성자인데, 클래스에서 사용자가 어떠한 생성자도 명시적으로 정의하지 않았을 경우에 컴파일러가 자동으로 추가해주는 생성자입니다.
