#if 0
1.
- 프로그램에서 복소수가 필요했다
    그래서 int형 변수 2개 썼다.(코드 복잡해짐) 차라리 복소수 타입을 만들라는 이야기를 초창기에 했었다
    =>그런데 C++에는 std::complex를 가지고 있다.

- 프로그램에서 문자열이 필요하다.
    c에는 문자열 타입이 없다.
    그래서 "char+포인터"나 "char+배열"을 썼다.
    이건 문자에 포인터 섞은거거나 문자에 배열을 섞은거다.
    이런거 때문에 프로그램이 복잡해진다.

2.
프로그램에서 필요한 타입을 먼저 설계한다
C++표준라이브러리(STL)에는 이미 문자열 타입이 있다.(std::string)
더이상 "char+포인터"나 "char+배열"을 쓰지 말고 차라리 문자열 타입을 쓰자.
#endif

#include <iostream>
#include <cstring>
#include <string> //1. 포함시킴

class Person
{
    std::string name; //2.내부적에서 알아서 버퍼관리를 한다.
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {} //3.이렇게 초기화도 하고
    /*
    4.
    string class는 내부에서 자원관리해주니깐
    소멸자 "~Person(){ delete[] name; }"도 필요없다.
    복사생성자생각할 필요도 사라진다.
    */
};

int main()
{
    Person p1("KIM", 2);
    Person p2 = p1; //5.이렇게 작업해도 문제가 없다.
}