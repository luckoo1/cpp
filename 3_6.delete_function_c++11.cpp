#if 0
void foo(int a)
{
}

int main()
{
    foo(3.4);
}
//double을 인자로 보냈어도 int로 암시적 형변환이 되어 문제없이 컴파일된다.
#endif
#if 0
void foo(int a)
{
}

void foo(double a)
{
}

int main()
{
    foo(3.4);
}
//함수가 2개 있으면 알아서 double로 간다.
#endif

#if 0
void foo(int a)
{
}

void foo(double a); //선언만 했다.

int main()
{
    foo(3.4); //int버전을 부를지 error가 나올지 생각해보자
    //error가 나온다.
    //링크에러(실제함수가 어디있는지 찾는 건 링크다)
}

/*
정리
1. 특정 타입의 함수를 제공하지 않으면
인자의 변환이 발생해서 호출 가능한 다른 함수가 있으면 호출된다.
2.특정 타입의 함수를 선언만 하면
해당 함수 사용시 링크에러 발생
3.해당 함수를 삭제(delete)하면
해당 함수 사용시 컴파일 에러가 발생
*/
//링크에러 발생하는게 문제다
//컴파일만 하는 경우가 있을텐데 그때 에러 잡기가 어려워 진다.
#endif

#if 0
void foo(int a)
{
}

void foo(double a) = delete; //함수삭제

int main()
{
    foo(3.4);
}
//이제 링크에러가 아닌 컴파일타임 에러가 발생한다.
//"삭제된 함수를 호출하려 합니다"라는 에러 발생
//버그 관리에 용이하게 하기위해 만들었다.
#endif
#if 0
template <typename T>
T square(T a)
{
    return a * a;
}

int main()
{
    square(3.3);
    //개발자가 만약에 double버전은 함수 만들지마라고 하고 싶다.
}
#endif

template <typename T>
T square(T a)
{
    return a * a;
}

double square(double) = delete; //함수 삭제 구현

int main()
{
    square(3.3);
    //double 썻으니 에러 뜬다.
}