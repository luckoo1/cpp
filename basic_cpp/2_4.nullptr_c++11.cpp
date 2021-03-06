//#######################################################################
int main()
{
    int *p1 = 0;  // 0은 정수(int)
                  // 0은 암시적 형변환이 되어서 null이 된다.
    int *p2 = 10; //10은정수라서 error
}

//정리1
//0은 정수이지만 포인터로 암시적 형변환이 가능
//0이 포인터가 아닌 정수라는 점이 문제가 될수 있다(템플릿,오버로딩)

//#######################################################################

int main()
{
    int *p3 = nullptr;
    int n = nullptr; //error

    bool b1 = nullptr; //error(copy 초기화)
                       //g++은 error이고 cl은 OK
    bool b2(nullptr);  //Ok(direct 초기화)
    bool b3{nullptr};  //OK
}
//정리2
//포인터 타입의 0
//int 타입으로 암시적 형 변환 되지 않는다.
//bool 타입으로의 암시적 형 변환된다. 단, direct 초기화만 가능