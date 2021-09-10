#if 0
//c에서 이렇게 사용했다
#include <iostream>

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        std::cout << x[i] << std::endl;
    }
}
#endif

#if 0
#include <iostream>

int main()
{
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int n : x) //x배열로부터 하나씩 꺼내서 n에 담아달라
    {
        std::cout << n << std::endl;
    }
    //1, 2, 3, 4, 5, 6, 7, 8, 9, 10 출력된다.
}
#endif

#include <iostream>

int main()
{
    double x[5] = {1.4, 2.5, 3.6, 4.7, 5.8};

    for (auto n : x) //auto라고 적으면 더 편하게 쓸수 있다.
    {
        std::cout << n << std::endl;
    }
    //x에다가 list vector등의 컨테이너도 사용 가능
    //사용자가 만든 링크드 리스트도 넣을 수 있다.
    //for문과 연동하려면 추가적 작업이 필요한데 추후 배우자
}