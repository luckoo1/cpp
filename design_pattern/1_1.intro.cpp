#include <iostream>
using namespace std;

int main()
{
    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
}

/*
디자인 패턴이란?
이중루프처럼 자주 사용되는 코딩 패턴에 이름을 부여한것
이름이 있기 때문에 개발자간에 편리하고 명확한 의사소통이 가능하다

GoF,s Design Pattern(1995년에 발간됨) 
저자들이 각 코드를 개발한 것이 아니라, 기존에 존재하는 코딩 방식에 이름을 부여
23가지 디자인패턴을 설명
*/

/*
객체지향디자인의 핵심원리
Gof's 디자인 패턴 책에 소개되는 주요패턴
C++진영의 오픈소스가 많이 사용하는 디자인 기법
*/