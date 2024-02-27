#include <iostream>
using namespace std;


#pragma region 정수

// 정수
// 
// 변수 선언 방법
// [타입] [이름];
// [타입] [이름] = [초기값];
// 0이 아닌 초기값이 있으면 section .data
//int hp = 100;

// 초기값이 0이거나, 초기값이 없으면 section .bss
//char a;         // 1바이트 (-128 ~ 127)
//short b;        // 2바이트 (-32768 ~ 32767)
//int c;          // 4바이트 (-21.4억 ~ 21.4억)
//__int64 d;      // 8바이트 (-922.3경 ~ 922.3경)
//
//unsigned char ua;         // 1바이트 (0 ~ 255)
//unsigned short ub;        // 2바이트 (0 ~ 65535)
//unsigned int uc;          // 4바이트 (0 ~ 42.9억)
//unsigned __int64 ud;      // 8바이트 (0 ~ 1844.7경)

#pragma endregion

#pragma region 불리언

// 불리언
//
// bool은 1바이트 정수에 불과
// -> 1byte가 최소 단위 ex) ah, al
// true / false 둘 중 하나라는 힌트를 줌 (가독성)
//bool isHighLevel = true;
//bool isPlayer = true;
//bool isMale = false;
//
//int isFemale = 1;

#pragma endregion

#pragma region 실수 (부동소수점)

// 실수 (부동소수점)
// 
// 부동소수점이란 .을 유동적으로 움직여서 표현하는 방법
//float attackSpeed = 4.125f;         // 4바이트
//double attackSpeed2 = 123.4123;      // 8바이트

// float = 부호(1) 지수(8) 유효숫자(23) = 32비트 = 4바이트
// 지수는 unsigned byte라고 가정하고 숫자 + 127
// 
// double = 부호(1) 지수(11) 유효숫자(52) = 64비트 = 8바이트
// 지수는 unsigned byte라고 가정하고 숫자 + 1023

// ex) -3.375 값 저장
// 1) 2진수 = 0b11.011
// 2) 정규화 = 0b1.1011 * 2^1
// 3) 부호 = 1
// 4) 지수 = 1 + (127)
// 5) 유효숫자 = 1011
// 6) 결과 = 0b 1100 0000 0101 1000 0000 0000 0000 0000

// ex) 4.125 값 저장
// 1) 2진수 = 0b100.001
// 2) 정규화 = 0b1.00001 * 2^2
// 3) 부호 = 0
// 4) 지수 = 2 + (127)
// 5) 유효숫자 = 00001
// 6) 결과 = 0b 0100 0000 1000 0100 0000 0000 0000 0000

// 프로그래밍할 때 부동소수점은 항상 '근사값' 이라는 것을 기억
// 수가 커질 수록 오차 범위도 매우 커짐
// 실수 2개를 == 으로 비교하는 것은 지양

#pragma endregion

#pragma region 문자와 문자열
// 문자와 문자열
//
// 정수지만 '문자' 의미를 나타내기 위해 사용

// char : 알파벳 / 숫자 문자를 나타낸다
// wchar_t : 유니코드 문자를 나타낸다

// ASCII (American Standard Code for Information Interchange)
// '문자'의 의미로 작은 따옴표 '' 사용
//char ch = 97;
//char ch1 = 'a';
//char ch2 = '1';
//char ch3 = 'a' + 1;

// 국제화 시대에는 영어만으로 서비스 할 수 없음
// 전 세계 모든 문자에 대해 유일한 코드를 부여한 것이 유니코드 (unicode)
// 참고) 유니코드에서 가장 많은 번호를 차지하는게 한국어/중국어
// 유니코드는 표기 방식이 여러가지가 있는데 대표적으로 UTF8, UTF16
// 
// UTF8
// - 알파벳, 숫자 = 1바이트 (ASCII와 동일한 번호)
// - 유럽 지역의 문자는 2바이트
// - 한글, 한자 등 3바이트
// 
// UTF16
// - 알파벳, 숫자, 한글, 한자 등 거의 대부분 문자 2바이트
// - 예외적인 고대 문자만 4바이트 (사실상 없다고 생각해도 됨)
//wchar_t wch = L'안';
//wchar_t wch2 = 0xc548;

// Escape Sequence
// \0 = 아스키코드 0 = NULL
// \t = 아스키코드 9 = Tab
// \n = 아스키코드 10 = Line Feed (한 줄 아래로)
// \r = 아스키코드 13 = Carriage Return (커서 맨 앞으로)
// \r\n = Enter
// \' = 작은 따옴표

// 문자열
// 문자들이 열을 지어 모여 있는 것 (문자 배열?)
// 문자는 정수 (1 ~ 8바이트) 고정 길이로 저장
// 문자열의 끝은 항상 NULL (\00) 이 들어가 있다.

//char str1[] = {'h', 'e', 'l', 'l', 'o'};     // 데이터 영역은 대부분의 데이터가 \0으로 초기화 되어 있기 때문에 문제 없음
//char str2[] = "Hello World";    // ""로 문자열을 만들면 끝에 \0이 들어가 있음.
//wchar_t str3[] = L"Hello World";
#pragma endregion

#pragma region 산술 연산
// 산술 연산
// - 대입 연산
// - 사칙 연산

//int na = 1;
//int nb = 2;
#pragma endregion

#pragma region 비교 연산과 논리 연산
    
    //// 비교 연산
    //bool isSame;
    //bool isDifferent;
    //bool isGreater;
    //bool isSmaller;

    //// 논리 연산
    //bool test;

    //// int hp = 100;
    //bool isInvincible = true;

#pragma endregion

#pragma region 비트 연산

    //unsigned char flag;     // 부호를 없애야 >> 를 하더라도 부호 비트가 딸려오지 않음

#pragma endregion

#pragma region const와 메모리구조

    // 한번 정해지면 절대 바뀌지 않을 값들
    // 숫자를 하드코딩하지 않고 별도의 변수로 관리하는 것이 좋다
    // constant의 약자인 const를 붙임 (변수를 상수화 한다고 함)
    // const를 붙였으면 초기값을 반드시 지정해야 함

    // 0b0000 [무적][변이][스턴][에어본]
    /*const int AIRBONE = 0;
    const int STUN = 1;
    const int POLYMORPH = 2;
    const int INVINCIBLE = 3;*/

    
    // 메모리 구조

    // 전역 변수
    // [데이터 영역]
    // .data (초기값 있는 경우)
    //int data = 1;

    //// .bss (초기값 없는 경우)
    //int bss;

    //// .rodata (읽기 전용 데이터)
    //const char* msg = "Hello Wolrd";

    // const를 붙인 일반 변수(상수화)도 .rodata 영역에 생성되는가?
    // 사실 C++ 표준에 꼭 그렇게 하라는 말이 없음
    // 따라서 컴파일러마다 다르다

#pragma endregion

#pragma region 열거형

    // const는 메모리를 낭비할 가능성이 있다.
    // ex) stack 영역에 선언한 경우
    // ex) const 변수의 주소를 참조하려고 하는 경우
    /*const int SICSSORS = 1;
    const int ROCK = 2;
    const int PAPER = 3;*/

    // enum은 컴파일시 완전히 상수로 대체되어 메모리를 낭비하지 않을 수 있다.
    // 숫자를 지정하지 않으면 첫 값은 0부터 시작
    // 그 다음 값들은 이전 값 + 1
    /*enum ENUM_SRP
    {
        ENUM_SICSSORS = 1,
        ENUM_ROCK,
        ENUM_PAPER,
    };*/

    // 빌드 단계
    // 1) 전처리  2) 컴파일  3) 링크
    // # -> 전처리 지시문
    // #include <iostream> -> iostream이라는 파일을 찾아서 해당 내용을 현재 파일에 복사 + 붙여넣기
    // 상수를 만들 때 #define은 최대한 지양할 것
//#define DEFINE_SICSSORS 1
//#define DEFINE_TEST cout << "Hello World" << endl;

#pragma endregion

#pragma region 함수

    // input으로 무엇을 받고, output으로 무엇을 리턴할지 정해준다
    // 리턴타입 함수이름([인자타입 매개변수])
    // {
    //      함수 내용
    //      return ~~~;
    // }

    // Hello World를 콘솔에 출력하는 함수를 만들어보자
    // input : 없음 / output : 없음
    void PrintHelloWorld()
    {
        cout << "Hello World" << endl;
    }

    // 정수를 인자로 받아서, 콘솔에 출력하는 함수를 만들어보자
    // input : int / output : 없음
    void PrintNumber(int number)
    {
        cout << "넘겨준 숫자는 " << number << " 입니다" << endl;
    }

    // 2를 곱하고 결과물을 리턴하는 함수를 만들어보자
    // input : int / output : int
    int MultiplyBy2(int number)
    {
        return number * 2;
    }

    // 두 숫자를 곱하고 결과물을 리턴하는 함수를 만들어보자
    // input : int, int / output : int
    int MultiplyBy(int a, int b)
    {
        return a * b;
    }


#pragma endregion

#pragma region 호출 스택

    //// 함수 선언
    //void Func1();
    //void Func2(int a, int b);
    //void Func3(float a);

    //// 함수 구현
    //void Func1()
    //{
    //    cout << "Func1" << endl;
    //    Func2(1, 2);
    //    Func3(10.0f);
    //}

    //void Func2(int a, int b)
    //{
    //    cout << "Func2" << endl;
    //    Func3(10);
    //}

    //void Func3(float a)
    //{
    //    cout << "Func3" << endl;
    //}

#pragma endregion

#pragma region 함수 마무리

// 오버 로딩
//int Add(int a, int b)
//{
//    return a + b;
//}
//
//float Add(float a, float b)
//{
//    return a + b;
//}


// 기본 인자값
//void SetPlayerInfo(int hp, int mp, int attack, int guildId = 0, int castleId = 1)
//{
//
//}

// 스택 오버플로우
//int Factorial(int n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    return n * Factorial(n - 1);
//}

#pragma endregion

#pragma region 포인터

//void SetHp(int* hp)
//{
//    *hp = 100;
//}

#pragma endregion

#pragma region 포인터 연산

    // 1) 주소 연산자 (&)
    // 2) 산술 연산자 (+, -)
    // 3) 간접 연산자 (*)
    // 4) 간접 멤버 연산자 (->)

    //struct Player
    //{
    //    int hp;     // +0
    //    int damage; // +4
    //};

#pragma endregion

#pragma region 참조

    // 참조 전달 방식
    // 값 전달처럼 편리하게 사용가능
    // 주소 전달처럼 주소 값을 이용해 직접 사용
    // 일석이조 방식
    /*struct StatInfo
    {
        int hp;
        int attack;
        int defence;
    };

    void PrintInfoByRef(StatInfo& info)
    {
        cout << "-----------------------" << endl;
        cout << "HP: " << info.hp << endl;
        cout << "ATT: " << info.attack << endl;
        cout << "DEF: " << info.defence << endl;
        cout << "-----------------------" << endl;
    }*/

#pragma endregion

#pragma region 포인터 vs 참조

//struct StatInfo
//{
//    int hp;
//    int attack;
//    int defence;
//};

// 포인터 vs 참조
// 성능 : 같음
// 편의성 : 참조 승

// 1) 편의성 관련
// 편의성이 좋다는 것이 꼭 장점만 있는 것은 아니다
// 포인터는 주소를 넘기니 확실한 힌트를 남겨 주의를 줄 수 있는 반면
// 참조는 자연스럽게 값 카피 방식으로 착각할 수 있다
// 때문에 데이터를 수정하는 코드를 실수로 넣어버릴 수도 있다

// 포인터 - & 기호를 통해 포인터를 사용한다는 것을 명확하게 남김
// PrintInfo(&info);

// 참조 - 값 카피와 착각할 수 있음
// PrintInfo(info);

// 이 경우 const를 사용하여 개선 가능
// 참고로 포인터도 const를 사용 가능하다
// * 기준 앞에 붙이느냐, 뒤에 붙이느냐에 따라 의미가 달라진다

// * 뒤에 const를 붙인 경우
// - ex) StatInfo* const info
// - info라는 포인터 변수에 담긴 데이터(주소)를 수정할 수 없음

// * 앞에 const를 붙인 경우
// - ex) const StatInfo* info
// - 포인터 변수인 info가 가르키는 변수의 데이터를 바꿀 수 없음

// 앞과 뒤에 const를 모두 붙일 수도 있다

//void PrintInfoByPtr(const StatInfo* const info)
//{
//    if (info == nullptr)
//    {
//        return;
//    }
//    if (!info)
//    {
//        return;
//    }
//    cout << "HP: " << info->hp << endl;
//    cout << "ATT: " << info->attack << endl;
//    cout << "DEF: " << info->defence << endl;
//}
//
//void PrintInfoByRef(const StatInfo& info)
//{
//    cout << "HP: " << info.hp << endl;
//    cout << "ATT: " << info.attack << endl;
//    cout << "DEF: " << info.defence << endl;
//}

// 2) 초기화 여부 관련
// 참조 타입은 변수의 2번째 이름(별칭)을 지어주는 느낌
// -> 참조하는 대상이 없으면 안됨
// -> 초기화가 강제된다

// 반면 포인터는 어떤 주소라는 의미
// -> 대상이 실존하지 않을 수 있다
// 포인터에서 '어떠한 주소도 가르키지 않는다'의 의미로는 nullptr 이라는 값을 사용한다
// ex) StatInfo* pointer = nullptr;
// 참조 타입은 nullptr의 개념이 없다

// 그래서 결론은?
// 정해진 답은 없다
// ex) 구글에서 만든 오픈소스는 거의 무조건 포인터 사용
// ex) 언리얼 엔진에서는 참조도 사용

// - 없는 경우도 고려해야 한다면 포인터 사용 (null 체크 필수)
// - 바뀌지 않고 읽는 용도(readonly)만 사용한다면 const + 참조 사용
// - 그 외 일반적인 경우 참조 사용(수정할 수도 있다는걸 명시적으로 표현하려면 OUT을 붙인다), ex) #define OUT
// - 단, 다른 사람이 포인터로 만들어놓은걸 이어서 만든다면, 계속 포인터 사용 (참조를 섞어 사용 x)
//#define OUT
//void ChangeInfo(OUT StatInfo& info)
//{
//    info.hp = 150;
//}

#pragma endregion

#pragma region 배열

//struct StatInfo
//{
//    int hp = 0xAAAAAAAA;
//    int attack = 0xBBBBBBBB;
//    int defence = 0xCCCCCCCC;
//};

#pragma endregion

#pragma region 포인터 vs 배열

//void Test(char a)
//{
//    a++;
//}

// 배열은 함수 인자로 넘기면, 컴파일러가 포인터로 치환한다 (char[] -> char*)
// 따라서 배열의 내용 전체를 카피해 넘긴 것이 아니라 시작 주소(포인터)만 넘긴 것이다
//void Test(char a[])
//{
//    a[0] = 'x';
//}

#pragma endregion

#pragma region 다중 포인터

//void SetMessage(const char* a)
//{
//    a = "bye";
//}

//void SetMessage(const char** a)
//{
//    *a = "bye";
//}
//
//void SetMessage(const char*& a)
//{
//    a = "bye";
//}

#pragma endregion

#pragma region 다차원 배열

// 2차 배열은 언제 사용할까?
// - 대표적으로 2D 로그라이크 맵

#pragma endregion

#pragma region 파일 분활 관리

#include "Test1.h"

#pragma endregion


int main()
{

#pragma region 문자와 문자열

    // cout은 char 전용
    //cout << ch1 << endl;
    //cout << ch2 << endl;
    //cout << ch3 << endl;

    //wcout.imbue(locale("kor"));
    //wcout << wch << endl;
    //wcout << wch2 << endl;

    //char str[] = { 'h', 'e', 'l', 'l', 'o', '\0' };    // 스택 영역은 0으로 초기화 되지 않기 때문에 스택 영역에서 0을 발견할 때 까지 값을 출력하게 됨.
    //cout << str << endl;
    //cout << str1 << endl;
    //cout << str2 << endl;
    //wcout << str3 << endl;

#pragma endregion

#pragma region 산술 연산
    // 대입 연산
    // a에 b를 대입하고 b를 반환하라
    // - b 변수의 값을 a 변수에 복사한다
    //na = nb;
    //na = nb = 3;


    //// 사칙 연산
    //// 언제 필요한가?
    //// ex) 데미지 계산할 때
    //// ex) 체력을 깎을 때
    //// ex) 루프문에서 카운터를 증감시킬 때

    //na = nb + 3;  // 덧셈 add
    //na = nb - 3;  // 뺄셈 sub
    //na = nb * 3;  // 곱셈 mul
    //na = nb / 3;  // 몫 div
    //na = nb % 3;  // 나머지 div

    //na += 3;     // a = a + 3;
    //na -= 3;
    //na *= 3;
    //na /= 3;
    //na %= 3;

    //// 증감 연산자
    //na = na + 1;  // add eax, 1 -> inc eax
    //++na;        // 전위
    //na++;        // 후위
    //--na;
    //na--;

#pragma endregion

#pragma region 비교 연산과 논리 연산

    // 비교 연산
    // 언제 필요한가?
    // ex) 체력이 0이 되면 사망
    // ex) 체력이 30% 이하이면 궁극기 발동 (100 * hp / maxHp)
    // ex) 경험치가 100 이상이면 레벨업

    //a = 1;
    //b = 2;

    //// a == b : a와 b의 값이 같은가?
    //// 같으면 1, 다르면 0
    //isSame = (a == b);

    //// a != b : a와 b의 값이 다른가?
    //// 다르면 1, 같으면 0
    //isDifferent = (a != b);

    //// a > b : a가 b보다 큰가?
    //// a >= b : a가 b보다 크거나 같은가?
    //// 크면 1, 작으면 0
    //isGreater = (a > b);

    //// a < b : a가 b보다 작은가?
    //// a <= b : a가 b보다 작거나 같은가?
    //isSmaller = (a < b);

    //cout << isSame << endl;


    //// 논리 연산
    //// 언제 필요한가?
    //// - 조건에 대한 논리적 사고가 필요할 때
    //// ex) 로그인할 때 아이디 AND 비밀번호가 같아야 한다
    //// ex) 길드 마스터이거나 OR 운영자 계정이면 길드 해산 가능

    //// ! = NOT
    //// 0 이면 1, 1 이면 0
    //test = !isSame;
    //cout << test << endl;

    //// && = AND
    //// a && b -> 둘다 1 이면 1, 그 외 0
    //test = (hp <= 0 && isInvincible == false);      // 죽음

    //// || = OR
    //// a || b -> 둘 중 하나라도 1 이면 1, 둘 다 0 이면 0
    //test = (hp > 0 || isInvincible == true);        // 살았음
    //test = !(hp <= 0 && isInvincible == false);

#pragma endregion

#pragma region 비트 연산

    // 언제 필요한가? (사실 많이는 없음)
    // 비트 단위의 조작이 필요할 때
    // - 대표적으로 BitFlag

    // ~ : bitwise not
    // 단일 숫자의 모든 비트를 대상으로 0은 1, 1은 0으로 뒤바꿈

    // & : bitwise and
    // 두 숫자의 모든 비트 쌍을 대상으로 AND를 한다

    // | : bitwise or
    // 두 숫자의 모든 비트 쌍을 대상으로 OR를 한다

    // ^ : bitwise xor
    // 두 숫자의 모든 비트 쌍을 대상으로 XOR를 한다

    // << : 비트 좌측 이동
    // 비트열을 N만큼 왼쪽으로 이동
    // 왼쪽으로 넘치는 N개의 비트는 버림
    // 오른쪽에 생성되는 N개의 비트는 0으로 생성됨
    // *2를 할 때 자주 보이는 패턴

    // >> : 비트 우측 이동
    // 비트열을 N만큼 오른쪽으로 이동
    // 오른쪽의 넘치는 N개의 비트는 버림
    // 왼쪽에 생성되는 N개의 비트는 
    // - 부호 비트가 존재할 경우 부호 비트를 따라 생성됨 (부호 있는 정수라면 이 부분을 유의)
    // - 아니면 0으로 생성됨


    // 실습
    // 0b0000 [무적][변이][스턴][에어본]

    //// 무적 상태로 만든다
    //flag = 1 << 3;

    //// 변이 상태를 추가한다 (무적 + 변이)
    //flag |= 1 << 2;

    //// 무적인지 확인하고 싶다? (다른 상태는 관심 없음)
    //// bitmask
    //bool isInvincible = (flag & (1 << 3)) != 0;

    //// 무적이거나 스턴 상태인지 확인하고 싶다면?
    //int mask = (1 << 3) | (1 << 1);    // 0b1010
    //bool isStunOrInvincible = (flag & mask) != 0;

#pragma endregion

#pragma region const와 메모리구조

    //// 무적 상태로 만든다
    //flag = 1 << INVINCIBLE;

    //// 변이 상태를 추가한다 (무적 + 변이)
    //flag |= 1 << POLYMORPH;

    //// 무적인지 확인하고 싶다? (다른 상태는 관심 없음)
    //// bitmask
    //isInvincible = (flag & (1 << INVINCIBLE)) != 0;

    //// 무적이거나 스턴 상태인지 확인하고 싶다면?
    //mask = (1 << INVINCIBLE) | (1 << STUN);    // 0b1010
    //isStunOrInvincible = (flag & mask) != 0;


    //// 메모리 구조

    //// 지역 변수
    //// [스택 영역]
    //int stack = 3;

#pragma endregion

#pragma region 열거형

    //DEFINE_TEST;

#pragma endregion

#pragma region 함수

    /*PrintHelloWorld();
    PrintNumber(2);
    int result = MultiplyBy2(3);
    PrintNumber(result);
    result = MultiplyBy(3, 5);
    PrintNumber(result);*/

#pragma endregion

#pragma region 호출 스택

   /* cout << "main" << endl;
    Func1();*/

#pragma endregion

#pragma region 함수 마무리

    //// 오버 로딩
    //float result = Add(1.5f, 2.1f);
    //cout << result << endl;

    //
    //// 기본 인자
    //SetPlayerInfo(100, 40, 10);
    //SetPlayerInfo(100, 40, 10, 0, 2);

    // 스택 오버플로우
    // n! = n * (n - 1)!
    // 4! = 4 * 3 * 2 * 1
    // 5! = 5 * 4 * 3 * 2 * 1 = 5 * 4!
    /*int result = Factorial(5);
    cout << result << endl;*/

#pragma endregion

#pragma region 포인터

    //int number = 1;

    //// 포인터 변수 선언
    //// 타입* 포인터 변수이름;
    //int* ptr = &number;

    //// 사용 방법
    //// 일반 변수 = *포인터 변수이름
    //// *포인터 변수이름 = 값;
    //int value = *ptr;
    //*ptr = 2;

    // 포인터 변수 크기 4바이트(32비트) or 8바이트(64비트) 고정 크기
    // 타입은 왜 붙여줄까?
    // ex) 청접장에 있는 주소 = 예식장 주소
    // ex) 명함에 있는 주소 = 회사 주소

    // 타입의 불일치 경우
    /*__int64* ptr2 = (__int64*) &number;
    *ptr2 = 0x0000AABBCCDDEEFF;

    int hp = 1;
    SetHp(&hp);*/

#pragma endregion

#pragma region 포인터 연산
    
    //int number = 1;

    //// 1) 주소 연산자 (&)
    //// - 해당 변수 타입(TYPE)에 따라서 TYPE* 반환
    //int* pointer = &number;

    //// 2) 산술 연산자 (+, -)
    //number += 1;    // 1증가

    //// 포인터는 TYPE의 크기만큼 이동
    //pointer += 1;   // 4증가
    //pointer += 2;   // 8증가

    //// 3) 간접 연산자 (*)
    //number = 3;
    //*pointer = 3;

    //Player player;
    //player.hp = 100;
    //player.damage = 10;

    //Player* playerPtr = &player;
    //(*playerPtr).hp = 200;
    //(*playerPtr).damage = 20;

    //// 4) 간접 멤버 연산자 (->)
    //playerPtr->hp = 200;
    //playerPtr->damage = 20;

#pragma endregion

#pragma region 참조

    /*StatInfo info;
    info.hp = 100;
    info.attack = 10;
    info.defence = 5;

    PrintInfoByRef(info);*/

#pragma endregion

#pragma region 포인터 vs 참조

    //StatInfo info;
    //info.hp = 100;
    //info.attack = 10;
    //info.defence = 5;

    //StatInfo* pointer = nullptr;
    //PrintInfoByPtr(pointer);
    //pointer = &info;

    //StatInfo& reference = info;
    //PrintInfoByRef(info);

    //// #define OUT
    //ChangeInfo(OUT info);

    //// 포인터로 사용하던걸 참조로 넘겨줄 때
    //PrintInfoByRef(*pointer);

    //// 참조로 사용하던걸 포인터로 넘겨줄 때
    //PrintInfoByPtr(&reference);

#pragma endregion

#pragma region 배열
    
    // TYPE 이름[개수];
    // 배열의 크기는 상수여야 함 (VC 컴파일러 기준)
    /*const int monsterCount = 10;
    StatInfo monsters[monsterCount];*/

    // 배열의 이름은 곧 배열의 시작 주소
    // 정확히는 시작 위치를 가리키는 TYPE* 포인터
    /*StatInfo* monster_0 = monsters;
    monster_0->hp = 100;
    monster_0->attack = 10;
    monster_0->defence = 1;*/

    // 포인터의 덧셈: 타입 사이즈만큼 이동
    /*StatInfo* monster_1 = monsters + 1;
    monster_1->hp = 200;
    monster_1->attack = 20;
    monster_1->defence = 2;*/

    // 포인터와 참조는 자유자재로 변환 가능
    /*StatInfo& monster_2 = *(monsters + 2);
    monster_2.hp = 300;
    monster_2.attack = 30;
    monster_2.defence = 3;*/

    // 이를 조금 더 자동화
    /*for (int i = 0; i < monsterCount; i++)
    {
        StatInfo& monster = *(monsters + i);
        monster.hp = 100 * (i + 1);
        monster.attack = 10 * (i + 1);
        monster.defence = i + 1;
    }*/

    // *(monsters + i)는 불편하고 가독성이 떨어진다
    // 배열은 0번부터 시작, N번째 인덱스에 해당하는 데이터에 접근하려면 배열이름[N]
    // *(monsters + i) = monsters[i]
    /*monsters[0].hp = 100;
    monsters[0].attack = 10;
    monsters[0].defence = 1;

    for (int i = 0; i < 10; i++)
    {
        monsters[i].hp = 100 * (i + 1);
        monsters[i].attack = 10 * (i + 1);
        monsters[i].defence = i + 1;
    }*/

    // 배열 초기화 문법
    //int numbers[5] = {};                                    // 모든 요소를 0으로 초기화
    //int numbers1[10] = { 1, 2, 3, 4, 5 };                   // 지정해준만큼 순서대로 초기화하고 나머지는 0으로 초기화
    //int numbers2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };     // 데이터 개수만큼의 크기에 해당하는 배열 생성

    //char helloStr[] = { 'H', 'e', 'l', 'l', 'o', 'WO' };
    //cout << helloStr << endl;
    
#pragma endregion

#pragma region 포인터 vs 배열
    
    // 포인터 변수는 주소를 저장하는 변수
    // "Hello World"의 시작 주소만 저장한다.
    /*const char* test1 = "Hello World";*/

    // test2[]에 "Hello World"의 데이터 복사가 일어난다
    /*char test2[] = "Hello World";

    int a = 0;
    Test(a);
    cout << a << endl;*/

    // 배열은 함수 인자로 넘기면, 컴파일러가 포인터로 치환한다 (char[] -> char*)
    // 따라서 배열의 내용 전체를 카피해 넘긴 것이 아니라 시작 주소(포인터)만 넘긴 것이다
    /*Test(test2);
    cout << test2 << endl;*/
    
#pragma endregion

#pragma region 다중 포인터

    /*const char* msg = "Hello";
    SetMessage(msg);
    cout << msg << endl;*/

#pragma endregion

#pragma region 다차원 배열

    /*int first[5] = { 1, 2, 3, 4, 5 };
    int second[5] = { 5, 6, 7, 8, 9 };

    int apartment2D[2][5] = { { 1, 2, 3, 4, 5 }, { 5, 6, 7, 8, 9 } };
    
    for (int floor = 0; floor < 2; floor++)
    {
        for (int room = 0; room < 5; room++)
        {
            int num = apartment2D[floor][room];
            cout << num << "\t";
        }
        cout << endl;
    }


    int apartment1D[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int floor = 0; floor < 2; floor++)
    {
        for (int room = 0; room < 5; room++)
        {
            int index = (floor * 5) + room;
            int num = apartment1D[index];
            cout << num << "\t";
        }
        cout << endl;
    }

    // 게임 맵 사용 예시
    // 0은 갈 수 있는 곳, 1은 갈 수 없는 곳
    int map[5][5] =
    {
        { 1, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1 },
        { 0, 0, 0, 0, 1 },
        { 1, 0, 1, 0, 1 },
        { 1, 1, 1, 1, 1 },
    };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int info = map[i][j];
            cout << info;
        }
        cout << endl;
    }*/

#pragma endregion

#pragma region 파일 분활 관리

    Test_1();

#pragma endregion

}