#if 0
#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    if (n == 0)
    {
    }
}
#endif

#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    //constexpr은 컴파일 시간이라는 의미를 가지고 있다.
    if constexpr (n == 0) //컴파일 시간에 조사하는 if문
                          //이건 error다.
    {
    }
    constexpr int c = 10;  //이건 컴파일시간에 초기화한다.
    if constexpr (c == 10) //Ok
    {
    }
}

/*
흔히 static if라고도 부른다.
if문은 실행시간에 조건문이지만 if constexpr은 컴파일 시간 조건문
컴파일 시간에 결정되는 상수표현식만 조사할 수 있다. 변수를 조사할 수 없다.
템플릿 프로그래밍에서 많이 사용한다.
*/