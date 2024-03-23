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

//#include "Test1.h"

#pragma endregion

#pragma region 객체지향 시작

// 객체란? 플레이어, 몬스터, 게임룸

// Knight를 설계해보자
// - 속성(데이터): hp, attack, x, y
// - 기능(동작): Move, Attack, Die

// class는 일종의 설계도
//class Knight
//{
//public:
//    // 멤버 함수 선언
//    void Move(int x, int y);
//    void Attack();
//    void Die()
//    {
//        _hp = 0;
//        cout << "Die" << endl;
//    }
//
//public:
//    // 멤버 변수
//    int _hp;
//    int _attack;
//    int _posX;
//    int _posY;
//
//};
//
//void Knight::Move(int x, int y)
//{
//    _posX = x;
//    _posY = y;
//    cout << "Move" << endl;
//}
//
//void Knight::Attack()
//{
//    cout << "Attack : " << _attack << endl;
//}

#pragma endregion

#pragma region 생성자와 소멸자

// 생성자(Constructor)와 소멸자(Destructor)
// 클래스에 '소속'된 함수들을 멤버 함수라고 함
// 이 중에서 [시작]과 [끝]을 알리는 특별한 함수 2종이 있다
// 시작(생성) -> 생성자(여러개 존재 가능)
// 끝(소멸) -> 소멸자(오직 1개만)

// 암시적(Implicit) 생성자
// 생성자를 명시적으로 만들지 않으면,
// 아무 인자도 받지 않는 [기본 생성자]가 컴파일러에 의해 자동으로 만들어짐
// 그러나 명시적(Explict)으로 아무 생성자를 하나 만들면,
// 자동으로 만들어지던 [기본 생성자]는 더 이상 만들어지지 않음!

//class Knight
//{
//public:
//    // [1] 기본 생성자 (인자가 없음)
//    Knight()
//    {
//        cout << "Knight() 기본 생성자 호출" << endl;
//        _hp = 100;
//        _attack = 10;
//        _posX = 0;
//        _posY = 0;
//    }
//
//    // [2] 복사 생성자 (자기 자신의 클래스 참조 타입을 인자로 받음)
//    // 일반적으로 '똑같은' 데이터를 지닌 객체가 생성되길 기대한다
//    // 명시적으로 복사 생성자를 만들지 않을 경우 컴파일러가 자동으로 복사 생성자를 만들어준다
//    /*Knight(const Knight& knight)
//    {
//        _hp = knight._hp;
//        _attack = knight._attack;
//        _posX = knight._posX;
//        _posY = knight._posY;
//    }*/
//    
//    // [3] 기타 생성자
//    // 생성자 오버로딩
//    // 이 중에서 인자를 1개만 받는 [기타 생성자]를 [타입 변환 생성자]라고 부르기도 함
//    // 암시적으로 타입 변환을 한다
//    // 명시적인 용도로만 사용할 것: explicit
//    explicit Knight(int hp)
//    {
//        cout << "Knight(int) 기타 생성자 호출" << endl;
//        _hp = hp;
//        _attack = 10;
//        _posX = 0;
//        _posY = 0;
//    }
//
//    Knight(int hp, int attack, int posX, int posY)
//    {
//        _hp = hp;
//        _attack = attack;
//        _posX = posX;
//        _posY = posY;
//    }
//
//    // 소멸자
//    ~Knight()
//    {
//        cout << "~Knight() 소멸자 호출" << endl;
//    }
//
//    void Move(int x, int y);
//    void Attack();
//    void Die()
//    {
//        _hp = 0;
//        cout << "Die" << endl;
//    }
//
//public:
//    int _hp;
//    int _attack;
//    int _posX;
//    int _posY;
//
//};
//
//void Knight::Move(int x, int y)
//{
//    _posX = x;
//    _posY = y;
//    cout << "Move" << endl;
//}
//
//void Knight::Attack()
//{
//    cout << "Attack : " << _attack << endl;
//}
//
//void HelloKnight(Knight k)
//{
//    cout << "Hello Knight" << endl;
//}

#pragma endregion

#pragma region 상속성

// 객체지향 (OOP: Object Oriented Programming)
// - 상속성
// - 은닉성
// - 다형성

// 상속(Inheritance) ? 부모 -> 자식에게 유산을 물려주는 것
// 생성자(N) / 소멸자(1)
// - Knight를 생성하면 Player() 생성자 호출 후 -> Knight() 생성자 호출

// 게임 개발 상속 사용 예
// GameObject
// - Creature
// -- Player, Monster, NPC, Pet
// - Projectile
// -- Arrow, Fireball
// - Environment

// Item
// - Weapon
// -- Sword, Bow
// - Armor
// -- Helmet, Boots, Armor
// - Consumable
// -- Potion, Scroll

//class GameObject
//{
//public:
//    int _objectId;
//};
//
//class Player : public GameObject
//{
//public:
//    Player()
//    {
//        _hp = 0;
//        _attack = 0;
//        _defence = 0;
//        cout << "Player() 기본 생성자 호출" << endl;
//    }
//
//    Player(int hp)
//    {
//        _hp = hp;
//        _attack = 0;
//        _defence = 0;
//        cout << "Player(int hp) 기타 생성자 호출" << endl;
//    }
//
//    ~Player()
//    {
//        cout << "~Player() 소멸자 호출" << endl;
//    }
//    void Move() { cout << "Player Move 호출" << endl; }
//    void Attack() { cout << "Player Attack 호출" << endl; }
//    void Die() { cout << "Player Die 호출" << endl; }
//
//public:
//    int _hp;
//    int _attack;
//    int _defence;
//};
//
//class Knight : public Player
//{
//public:
//    Knight()
//        /*
//        * 선(먼저) 처리 영역
//        * - 여기서 Player() 기본 생성자를 호출
//        */
//    {
//        _stamina = 100;
//        cout << "Knight() 기본 생성자 호출" << endl;
//    }
//
//    Knight(int stamina) : Player(100)
//        /*
//        * 선(먼저) 처리 영역
//        * - 여기서 Player(int hp) 기타 생성자를 호출
//        */
//    {
//        _stamina = stamina;
//        cout << "Knight(int stamina) 기타 생성자 호출" << endl;
//    }
//
//    ~Knight()
//    {
//        cout << "~Knight() 소멸자 호출" << endl;
//    }
//    /*
//    * 후(나중에) 처리 영역
//    * - 여기서 ~Player() 소멸자를 호출
//    */
//
//    // 재정의
//    void Move() { cout << "Knight Move 호출" << endl; }
//public:
//    int _stamina;
//};
//
//class Mage : public Player
//{
//public:
//    int _mp;
//};

#pragma endregion

#pragma region 은닉성

// 객체지향 (OOP: Object Oriented Programing)
// - 상속성
// - 은닉성 = 캡슐화
// - 다형성

// 은닉성(Data Hiding) = 캡슐화(Encapsulation)
// 숨기는 이유?
// 1) 위험하고 건드리면 안되는 경우
// 2) 다른 경로로 접근하길 원하는 경우

// 자동차
// - 핸들
// - 페달
// - 엔진
// - 문
// - 각종 전기선

// 일반 구매자 입장에서 사용하는 것?
// - 핸들 / 페달 / 문
// 몰라도 되는 것 혹은 건드리면 안되는 것?
// - 엔진, 각종 전기선

// 접근 지정자: public(공개), protected(보호), private(개인)
// - public: 모든 곳에서 사용 가능
// - protected: 상속된 클래스들에서만 사용 가능
// - private: 클래스 내부에서만 사용 가능

// 상속 접근 지정자: 다음 세대에 부모의 유산을 어떻게 물려줄지
// - public: 부모 클래스의 설계 그대로 상속 (public -> public, protected -> protected)
// - protected: 부모 클래스의 접근 지정자를 protected로 바꿔서 상속 (public -> protected, protected -> protected)
// - private: 부모 클래스의 접근 지정자를 private으로 바꿔서 상속 (public -> private, protected -> private)

//class Car
//{
//public:     // (멤버) 접근 지정자
//    void MoveHandle() {}
//    void PushPedal() {}
//    void OpenDoor() {}
//
//    void TurnKey()
//    {
//        // ...
//        RunEngine();
//    }
//
//protected:
//    void DisassembleCar() {}    // 차를 분해
//    void RunEngine() {}         // 엔진을 구동
//    void ConnectCircuit() {}    // 전기선 연결
//
//public:     // (멤버) 접근 지정자
//    // 핸들
//    // 페달
//    // 엔진
//    // 문
//    // 각종 전기선
//};
//
//
//class SuperCar : private Car     // (상속) 접근 지정자
//{
//public:
//    void PushRemoteController()
//    {
//        RunEngine();
//    }
//};
//
//class TestSuperCar : public SuperCar   // (상속) 접근 지정자를 생략하면 부모의 (상속) 접근 지정자를 따라간다
//{
//public:
//    void Test()
//    {
//        
//    }
//};
//
//// 캡슐화
//// 연관된 데이터와 함수를 논리적으로 묶어놓은 것
//class Berserker
//{
//public:
//    int GetHp() { return _hp; }
//    void SetHp(int hp)
//    {
//        _hp = hp;
//        if (_hp <= 50)
//        {
//            SetBerserkerMode();
//        }
//    }
//
//private:
//    // 체력이 50 이하로 떨어지면 버서커 모드 발동 (강해짐)
//    void SetBerserkerMode()
//    {
//        cout << "매우 강해짐!" << endl;
//    }
//
//private:
//    int _hp = 100;
//};

#pragma endregion

#pragma region 다형성

// 다형성(Polymorphism = Poly + morph) = 겉은 같지만 기능이 다르게 동작한다
// - 오버로딩(Overloading) = 함수 중복 정의 = 함수 이름의 재사용
// - 오버라이딩(Overriding) = 재정의 = 부모 클래스의 함수를 자식 클래스에서 재정의

// 바인딩(Binding) = 묶는다
// - 정적 바인딩(Static Binding): 컴파일 시점에 결정
// - 동적 바인딩(Dynamic Binding): 실행 시점에 결정

// 일반 함수는 정적 바인딩을 사용
// 동적 바인딩을 원한다면? -> 가상 함수 (Virtual Function)

// 실제 객체가 어떤 타입인지 어떻게 알고 알아서 가상함수를 호출해준걸까?
// - 가상 함수 테이블 (vftable)
// .vftable [] 4바이트(32) 8바이트(64)

// 순수 가상 함수: 구현은 없고 '인터페이스'만 전달하는 용도로 사용하고 싶을 경우
// ex) virtual void VAttack() = 0;

// 추상 클래스: 순수 가상 함수가 1개 이상 포함되면 추상 클래스로 간주한다
// - 직접적으로 객체를 만들 수 없게 됨

//class Player
//{
//public:
//    Player()
//    {
//        _hp = 100;
//    }
//
//    void Move() { cout << "Move Player!" << endl; }
//    //void Move(int a) { cout << "Move Player (int)!" << endl; }
//    virtual void VMove() { cout << "VMove Player!" << endl; }
//    virtual void VDie() { cout << "VDie Player!" << endl; }
//
//    // 순수 가상 함수
//    virtual void VAttack() = 0;
//
//public:
//    int _hp;
//};
//
//class Knight : public Player
//{
//public:
//    Knight()
//    {
//        _stamina = 100;
//    }
//
//    void Move() { cout << "Move Knight!" << endl; }
//    // 가상 함수는 virtual을 생략하고 재정의 하더라도 가상 함수다
//    virtual void VMove() { cout << "VMove Knight!" << endl; }
//    virtual void VDie() { cout << "VDie Knight!" << endl; }
//
//    virtual void VAttack() { cout << "VAttack Knight!" << endl; }
//
//public:
//    int _stamina;
//};
//
//class Mage : public Player
//{
//public:
//    void Move() { cout << "Move Mage!" << endl; }
//
//public:
//    int _mp;
//};
//
//void MovePlayer(Player* player)
//{
//    player->VMove();
//    player->VDie();
//}

#pragma endregion

#pragma region 초기화 리스트

// 초기화 해야하는 경우?
// - 포인터 등 주소값이 연관되어 있을 경우
// - 버그 예방

// 멤버 변수 초기화는 다양한 문법이 존재한다
// - 생성자 내에서 초기화
// - 초기화 리스트
// - C++11 문법

// 초기화 리스트
// - 상속 관계에서 원하는 부모 생성자를 호출할 때 필요하다
// - 생성자 내에서 초기화 vs 초기화 리스트
// -- 일반 변수는 별 차이 없음
// -- 멤버 타입이 클래스인 경우 차이가 난다


//class Inventory
//{
//public:
//    Inventory() { cout << "Inventory()" << endl; }
//    Inventory(int size) { cout << "Inventory(int size)" << endl; _size = size; }
//    ~Inventory() { cout << "~Inventory" << endl; }
//
//public:
//    int _size = 10;
//};
//
//class Player
//{
//public:
//    Player() {}
//    Player(int id) {}
//};

// Is-A (Knight Is-A Player? 기사는 플레이어인가?) YES -> 상속관계
// Has-A (Knight Has-A Inventory? 기사는 인벤토리를 갖고 있는가?) YES -> 포함관계

//class Knight : public Player
//{
//public:
//    // 참조 타입과 const 변수도 초기화 리스트를 활용하여 초기화 해주어야 한다
//    Knight() : Player(1), _hp(100), _inventory(20), _hpRef(_hp), _hpConst(100)
//        /*
//        * 선처리 영역
//        * - 부모 클래스의 생성자를 명시적으로 호출하지 않아도 선처리 영역에서 부모 클래스의 기본 생성자를 간접적으로 호출
//        * - 포함관계의 클래스를 멤버 변수로 가지고 있다면 선처러 영역에서 해당 클래스의 기본 생성자를 간접적으로 호출
//        */
//    {
//        _hp = 100;
//        //_inventory = Inventory(20);   // 생성자 내부 초기화는 선처리 영역에서 기본 생성자로 객체를 한번 먼저 생성한 후 초기화하므로 성능적으로 문제가 있다
//    }
//
//public:
//    int _hp;    // 쓰레기 값
//    Inventory _inventory;
//
//    int& _hpRef;
//    const int _hpConst;
//};

#pragma endregion

#pragma region 연산자 오버로딩

// 연산자 vs 함수
// - 연산자는 피연산자의 개수/타입이 고정되어 있음

// 연산자 오버로딩?
// - [연산자 함수]를 정의해야 함
// 함수도 멤버함수, 전역함수가 존재하는 것처럼 연산자 함수도 두가지 방식으로 만들 수 있음

// - 멤버 연산자 함수
// -- a operator b 형태에서 왼쪽을 기준으로 실행됨 (a가 클래스여야 연산 가능. a를 '기준 피연산자'라고 함)
// -- 한계) a가 클래스가 아니면 사용 못함

// - 전역 연산자 함수
// -- a operation b 형태라면 a, b 모두를 연산자 함수의 피연산자로 만들어준다

// 둘 중 하나만 지원하는 경우도 있다
// - 대표적으로 대입 연산자 (a = b)는 전역 연산자로는 만들 수 없다

// 복사 대입 연산자
// [복사 생성자] [대입 연산자] [복사 대입 연산자]

// - 모든 연산자를 다 오버로딩 할 수 있는 것은 아니다 (::, ., .* 등)
// 모든 연산자가 다 2개 항이 있는 것은 아니다 (++, -- 가 대표적, 단항 연산자)
// - 증감 연산자 ++, --
// -- 전위형 (++a) = operator++()
// -- 후위형 (a++) = operator++(int)

//class Position
//{
//public:
//    Position operator+(const Position& arg)
//    {
//        Position pos;
//        pos._x = _x + arg._x;
//        pos._y = _y + arg._y;
//
//        return pos;
//    }
//
//    Position operator+(int arg)
//    {
//        Position pos;
//        pos._x = _x + arg;
//        pos._y = _y + arg;
//
//        return pos;
//    }
//
//    bool operator==(const Position& arg)
//    {
//        return _x == arg._x && _y == arg._y;
//    }
//
//    Position& operator=(int arg)
//    {
//        _x = arg;
//        _y = arg;
//        return *this;
//    }
//
//    // [복사 생성자] [복사 대입 연산자]
//    // 말 그대로 객체가 '복사'되길 원하는 특징
//    // 생략할 경우 컴파일러가 자동 생성
//    Position& operator=(const Position& arg)
//    {
//        _x = arg._x;
//        _y = arg._y;
//        return *this;
//    }
//
//    Position& operator++()
//    {
//        ++_x;
//        ++_y;
//        return *this;
//    }
//    
//    Position operator++(int)
//    {
//        Position ret = *this;
//        ++_x;
//        ++_y;
//        return ret;
//    }
//
//public:
//    int _x;
//    int _y;
//};
//
//// 전역 연산자 함수
//Position operator+(int a, const Position& b)
//{
//    Position pos;
//    pos._x = b._x + a;
//    pos._y = b._y + a;
//    return pos;
//}


#pragma endregion

#pragma region 객체지향 마무리
    
// 1) struct vs class
// C++에서 struct와 class는 종이 한장 차이
// struct는 기본 접근 지정자가 public이고, class는 private이다
// -> C++은 C에서 파생되었고, 호환성을 지키기 위함이다
// -> struct는 그냥 구조체(데이터 묶음)을 표현하는 용도
// -> class는 객체 지향 프로그래밍의 특징을 나타내는 용도

//struct TestStruct
//{
//    int _a;
//    int _b;
//};
//
//class TestClass
//{
//    int _a;
//    int _b;
//};
//
//// 2) static 변수, static 함수 (static = 정적 = 고정된)
//class Marine
//{
//public:
//    int _hp;
//    static int s_attack;
//
//    void TakeDamage(int damage)
//    {
//        _hp -= damage;
//    }
//
//    static void SetAttack()
//    {
//        s_attack = 100;
//    }
//};


// static 변수 메모리 영역
// 초기화 하면 .data 영역
// 초기화 하지 않으면 .bss 영역
//int Marine::s_attack = 0;


//class Player
//{
//public:
//    int _id;
//};
//
//int GenerateId()
//{
//    // 생명주기: 프로그램 시작/종료 (메모리에 항상 올라가 있음)
//    // 가시범위: 함수 내부
//
//    // 정적 지역 객체
//    /*static int s_id = 1;
//    return s_id++;*/
//}

#pragma endregion

#pragma region 동적할당

// 메모리 구조 복습
// - 실행할 코드가 저장되는 영역 -> 코드 영역
// - 전역(global)/정적(static) 변수 -> 데이터 영역
// - 지역(local)/매개(parameter) 변수 -> 스택 영역
// - 동적 할당 -> 힙 영역

// 스택 영역
// - 함수가 끝나면 같이 정리되는 불안정한 메모리
// - 일시적인 용도로 사용

// 데이터 영역
// - 프로그램이 실행되는 도중에는 '무조건' 사용되는 영역

// 힙 영역
// - 필요할 떄만 사용하고, 필요 없으면 반납할 수 있는 영역
// - 스택과는 다르게 생성/소멸 시점을 관리할 수 있는 영역
// 동적할당과 연관된 함수/연산자: malloc/free, new/delete, new[]/delete[]

//class Monster
//{
//public:
//    Monster()
//    {
//        cout << "Monster()" << endl;
//    }
//
//    ~Monster()
//    {
//        cout << "~Monster()" << endl;
//    }
//
//public:
//    int _hp;
//    int _x;
//    int _y;
//};

#pragma endregion

#pragma region 타입변환

//class Knight
//{
//public:
//    int _hp = 10;
//};
//
//class Dog
//{
//public:
//    Dog()
//    {
//        
//    }
//
//    // 타입 변환 생성자
//    Dog(const Knight& knight)
//    {
//        _age = knight._hp;
//    }
//
//    // 타입 변환 연산자
//    operator Knight()
//    {
//        return (Knight)(*this);
//    }
//
//public:
//    int _age = 1;
//    int _cuteness = 2;
//};
//
//class BullDog : public Dog
//{
//public:
//    bool _french;   // 프렌치 불독
//};

#pragma endregion

#pragma region 타입변환(포인터)

//class Knight
//{
//public:
//    int _hp = 0;
//};
//
//class Item
//{
//public:
//    Item()
//    {
//        cout << "Item()" << endl;
//    }
//
//    Item(int itemType) : _itemType(itemType)
//    {
//        cout << "Item(int itemType)" << endl;
//        //_itemType = itemType;
//    }
//
//    Item(const Item& item)
//    {
//        cout << "Item(const Item&)" << endl;
//    }
//
//    virtual ~Item()
//    {
//        cout << "~Item()" << endl;
//    }
//
//    virtual void Test()
//    {
//        cout << "Test Item" << endl;
//    }
//
//public:
//    int _itemType = 0;
//    int _itemDbId = 0;
//    
//    char _dummy[4096] = {};
//};
//
//enum ItemType
//{
//    IT_WEAPON = 0,
//    IT_ARMOR = 1,
//};
//
//class Weapon : public Item
//{
//public:
//    Weapon() : Item(IT_WEAPON), _damage(rand() % 100)
//    {
//        //_itemType = IT_WEAPON;
//        cout << "Weapon()" << endl;
//    }
//
//    ~Weapon()
//    {
//        cout << "~Weapon()" << endl;
//    }
//
//    virtual void Test()
//    {
//        cout << "Test Weapon" << endl;
//    }
//
//public:
//    int _damage = 0;
//};
//
//class Armor : public Item
//{
//public:
//    Armor() : Item(IT_ARMOR)
//    {
//        //_itemType = IT_ARMOR;
//        cout << "Armor()" << endl;
//    }
//
//    ~Armor()
//    {
//        cout << "~Armor()" << endl;
//    }
//    
//public:
//    int _defence = 0;
//};
//
//void TestItem(Item item)
//{
//
//}
//
//void TestItemPtr(Item* item)
//{
//    item->Test();
//}

#pragma endregion

#pragma region 얕은 복사 vs 깊은 복사

//class Pet
//{
//public:
//    Pet()
//    {
//        cout << "Pet()" << endl;
//    }
//
//    Pet(const Pet& pet)
//    {
//        cout << "Pet(const Pet&)" << endl;
//    }
//
//    Pet& operator=(const Pet& pet) {
//        cout << "operator=(const Pet&)" << endl;
//        return *this;
//    }
//
//    ~Pet()
//    {
//        cout << "~Pet()" << endl;
//    }
//};
//
//class Player
//{
//public:
//    Player()
//    {
//        cout << "Player()" << endl;
//    }
//
//    Player(const Player& player)
//    {
//        cout << "Player(const Player&)" << endl;
//        _level = player._level;
//    }
//
//    Player& operator=(const Player& player)
//    {
//        cout << "Player(const Player&)" << endl;
//        _level = player._level;
//        return *this;
//    }
//
//    ~Player()
//    {
//        cout << "~Player()" << endl;
//    }
//
//public:
//    int _level = 0;
//};
//
//class Knight : public Player
//{
//public:
//    Knight()
//    {
//        cout << "Knight()" << endl;
//        _pet = new Pet();
//    }
//
//    Knight(const Knight& knight) : Player(knight), _pet(new Pet(*knight._pet))
//    {
//        cout << "Knight(const Knight&)" << endl;
//        _hp = knight._hp;
//        //_pet = new Pet(*knight._pet);   // 깊은 복사
//    }
//
//    Knight& operator=(const Knight& knight)
//    {
//        cout << "operator=(const Knight&)" << endl;
//        Player::operator=(knight);
//        _hp = knight._hp;
//        _pet = new Pet(*knight._pet);   // 깊은 복사
//        return *this;
//    }
//
//    ~Knight()
//    {
//        cout << "~Knight()" << endl;
//        delete _pet;
//    }
//
//public:
//    int _hp = 100;
//    Pet* _pet;
//};

#pragma endregion

#pragma region 캐스팅 4종류

// 1) static_cast
// 2) dynamic_cast
// 3) const_cast
// 4) reinterpret_cast

//class Player
//{
//public:
//    virtual ~Player() {}
//};
//
//class Knight : public Player
//{
//
//};
//
//class Archer : public Player
//{
//
//};
//
//class Dog
//{
//
//};
//
//
//void PrintName(char* str)
//{
//    cout << str << endl;
//}

#pragma endregion

#pragma region 전방선언

//#include "Player.h"

#pragma endregion

#pragma region 함수 포인터

//class Knight;
//
//int Add(int a, int b)
//{
//    return a + b;
//}
//
//int Sub(int a, int b)
//{
//    return a - b;
//}
//
//// typedef의 진실
//// typedef 왼쪽값 오른쪽값 -> 오른쪽 (커스텀 타입 정의)
//// 정확히는 왼쪽/오른쪽 기준이 아니라
//// [선언 문법]에서 typedef를 앞에다 붙이는 것이다.
//
//// 단계별 선언
//typedef int FUNC(int, int);     // 함수 선언 -> 타입 선언
//FUNC* func = &Sub;              // 함수 타입 포인터 변수 선언 -> 초기화 (& 생략 가능, C언어 호환성 때문)
//
//// 한번에 선언
//typedef int (*PFUNC)(int, int); // 함수 포인터 선언 -> 타입 선언
//PFUNC pfunc = &Sub;             // 함수 포인터 타입 변수 선언 -> 초기화
//
//// 멤버 함수 포인터 선언 -> 타입 선언
//typedef int (Knight::*PMEMFUNC)();
//
//
//class Knight
//{
//public:
//    int GetHp()
//    {
//        cout << "GetHp()" << endl;
//        return _hp;
//    }
//
//public:
//    int _hp;
//};
//
//
//class Item
//{
//    /*class _initializer
//    {
//    public:
//        _initializer()
//        {
//            s_id = 0;
//        }
//    };*/
//
//public:
//    Item() :_itemId(s_id++), _rarity(0), _ownerId(0)
//    {
//
//    }
//
//private:
//    static int s_id;
//    //static _initializer s_initializer;
//
//public:
//    int _itemId;
//    int _rarity;
//    int _ownerId;
//};
//
//int Item::s_id = 0;
////Item::_initializer Item::s_initializer;
//
//typedef bool ITEM_SELECTOR(Item*, int);
//
//Item* FindItem(Item items[], int itemCount, ITEM_SELECTOR* selector, int value)
//{
//    for (int i = 0; i < itemCount; i++)
//    {
//        Item* item = &items[i];
//
//        // TODO 동작
//        if (selector(item, value))
//        {
//            return item;
//        }
//    }
//    return nullptr;
//}
//
//bool IsRareItem(Item* item, int rarity)
//{
//    return item->_rarity >= rarity;
//}
//
//bool IsOwnerItem(Item* item, int ownerId)
//{
//    return item->_ownerId == ownerId;
//}

#pragma endregion

#pragma region 함수 객체

//class Functor
//{
//public:
//    void operator()()
//    {
//        cout << "Functor Test" << endl;
//        cout << _value << endl;
//    }
//
//    int operator()(int num)
//    {
//        cout << "Functor Test(int)" << endl;
//        _value += num;
//        cout << _value << endl;
//        return _value;
//    }
//
//private:
//    int _value = 0;
//};
//
//
//class MoveTask
//{
//public:
//    void operator()()
//    {
//        cout << "해당 좌표로 플레이어 이동" << endl;
//    }
//
//public:
//    int _playerId;
//    int _posX;
//    int _posY;
//};

#pragma endregion

#pragma region 템플릿 기초: 함수

//class Knight
//{
//public:
//    int _hp = 100;
//};

// 템플릿: 함수나 클래스를 찍어내는 틀
// 1) 함수 템플릿
// 2) 클래스 템플릿

//template<typename T>
//void Print(T a)
//{
//    cout << a << endl;
//}
//
//// 템플릿 특수화
//template<>
//void Print(const Knight& a)
//{
//    cout << "Knight!!!" << endl;
//    cout << a._hp << endl;
//}
//
//template<typename T1, typename T2>
//void Print(T1 a, T2 b)
//{
//    cout << a << " " << b << endl;
//}
//
//template<typename T>
//T Add(T a, T b)
//{
//    return a + b;
//}

// 연산자 오버로딩 (전역함수 버전)
//ostream& operator<<(ostream& os, const Knight& k)
//{
//    os << k._hp;
//    return os;
//}

#pragma endregion

#pragma region 템플릿 기초: 클래스

// 템플릿: 함수나 클래스를 찍어내는 틀
// 1) 함수 템플릿
// 2) 클래스 템플릿

// teamplate<> 안에 들어가는 것은 [골라줘야 하는 목록]이라 볼 수 있음
//template<typename T, int SIZE>
//class RandomBox
//{
//public:
//    T GetRandomData()
//    {
//        int idx = rand() % SIZE;
//        return _data[idx];
//    }
//
//public:
//    T _data[SIZE];
//};
//
//// 템플릿 특수화
//template<int SIZE>
//class RandomBox<double, SIZE>
//{
//public:
//    double GetRandomData()
//    {
//        cout << "RandomBox Double" << endl;
//        int idx = rand() % SIZE;
//        return _data[idx];
//    }
//
//public:
//    double _data[SIZE];
//};

#pragma endregion

#pragma region 콜백 함수

// 콜백 (Callback): 다시 호출하다

// 게임을 만들 때 이런 콜백의 개념이 자주 등장한다.
// ex) MoveTask 실습 등

// 어떤 상황이 일어나면 -> 이 기능을 호출해줘
// ex) UI 스킬 버튼을 누르면 -> 스킬을 쓰는 함수를 호출

//class Item
//{
//public:
//    int _itemId = 0;
//    int _rarity = 0;
//    int _ownerId = 0;
//};
//
//class FindByOwnerId
//{
//public:
//    bool operator()(const Item* item)
//    {
//        return item->_ownerId == _ownerId;
//    }
//
//public:
//    int _ownerId;
//};
//
//class FindByRarity
//{
//public:
//    bool operator()(const Item* item)
//    {
//        return item->_rarity >= _rarity;
//    }
//
//public:
//    int _rarity;
//};
//
//template<typename T>
//Item* FindItem(Item items[], int itemCount, T selector)
//{
//    for (int i = 0; i < itemCount; i++)
//    {
//        Item* item = &items[i];
//        if (selector(item))
//        {
//            return item;
//        }
//    }
//
//    return nullptr;
//}

#pragma endregion

#pragma region vector

//#include <vector>

// STL (Standard Template Library)
// 프로그래밍할 때 필요한 자료구조/알고리즘들을
// 템플릿으로 제공하는 라이브러리

// 컨테이너(Container): 데이터를 저장하는 객체 (자료구조 Data Structure)

// vector (동적 배열): 모든 원소가 하나의 메모리 블록에 연속되게 저장된다
// - vector의 동작 원리 (size/capacity)
// - 중간 삽입/삭제: 느림
// - 처음/끝 삽입/삭제: 처음은 느림, 끝은 빠름
// - 임의 접근 (Random Access): 빠름

// 반복자 (Iterator): 포인터와 유사한 개념. 컨테이너의 원소(데이터)를 가르키고, 다음/이전 원소로 이동 가능

#pragma endregion

#pragma region vector 구현

//#include <vector>
//
//template<typename T>
//class Iterator
//{
//public:
//    Iterator() : _ptr(nullptr)
//    {
//
//    }
//
//    Iterator(T* ptr) : _ptr(ptr)
//    {
//
//    }
//
//    virtual ~Iterator()
//    {
//
//    }
//
//public:
//    T& operator*()
//    {
//        return *_ptr;
//    }
//
//    bool operator==(const Iterator& it)
//    {
//        return _ptr == it._ptr;
//    }
//
//    bool operator!=(const Iterator& it)
//    {
//        return _ptr != it._ptr;
//    }
//
//    Iterator operator+(const int count)
//    {
//        Iterator temp = *this;
//        temp._ptr += count;
//        return temp;
//    }
//
//    Iterator operator-(const int count)
//    {
//        Iterator temp = *this;
//        temp._ptr -= count;
//        return temp;
//    }
//
//    Iterator& operator++()
//    {
//        ++_ptr;
//        return *this;
//    }
//
//    Iterator operator++(int)
//    {
//        Iterator temp = *this;
//        _ptr++;
//        return temp;
//    }
//
//    Iterator& operator--()
//    {
//        --_ptr;
//        return *this;
//    }
//
//    Iterator operator--(int)
//    {
//        Iterator temp = *this;
//        _ptr--;
//        return temp;
//    }
//
//public:
//    T* _ptr;
//};
//
//template<typename T>
//class Vector
//{
//public:
//    Vector() : _data(nullptr), _size(0), _capacity(0)
//    {
//
//    }
//
//    virtual ~Vector()
//    {
//        if (_data)
//        {
//            delete[] _data;
//        }
//    }
//
//    T& operator[](const int index)
//    {
//        return _data[index];
//    }
//
//    void clear()
//    {
//        _size = 0;
//    }
//
//    int size()
//    {
//        return _size;
//    }
//
//    int capacity()
//    {
//        return _capacity;
//    }
//
//    void push_back(const T& value)
//    {
//        if (_capacity == _size)
//        {
//            int newCapacity = static_cast<int>(_capacity * 1.5);
//            if (newCapacity == _capacity)
//            {
//                ++newCapacity;
//            }
//            reserve(newCapacity);
//        }
//        _data[_size++] = value;
//    }
//
//    void reserve(int newCapacity)
//    {
//        _capacity = newCapacity;
//        T* temp = _data;
//        _data = new T[_capacity];
//        for (int i = 0; i < _size; i++)
//        {
//            _data[i] = temp[i];
//        }
//        delete[] temp;
//    }
//
//public:
//    typedef Iterator<T> iterator;
//
//    iterator begin()
//    {
//        return iterator(&_data[0]);
//    }
//
//    iterator end()
//    {
//        return begin() + _size;
//    }
//
//private:
//    T* _data;
//    int _size;
//    int _capacity;
//};


//template<typename T>
//class Iterator
//{
//public:
//    Iterator() : _ptr(nullptr)
//    {
//
//    }
//
//    Iterator(T* ptr) : _ptr(ptr)
//    {
//        
//    }
//
//    virtual ~Iterator()
//    {
//
//    }
//
//public:
//    Iterator operator+(const int& count)
//    {
//        Iterator temp = Iterator(_ptr);
//        temp._ptr + count;
//        return temp;
//    }
//
//    Iterator operator-(const int& count)
//    {
//        Iterator temp = Iterator(_ptr);
//        temp._ptr - count;
//        return temp;
//    }
//
//    Iterator& operator++()
//    {
//        _ptr++;
//        return *this;
//    }
//
//    Iterator operator++(int)
//    {
//        Iterator temp = *this;
//        _ptr++;
//        return temp;
//    }
//
//    Iterator operator--()
//    {
//        _ptr--;
//        return *this;
//    }
//
//    Iterator operator--(int)
//    {
//        Iterator temp = *this;
//        _ptr--;
//        return temp;
//    }
//
//    bool operator==(const Iterator& it)
//    {
//        return _ptr == it._ptr;
//    }
//
//    bool operator!=(const Iterator& it)
//    {
//        return _ptr != it._ptr;
//    }
//
//    T& operator*()
//    {
//        return *_ptr;
//    }
//
//public:
//    T* _ptr;
//};
//
//template<typename T>
//class Vector
//{
//public:
//    Vector() : _data(nullptr), _size(0), _capacity(0)
//    {
//        
//    }
//
//    virtual ~Vector()
//    {
//        if (_data)
//        {
//            delete _data;
//        }
//    }
//
//public:
//    T& operator[](int index)
//    {
//        return _data[index];
//    }
//
//    void reserve(int newCapacity)
//    {
//        _capacity = newCapacity;
//        T* temp = _data;
//        _data = new T[_capacity];
//        for (int i = 0; i < _size; i++)
//        {
//            _data[i] = temp[i];
//        }
//        delete temp;
//    }
//
//    void push_back(const T& value)
//    {
//        if (_size == _capacity)
//        {
//            int newCapacity = static_cast<int>(_capacity * 1.5f);
//            if (newCapacity < 2)
//            {
//                newCapacity = 1;
//            }
//            reserve(newCapacity);
//        }
//        _data[_size++] = value;
//    }
//
//    int size()
//    {
//        return _size;
//    }
//
//    int capacity()
//    {
//        return _capacity;
//    }
//
//    void clear()
//    {
//        _size = 0;
//    }
//
//public:
//    typedef Iterator<T> iterator;
//
//    iterator begin()
//    {
//        return iterator(&_data[0]);
//    }
//
//    iterator end()
//    {
//        return begin() + _size;
//    }
//
//public:
//    T* _data;
//    int _size;
//    int _capacity;
//};

#pragma endregion

#pragma region list

//#include <list>

// list (연결 리스트)
// - list의 동작 원리
// - 중간 삽입/삭제: 빠름
// - 처음/끝 삽입/삭제: 빠름
// - 임의 접근: 느림

// 단일 / 이중 / 원형

//class Node
//{
//public:
//    Node* prev;
//    Node* next;
//    int _data;
//};

#pragma endregion

#pragma region list 구현

//#include <list>

//template<typename T>
//class Node
//{
//public:
//    Node() : _next(nullptr), _prev(nullptr), _data(T())
//    {
//
//    }
//
//    Node(const T& value) : _next(nullptr), _prev(nullptr), _data(value)
//    {
//
//    }
//
//    virtual ~Node()
//    {
//
//    }
//
//public:
//    Node* _next;
//    Node* _prev;
//    T _data;
//};
//
//template<typename T>
//class Iterator
//{
//public:
//    Iterator() : _node(nullptr)
//    {
//
//    }
//
//    Iterator(Node<T>* ptr) : _node(ptr)
//    {
//
//    }
//
//    virtual ~Iterator()
//    {
//
//    }
//
//public:
//    Iterator& operator++()
//    {
//        _node = _node->_next;
//        return *this;
//    }
//
//    Iterator operator++(int)
//    {
//        Iterator temp = *this;
//        _node = _node->_next;
//        return temp;
//    }
//
//    Iterator& operator--()
//    {
//        _node = _node->_prev;
//        return *this;
//    }
//
//    Iterator operator--(int)
//    {
//        Iterator temp = *this;
//        _node = _node->_prev;
//        return temp;
//    }
//
//    bool operator==(const Iterator& it)
//    {
//        return _node == it._node;
//    }
//
//    bool operator!=(const Iterator& it)
//    {
//        return _node != it._node;
//    }
//
//    T& operator*()
//    {
//        return _node->_data;
//    }
//
//public:
//    Node<T>* _node;
//};
//
//template<typename T>
//class List
//{
//public:
//    List() : _size(0), _header(new Node<T>())
//    {
//        _header->_next = _header;
//        _header->_prev = _header;
//    }
//
//    virtual ~List()
//    {
//        while (_size > 0)
//        {
//            pop_back();
//        }
//        delete _header;
//    }
//
//public:
//    Node<T>* AddNode(Node<T>* before, const T& value)
//    {
//        Node<T>* node = new Node<T>(value);
//        Node<T>* prevNode = before->_prev;
//
//        node->_next = before;
//        node->_prev = prevNode;
//
//        prevNode->_next = node;
//        before->_prev = node;
//
//        _size++;
//
//        return node;
//    }
//
//    void push_back(const T& value)
//    {
//        AddNode(_header, value);
//    }
//
//    Node<T>* RemoveNode(Node<T>* node)
//    {
//        Node<T>* prevNode = node->_prev;
//        Node<T>* nextNode = node->_next;
//
//        prevNode->_next = nextNode;
//        nextNode->_prev = prevNode;
//
//        delete node;
//        _size--;
//
//        return nextNode;
//    }
//
//    void pop_back()
//    {
//        RemoveNode(_header->_prev);
//    }
//
//    int size()
//    {
//        return _size;
//    }
//
//public:
//    typedef Iterator<T> iterator;
//
//    iterator begin()
//    {
//        return iterator(_header->_next);
//    }
//
//    iterator end()
//    {
//        return iterator(_header);
//    }
//
//    iterator insert(iterator where, T value)
//    {
//        Node<T>* node = AddNode(where._node, value);
//        return iterator(node);
//    }
//
//    iterator erase(iterator where)
//    {
//        Node<T>* node = removeNode(where._node);
//        return iterator(node);
//    }
//
//private:
//    Node<T>* _header;
//    int _size;
//};


//template<typename T>
//class Node
//{
//public:
//    Node() : _prev(nullptr), _next(nullptr), _data(T())
//    {
//
//    }
//
//    Node(const T& value) : _prev(nullptr), _next(nullptr), _data(value)
//    {
//
//    }
//
//    virtual ~Node()
//    {
//        
//    }
//
//public:
//    Node* _prev;
//    Node* _next;
//    T _data;
//};
//
//template<typename T>
//class Iterator
//{
//public:
//    Iterator() : _node(nullptr)
//    {
//
//    }
//
//    Iterator(Node<T>* node) : _node(node)
//    {
//
//    }
//
//    virtual ~Iterator()
//    {
//
//    }
//
//public:
//    Iterator& operator++()
//    {
//        _node = _node->_next;
//        return *this;
//    }
//
//    Iterator operator++(int)
//    {
//        Iterator temp = *this;
//        _node = _node->_next;
//        return temp;
//    }
//
//    Iterator& operator--()
//    {
//        _node = _node->prev;
//        return *this;
//    }
//
//    Iterator operator--(int)
//    {
//        Iterator temp = *this;
//        _node = _node->_prev;
//        return temp;
//    }
//
//    bool operator==(const Iterator& it)
//    {
//        return _node == it._node;
//    }
//
//    bool operator!=(const Iterator& it)
//    {
//        return _node != it._node;
//    }
//
//    T& operator*()
//    {
//        return _node->_data;
//    }
//
//public:
//    Node<T>* _node;
//};
//
//template<typename T>
//class List
//{
//public:
//    List() : _header(new Node<T>()), _size(0)
//    {
//        _header->_prev = _header;
//        _header->_next = _header;
//    }
//
//    virtual ~List()
//    {
//        while (_size > 0)
//        {
//            pop_back();
//        }
//        delete _header;
//    }
//
//public:
//    Node<T>* AddNode(Node<T>* where, const T& value)
//    {
//        Node<T>* node = new Node<T>(value);
//        Node<T>* prevNode = where->_prev;
//
//        node->_prev = prevNode;
//        node->_next = where;
//
//        prevNode->_next = node;
//        where->_prev = node;
//
//        _size++;
//
//        return node;
//    }
//
//    Node<T>* RemoveNode(Node<T>* node)
//    {
//        Node<T>* prevNode = node->_prev;
//        Node<T>* nextNode = node->_next;
//
//        prevNode->_next = nextNode;
//        nextNode->_prev = prevNode;
//
//        delete node;
//        _size--;
//
//        return nextNode;
//    }
//
//    void push_back(const T& value)
//    {
//        AddNode(_header, value);
//    }
//
//    void pop_back()
//    {
//        RemoveNode(_header->_prev);
//    }
//
//    int size()
//    {
//        return _size;
//    }
//
//public:
//    typedef Iterator<T> iterator;
//
//    iterator begin()
//    {
//        return iterator(_header->_next);
//    }
//
//    iterator end()
//    {
//        return iterator(_header);
//    }
//
//    iterator insert(iterator where, const T& value)
//    {
//        Node<T>* node = AddNode(where._node, value);
//        return iterator(node);
//    }
//
//    iterator erase(iterator where)
//    {
//        Node<T>* node = RemoveNode(where._node);
//        return iterator(node);
//    }
//
//public:
//    Node<T>* _header;
//    int _size;
//};

#pragma endregion

#pragma region deque

//#include <vector>
//#include <deque>

// 시퀀스 컨테이너 (Sequence Container)
// 데이터가 삽입 순서대로 나열되는 형태
// vector list deque

// vector와 마찬가지로 배열 기반으로 동작
// 다만 메모리 할당 정책이 다름

// - deque의 동작 원리
// - 중간 삽입/삭제: 느림
// - 처음/끝 삽입/삭제: 빠름
// - 임의 접근: 빠름

#pragma endregion

#pragma region map

//#include <map>
//
//class Player
//{
//    Player() : _playerId(0)
//    {
//
//    }
//
//    Player(int playerId) : _playerId(playerId)
//    {
//        
//    }
//
//    virtual ~Player()
//    {
//
//    }
//
//public:
//    int _playerId;
//};
//
//// vector, list의 치명적인 단점
//// -> 원하는 조건에 해당하는 데이터를 빠르게 찾을 수 없다
//
//// 연관 컨테이너
//// map: 균형 이진 트리 (AVL)
//// - 노드 기반
//
//class Node
//{
//public:
//    Node* _left;
//    Node* _right;
//
//    // DATA
//    pair<int, Player*> _data;
//    /*int _key;
//    Player* _value;*/
//};
//
//template<typename T1, typename T2>
//struct Pair
//{
//    T1 _t1;
//    T2 _t2;
//};

#pragma endregion

#pragma region set, multimap, multiset

//#include <map>
//#include <set>

#pragma endregion

#pragma region 연습 문제

#include <vector>

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

    //Test_1();

#pragma endregion

#pragma region 객체지향 시작
    
    // Instantiate 객체를 만든다
    /*Knight k1;
    k1._hp = 100;
    k1._attack = 10;
    k1._posX = 0;
    k1._posY = 0;

    Knight k2;
    k2._hp = 80;
    k2._attack = 5;
    k2._posX = 1;
    k2._posY = 1;

    k1.Move(2, 2);
    k1.Attack();
    k1.Die();*/
    
#pragma endregion

#pragma region 생성자와 소멸자

    //// [3] 기타 생성자
    //Knight k1(100, 10 , 0, 0);
    ////k1._hp = 100;
    //k1._attack = 10;
    //k1._posX = 0;
    //k1._posY = 0;

    //// [2] 복사 생성자
    //Knight k2(k1);
    //Knight k3 = k1;

    //Knight k4;  // 기본 생성자
    //k4 = k1;    // 복사

    //k1.Move(2, 2);
    //k1.Attack();
    //k1.Die();

    //// 암시적 형변환 -> 컴파일러가 알아서 바꿔치기
    //int num = 1;
    //float f = (float) num;  // 명시적
    //double d = num;         // 암시적

    //Knight k5;
    //k5 = (Knight)1;         // 명시적

    //HelloKnight((Knight)5);

#pragma endregion

#pragma region 상속성
    
    /*Knight k(100);
    k._hp = 100;
    k._attack = 10;
    k._defence = 5;*/
    //k._stamina = 50;

    /*k.Move();
    k.Player::Move();
    k.Attack();
    k.Die();*/
    
#pragma endregion

#pragma region 은닉성

    //Car car;
    
    /*Berserker b;
    b.SetHp(20);

    TestSuperCar car;
    car.PushRemoteController();*/

#pragma endregion

#pragma region 다형성
    
    /*Player p;
    p.Move();*/
    
    /*Knight k;
    MovePlayer(&k);*/
    
#pragma endregion

#pragma region 초기화 리스트
    
    /*Knight k;

    cout << k._hp << endl;*/
    
#pragma endregion

#pragma region 연산자 오버로딩
    
    /*Position pos;
    pos._x = 0;
    pos._y = 0;

    Position pos2;
    pos2._x = 1;
    pos2._y = 1;

    Position pos3 = pos + pos2;

    Position pos4 = 1 + pos3;
    
    bool isSame = (pos3 == pos4);

    Position pos5;
    pos5 = 5;
    Position pos6 = pos5;

    pos5 = pos6++;
    ++(++pos6);*/
    
#pragma endregion

#pragma region 객체지향 마무리
    
    //Marine::s_attack = 6;
    //Marine m1;
    //m1._hp = 40;
    //m1.TakeDamage(10);
    ////m1.s_attack = 6;

    //Marine m2;
    //m2._hp = 40;
    //m2.TakeDamage(5);
    ////m2.s_attack = 6;

    //// 마린 공격력 업그레이드!
    //Marine::s_attack = 7;
    //Marine::SetAttack();

    //// 스택 영역이 아닌 .data 영역
    //static int id = 10;
    //int a = id;

    //cout << GenerateId() << endl;
    //cout << GenerateId() << endl;
    //cout << GenerateId() << endl;
    //cout << GenerateId() << endl;
    //cout << GenerateId() << endl;
    
#pragma endregion

#pragma region 동적할당

    // 유저 영역 (메모장, LOL, 곰플레이어등 응용 프로그램)
    // -----------------------------------------------------
    // 커널 영역 (운영체제의 핵심 코드)

    // 유저 영역) 운영체제에서 제공하는 API 호출
    // 커널 영역) 메모리 할당해서 리턴
    // 유저 영역) 할당된 메모리 받아서 사용

    // C++에서는 기본적으로 CRT(C 런타임 라이브러리)의 [힙 관리자]를 통해 힙 영역 사용
    // 직접 API를 통해 힙을 생성하고 관리할 수도 있음 (MMORPG 서버 메모리 풀링)
    

    // malloc
    // - 할당할 메모리 크기를 건내준다
    // - 메모리 할당 후 시작 주소를 가리키는 포인터를 반환해준다 (메모리 부족시 NULL)
    //void* pointer = malloc(sizeof(Monster));
    //Monster* m1 = (Monster*) pointer;
    //m1->_hp = 100;
    //m1->_x = 1;
    //m1->_y = 2;


    //// free
    //// - malloc (혹은 기타 calloc, realloc 등)을 통해 할당된 영역을 해제
    //// - 힙 관리자가 할당/미할당 여부를 구분해서 관리
    //// - 만약 free를 하지 않으면 메모리 누수가 일어날 수 있다
    //free(pointer);
    //m1 = nullptr;
    //pointer = nullptr;

    // [일어날 수 있는 버그]
    // - Heap Overflow
    // 유효한 힙 범위를 초과해서 사용하는 문제
    
    // - Double Free
    // 대부분 그냥 크래시만 나고 끝난다
    //free(pointer);

    // - Use-After-Free
    // free된 메모리에 계속 접근 가능한 문제
    /*m1->_hp = 100;
    m1->_x = 1;
    m1->_y = 2;*/

    
    // new / delete
    // - C++에 추가됨
    // - malloc/free은 함수, new/delete는 연산자
    //Monster* m2 = new Monster;
    //m2->_hp = 200;
    //m2->_x = 2;
    //m2->_y = 3;
    //delete m2;

    ////m2->_hp = 100;  // Use-After-Free

    //// new[] / delete[]
    //Monster* m3 = new Monster[5];
    //m3->_hp = 300;
    //m3->_x = 3;
    //m3->_y = 4;

    //m3[1]._hp = 400;
    //m3[1]._x = 4;
    //m3[1]._y = 5;
    //delete[] m3;

    // malloc/free vs new/delete
    // - 사용 편의성 -> new/delete
    // - 타입에 상관없이 특정한 크기의 메모리 영역을 할당 받으려면? -> malloc/free
    // - 둘의 가장 근본적인 중요한 차이는 new/delete는 (생성타입이 클래스일 경우) 생성자/소멸자를 호출해준다.

#pragma endregion

#pragma region 타입변환

    // --------------------- 타입 변환 유형 (비트열 재구성 여부) ---------------------

    // [1] 값 타입 변환
    // 특징) 의미를 유지하기 위해 원본 객체와 다른 비트열 재구성
    //{
    //    int a = 123456789;      // 2의 보수
    //    float b = (float)a;     // 부동소수점(지수 + 유효숫자)
    //    cout << b << endl;
    //}

    // [2] 참조 타입 변환
    // 특징) 비트열을 재구성하지 않고, 데이터를 바라보는 '관점'만 바꾸는 것
    // 거의 쓸일 없지만, 포인터 타입 변환도 '참조 타입 변환'과 동일한 룰을 따른다
    /*{
        int a = 123456789;
        float b = (float&)a;
        cout << b << endl;
    }*/

    // --------------------- 안전도 분류 ---------------------

    // [1] 안전한 변환
    // 특징) 의미가 항상 100% 완전히 일치하는 경우
    // 같은 타입이면서 크기만 더 큰 타입으로 이동
    // 작은 타입 -> 큰 타입으로 이동 (업 캐스팅)
    /*{
        int a = 123456789;
        __int64 b = a;
        cout << b << endl;
    }*/

    // [2] 불안전한 변환
    // 특징) 의미가 항상 100% 일치한다고 보장하지 못하는 경우
    // 타입이 다르거나 같은 타입이지만 큰 타입 -> 작은 타입 이동 (다운 캐스팅)
    /*{
        int a = 123456789;
        float b = a;
        short c = a;
        cout << b << endl;
        cout << c << endl;
    }*/

    // --------------------- 프로그래머 의도에 따라 분류 ---------------------

    // [1] 암시적 변환
    // 특징) 이미 알려진 타입 변환 규칙에 따라서 컴파일러가 '자동'으로 타입 변환
    //{
    //    int a = 123456789;
    //    float b = a;    // 암시적 변환
    //    cout << b << endl;
    //}

    // [2] 명시적 변환
    //{
    //    int a = 123456789;
    //    int* b = (int*)a;   // 명시적 변환
    //    cout << b << endl;
    //}

    // --------------------- 아무런 연관 관계과 없는 클래스 사이의 변환 ---------------------

    // [1] 연관없는 클래스 사이의 '값 타입' 변환
    // 특징) 일반적으로 안 됨 (예외: 타입 변환 생성자, 타입 변환 연산자)
    /*{
        Knight knight;
        Dog dog = (Dog)knight;

        Knight knight2 = dog;
    }*/

    // [2] 연관없는 클래스 사이의 참조 타입 변환
    // 특징) 명시적으로는 통과
    //{
    //    Knight knight;
    //    // 어셈블리 관점: 포인터 = 참조

    //    // [ 주소 ] -> [ Dog ]
    //    Dog& dog = (Dog&)knight;
    //    dog._cuteness = 12;
    //}

    // --------------------- 상속 관계에 있는 클래스 사이의 변환 ---------------------

    // [1] 상속 관계 클래스의 값 타입 변환
    // 특징) 자식 -> 부모 o   /   부모 -> 자식 x
    //{
    //    /*Dog dog;
    //    BullDog bullDog = (BullDog)dog;*/

    //    BullDog bullDog;
    //    Dog dog = bullDog;
    //}

    // [2] 상속 관계 클래스의 참조 타입 변환
    // 특징) 자식 -> 부모 o   /   부모 -> 자식 x (명시적으로는 o)
    //{
    //    /*Dog dog;
    //    BullDog& bullDog = (BullDog&)dog;*/

    //    BullDog bullDog;
    //    Dog dog = bullDog;
    //}

    // 결론)
    // [값 타입 변환]: 진자 비트열도 바꾸고 논리적으로 말이 되게 바꾸는 변환
    // - 논리적으로 말이 된다? (ex. BullDog -> Dog) o
    // - 논리적으로 말이 안 된다 (ex. Dog -> BullDog, Dog -> Knight) x

    // [참조 타입 변환]: 비트열은 그대로 두고 해석하는 '관점'만 바꾸는 변환
    // - 명시적으로 강제 캐스팅이 가능하지만, '암시적'으로 가능한지는 안정성 여부에 달렸다
    // -- 안전 (ex. BullDog -> Dog&) o
    // -- 위험 (ex. Dog -> BullDog&)
    // --- 메모리 침범 위험이 있는 경우는 '암시적'으로 해주지 않음

#pragma endregion

#pragma region 타입변환(포인터)

    // 복습
    //{
    //    //  stack [ item ]
    //    Item item;

    //    // stack [ item2 ] -> heap [ Item ]
    //    Item* item2 = new Item();

    //    TestItem(item);
    //    TestItem(*item2);

    //    TestItemPtr(&item);
    //    TestItemPtr(item2);

    //    // 메모리 누수(Memory Leak) -> 점점 가용 메모리가 줄어들어서 crash
    //    delete item2;
    //}

    //{
    //    cout << "-----------------------------------------" << endl;
    //    
    //    // 스택 메모리에 아이템 100개가 있는 상태
    //    Item item3[100] = {};

    //    cout << "-----------------------------------------" << endl;

    //    // 아이템을 가르키는 포인터 변수가 100개. 실제 아이템은 1개도 없을 수도 있음.
    //    Item* item4[100] = {};

    //    // heap에 아이템 생성
    //    for (int i = 0; i < 100; i++)
    //    {
    //        item4[i] = new Item();
    //    }

    //    cout << "-----------------------------------------" << endl;

    //    // heap에 생성된 아이템 해제
    //    for (int i = 0; i < 100; i++)
    //    {
    //        delete item4[i];
    //    }

    //    cout << "-----------------------------------------" << endl;
    //}


    // 연관성이 없는 클래스 사이의 포인터 변환 테스트
    //{
    //    // stack [ knight ] -> heap [ _hp(4) ]
    //    Knight* knight = new Knight();
    //    
    //    // 암시적으로는 x
    //    // 명시적으로는 o
    //    // stack [ item ] -> heap [ _hp(4) ]
    //    Item* item = (Item*)knight;
    //    item->_itemType = 2;
    //    //item->_itemDbId = 1;

    //    delete knight;
    //}

    //// 부모 -> 자식 변환 테스트
    //{
    //    Item* item = new Item();

    //    Weapon* weapon = (Weapon*)item;

    //    delete item;
    //}

    //// 자식 -> 부모 변환 테스트
    //{
    //    Weapon* weapon = new Weapon();

    //    Item* item = weapon;

    //    TestItemPtr(item);
    //    
    //    delete weapon;
    //}

    //// 명시적으로 타입 변환할 때는 항상 조심해야 한다!
    //Item* inventory[20] = {};

    //srand((unsigned int)time(nullptr));

    //for (int i = 0; i < 20; i++)
    //{
    //    int itemType = rand() % 2;
    //    switch (itemType)
    //    {
    //    case IT_WEAPON:
    //        inventory[i] = new Weapon();
    //        break;
    //    case IT_ARMOR:
    //        inventory[i] = new Armor();
    //        break;
    //    default:
    //        break;
    //    }
    //}

    //for (int i = 0; i < 20; i++)
    //{
    //    Item* item = inventory[i];
    //    if (item == nullptr)
    //    {
    //        continue;
    //    }

    //    int itemType = item->_itemType;
    //    switch (itemType)
    //    {
    //    case IT_WEAPON:
    //    {
    //        Weapon* weapon = (Weapon*)item;
    //        cout << "Weapon Damage: " << weapon->_damage << endl;
    //        break;
    //    }
    //    case IT_ARMOR:
    //    {
    //        Armor* armor = (Armor*)item;
    //        cout << "Armor Defence: " << armor->_defence << endl;
    //        break;
    //    }
    //    default:
    //        break;
    //    }
    //}

    //// ************************ 매우 중요 ************************
    //for (int i = 0; i < 20; i++)
    //{
    //    Item* item = inventory[i];
    //    if (item == nullptr)
    //    {
    //        continue;
    //    }
    //    // Item 클래스의 소멸자에 virtual 키워드를 붙이면 자식 클래스의 타입에 맞게 소멸자를 호출해준다.
    //    delete item;

    //    /*switch (item->_itemType)
    //    {
    //    case IT_WEAPON:
    //    {
    //        Weapon* weapon = (Weapon*)item;
    //        delete weapon;
    //        break;
    //    }
    //    case IT_ARMOR:
    //    {
    //        Armor* armor = (Armor*)item;
    //        delete armor;
    //        break;
    //    }
    //    default:
    //        break;
    //    }*/
    //}

    // [결론]
    // - 포인터 vs 일반 타입: 차이를 이해하자
    // - 포인터 사이의 타입변환(캐스팅)을 할 때는 매우 조심해야 한다!
    // - 부모-자식 관계에서 부모 클래스의 소멸자에는 무조건 "virtual"을 붙이자!
    
#pragma endregion

#pragma region 얕은 복사 vs 깊은 복사
    
    //Knight knight;              // 기본 생성자
    //knight._hp = 200;
    //knight._level = 99;

    //cout << "---------- 복사 생성자 ----------" << endl;
    //Knight knight2 = knight;    // 복사 생성자
    ////Knight knight3(knight);     // 복사 생성자

    //cout << "---------- 복사 대입 연산자 ----------" << endl;
    //Knight knight3;             // 기본 생성자
    //knight3 = knight;           // 복사 대입 연산자

    // [복사 생성자], [복사 대입 연산자]
    // 둘 다 컴파일러가 '암시적'으로 만들어준다
    // 직접적으로 정의해서 사용해야하는 상황이 생길 수 있다
    // - ex) 멤버 포인터 변수를 들고 있는 경우

    // [ 얕은 복사 Shallow Copy ]
    // 멤버 데이터를 비트열 단위로 '똑같이' 복사 (메모리 영역 값을 그대로 복사)
    // 포인터 멤버 변수 -> 포인터 주소값을 똑같이 복사 -> 동일한 객체를 가르키는 상태가 됨

    // [ 깊은 복사 Deep Copy ]
    // 멤버 데이터가 참조(주소) 값이라면, 데이터를 새로 만들어준다 (원본 객체가 참조하는 대상까지 새로 만들어서 복사)
    // 포인터 멤버 변수 -> 새로운 객체를 생성 -> 서로 다른 객체를 가르키는 상태가 됨

    // - 암시적 복사 생성자 step
    // 1) 부모 클래스의 복사 생성자 호출
    // 2) 멤버 클래스의 복사 생성자 호출
    // 3) 멤버가 기본 타입일 경우 메모리 복사 (얕은 복사 Shallow Copy)

    // - 명시적 복사 생성자 steop
    // 1) 부모 클래스의 기본 생성자 호출
    // 2) 멤버 클래스의 기본 생성자 호출

    // - 암시적 복사 대입 연산자 step
    // 1) 부모 클래스의 복사 대입 연산자 호출
    // 2) 멤버 클래스의 복사 대입 연산자 호출
    // 3) 멤버가 기본 타입일 경우 메모리 복사 (얕은 복사 Shallow Copy)

    // - 명시적 복사 대입 연산자 step
    // 1) 알아서 해주는 것 없음
    
    // 객체를 '복사' 한다는 것은 두 객체의 값들을 일치시키려는 것
    // 따라서 기본적으로 얕은 복사 (Shallow Copy) 방식으로 동작
    // 명시적 복사 -> [모든 책임]을 프로그래머한테 위임

#pragma endregion

#pragma region 캐스팅 4종류

    // static_cast: 상식적인 캐스팅만 허용해준다
    // 1) int <-> float
    // 2) Player* -> Knight* (다운 캐스팅)
    
    //int hp = 100;
    //int maxHp = 200;
    //float ratio = static_cast<float>(hp) / maxHp;

    //// 부모 -> 자식, 자식 -> 부모
    //Player* p = new Knight();
    //Knight* k = static_cast<Knight*>(p);

    //Knight* k1 = new Knight();
    //Player* p1 = static_cast<Player*>(k1);

    //// dynamic_cast: 상속 관계에서의 안전한 형변환
    //// RTTI (RunTime Type Information)
    //// 다형성을 활용하는 방식
    //// - 가상 함수를 하나라도 만들면, 객체의 메모리에 가상 함수 테이블 (vftable) 주소가 기입된다
    //// - 만약 잘못된 타입으로 캐스팅을 했으면, nullptr을 반환한다
    //// 가상 함수가 하나라도 존재해야 함
    //// 이를 이용해서 올바른 타입으로 캐스팅 했는지 확인할 때 유용하다
    //Knight* k2 = dynamic_cast<Knight*>(p);

    //// const_cast: const를 떼거나 붙일 때 활용
    //PrintName(const_cast<char*>("Baek"));

    //// reinterpret_cast
    //// 가장 위험하고 강력한 캐스팅
    //// 're-interpret': 다시-간주하다/생각하다
    //// - 포인터와 전혀 관계 없는 다른 타입으로 변환 등에 활용
    //__int64 address = reinterpret_cast<__int64>(k2);

    //Dog* dog = reinterpret_cast<Dog*>(k2);

    //void* ptr = malloc(1000);
    //Dog* dog = reinterpret_cast<Dog*>(ptr);

#pragma endregion

#pragma region 전방선언

    //Player p1;                  // 지역변수 (Stack)
    //Player* p2 = new Player();  // 동적할당 (Heap)

    //p1._target = p2;
    //p1.KillPlayer();

#pragma endregion

#pragma region 함수 포인터

    //int number = 10;

    //typedef int DATA;

    //// 1) 포인터           *
    //// 2) 변수 이름        pointer
    //// 3) 데이터 타입      int
    //DATA* pointer = &number;


    //// 함수 포인터
    //// 1) 포인터           *
    //// 2) 변수 이름        fn
    //// 3) 데이터 타입      함수: int (int, int);
    //int (*fn)(int, int) = Add; // & 생략 가능

    //int result = fn(1, 2);      // 기본 문법
    //cout << result << endl;

    //int result2 = (*fn)(1, 2);  // 함수 포인터는 *(접근 연산자)가 붙어도 함수 주소
    //cout << result2 << endl;

    //Item items[10] = {};
    //items[3]._rarity = 2;
    //items[5]._ownerId = 5;
    //Item* findItem = FindItem(items, 10, &IsOwnerItem, 5);
    //if (findItem != nullptr)
    //{
    //    cout << findItem->_itemId << endl;
    //}
    //cout << "검색 끝" << endl;

    //
    //Knight k1;
    //k1.GetHp();

    //// 멤버 함수 포인터
    //PMEMFUNC mfn = &Knight::GetHp;
    //(k1.*mfn)();

    //Knight* k2 = new Knight();
    //((*k2).*mfn)();
    //(k2->*mfn)();

    //// 멤버 함수 포인터 변수 선언, 정의, 초기화
    //int (Knight:: * mfn2)() = &Knight::GetHp;
    //(k2->*mfn2)();

    //typedef int (Knight::*PMFN)();
    //PMFN pmfn = &Knight::GetHp;
    //(k1.*pmfn)();
    //((*k2).*pmfn)();
    //(k2->*pmfn)();

    //delete k2;

#pragma endregion

#pragma region 함수 객체

    // 함수 객체(Functor): 함수처럼 동작하는 객체
    
    // 함수 포인터의 단점
    // 1) 시그니처가 불일치할 경우 사용 불가
    // 2) 상태를 가질 수 없다

    // ()연산자 오버로딩
    //Functor functor;
    //functor();
    //int ret = functor(5);

    //// MMO에서 함수 객체를 사용하는 예시
    //// 클라 <-> 서버
    //// 서버: 클라가 보내준 네트워크 패킷을 받아서 처리
    //// 클라: (5, 0) 좌표로 이동 시켜줘!
    //MoveTask task;
    //task._playerId = 100;
    //task._posX = 5;
    //task._posY = 0;

    //// 나중에 여유될 때 일감을 실행한다
    //task();

    
#pragma endregion

#pragma region 템플릿 기초: 함수

    /*Print(50);
    Print(50.0f);
    Print(50.0);
    Print("Hello", 100);
    Print(Add<int>(100, 100));

    Knight* k1 = new Knight();
    Print<const Knight&>(*k1);*/

#pragma endregion

#pragma region 템플릿 기초: 클래스

    /*srand(static_cast<unsigned int>(time(nullptr)));

    RandomBox<int, 10> rb1;
    for (int i = 0; i < 10; i++)
    {
        rb1._data[i] = i;
    }
    int value1 = rb1.GetRandomData();
    cout << value1 << endl;

    RandomBox<double, 20> rb2;
    for (int i = 0; i < 20; i++)
    {
        rb2._data[i] = i + 0.5;
    }
    double value2 = rb2.GetRandomData();
    cout << value2 << endl;*/

#pragma endregion

#pragma region 콜백 함수

    /*Item items[10];
    items[3]._ownerId = 100;
    items[8]._rarity = 2;

    FindByOwnerId functor1;
    functor1._ownerId = 100;

    FindByRarity functor2;
    functor2._rarity = 1;

    Item* item1 = FindItem(items, 10, functor1);
    Item* item2 = FindItem(items, 10, functor2);*/

#pragma endregion

#pragma region vector

    // 배열
    /*const int MAX_SIZE = 10;
    int arr[MAX_SIZE] = {};

    for (int i = 0; i < MAX_SIZE; i++)
    {
        arr[i] = i;
    }
    for (int i = 0; i < MAX_SIZE; i++)
    {
        cout << arr[i] << endl;
    }*/

    // 동적 배열
    // 매우 중요한 개념 -> 어떻게 배열을 '유동적으로' 사용한 것인가?

    // 1) (여유분을 두고) 메모리를 할당한다
    // 2) 여유분까지 꽉 찼으면, 메모리를 증설한다

    // Q1) 여유분은 얼마만큼이 적당한가?
    // Q2) 증설을 얼마만큼 해야하는가?
    // Q3) 기존의 데이터를 어떻게 처리해야 하는가?

    //vector<int> v(1000, 0);      // std::vector<int> v;
    //vector<int> v2 = v;      // std::vector<int> v;
    ////v.resize(1000);     // size 지정
    //cout << v.size() << " " << v.capacity() << endl;
    //// size (실제 사용 데이터 개수)

    ////v.reserve(1000);    // capcity 지정
    //// capacity (여유분을 포함한 총 용량 개수)
    //for (int i = 0; i < 1000; i++)
    //{
    //    //v[i] = 100;
    //    v.push_back(100);
    //    cout << v.size() << " " << v.capacity() << endl;
    //}

    ///*v.front();
    //v.back();
    //v.pop_back();*/

    //v.clear();                  // vector 비우기
    //vector<int>().swap(v);      // 새로운 vector로 치환 (capacity 초기화)
    //cout << v.size() << " " << v.capacity() << endl;

    // 반복자 (Iterator): 포인터와 유사한 개념. 컨테이너의 원소(데이터)를 가르키고, 다음/이전 원소로 이동 가능
    /*vector<int> v(10);

    v.reserve(1000);

    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        v[i] = i;
    }*/

    /*vector<int>::iterator it;
    int* ptr;

    it = v.begin();
    ptr = &v[0];

    cout << (*it) << endl;
    cout << (*ptr) << endl;*/

    /*it++;
    ++it;
    ptr++;
    ++ptr;

    it--;
    --it;
    ptr--;
    --ptr;

    it += 2;
    it = it - 2;
    ptr += 2;
    ptr = ptr - 2;*/

    /*vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();*/

    // 다른 컨테이너는 v[i]와 같은 인덱스 접근이 안될 수도 있음
    // iterator는 vector뿐 아니라, 다른 컨테이너에도 공통적으로 있는 개념
    //for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    //{
    //    cout << (*it) << endl;
    //}

    //int* ptrBegin = v.begin()._Ptr;     // &v[0];
    //int* ptrEnd = v.end()._Ptr;         // &v[10];
    //for (int* ptr = ptrBegin; ptr != ptrEnd; ++ptr)
    //{
    //    cout << (*ptr) << endl;
    //}

    //// const int*;
    //vector<int>::const_iterator cit1 = v.cbegin();

    //for (vector<int>::reverse_iterator rit = v.rbegin(); rit != v.rend(); ++rit)
    //{
    //    cout << (*rit) << endl;
    //}
    
    // 중간 삽입/삭제
    /*vector<int>::iterator insertIt = v.insert(v.begin() + 2, 5);
    vector<int>::iterator eraseIt1 = v.erase(v.begin() + 2);
    vector<int>::iterator eraseIt2 = v.erase(v.begin() + 2, v.begin() + 4);*/

    // 전체 스캔하면서 3이라는 데이터만 일괄 삭제
    //for (vector<int>::iterator it = v.begin(); it != v.end();)
    //{
    //    int data = *it;
    //    if (*it == 3)
    //    {
    //        it = v.erase(it);   // 다음 인덱스 리턴
    //    }
    //    else
    //    {
    //        ++it;
    //    }
    //}

#pragma endregion

#pragma region vector 구현

    /*Vector<int> v;
    v.reserve(100);

    for (int i = 0; i < 100; i++)
    {
        v.push_back(i);
        cout << v.size() << " " << v.capacity() << endl;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout << "--------------------------" << endl;

    for (Vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << endl;
    }

    v.clear();*/

#pragma endregion

#pragma region list

    //list<int> li;
    //
    //for (int i = 0; i < 100; i++)
    //{
    //    li.push_back(i);
    //}
    //
    //int size = li.size();
    ////li.capacity();  // 없음

    //int first = li.front();
    //int last = li.back();

    ////li[3] = 10; // 없음

    //list<int>::iterator itBegin = li.begin();
    //list<int>::iterator itEnd = li.end();

    ////list<int>::iterator itTest1 = --itBegin;  // 불가능
    ////list<int>::iterator itTest2 = --itEnd;    // 가능
    ////list<int>::iterator itTest3 = ++itEnd;    // 불가능

    //int* ptrBegin = &li.front();
    //int* ptrEnd = &li.back();

    //for (list<int>::iterator it = li.begin(); it != li.end(); ++it)
    //{
    //    cout << *it << endl;
    //}

    //li.insert(itBegin, 100);

    //li.erase(itBegin);

    //li.pop_front();

    //li.remove(10);

    //// 50번 인덱스에 있는 데이터를 삭제
    //list<int>::iterator it = li.begin();
    //for (int i = 0; i < 50; i++)
    //{
    //    ++it;
    //}

    //// 조회와 삭제의 속도는 분리해서 봐야함
    //li.erase(it);

#pragma endregion

#pragma region list 구현

    /*List<int> li;

    List<int>::iterator eraseIt;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            eraseIt = li.insert(li.end(), i);
        }
        else
        {
            li.push_back(i);
        }
    }

    li.pop_back();

    li.erase(eraseIt);
    
    for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
    {
        cout << (*it) << endl;
    }*/

#pragma endregion

#pragma region deque

    /*deque<int> dq;

    dq.push_back(1);
    dq.push_front(2);
    cout << dq[0] << endl;*/

    /*vector<int> v(3, 1);
    deque<int> dq(3, 1);

    v.push_back(2);
    v.push_back(2);
    dq.push_back(2);
    dq.push_back(2);

    dq.push_front(3);
    dq.push_front(3);*/

#pragma endregion

#pragma region map
    
    //srand(static_cast<unsigned int>(time(nullptr)));

    //// (Key, Value)
    //map<int, int> m;

    //// map 삽입
    //// 같은 키의 값은 하나만 존재할 수 있다 (같은 키 중복 insert 요청 무시)
    //pair<map<int, int>::iterator, bool> ok;
    //ok = m.insert(make_pair(1, 100));
    //ok = m.insert(make_pair(1, 200));

    //// 10만명 입장
    //for (int i = 0; i < 100000; i++)
    //{
    //    m.insert(pair<int, int>(i, i * 100));
    //}

    //// map 삭제
    //// 5만명 랜덤 퇴장
    //for (int i = 0; i < 50000; i++)
    //{
    //    int randomValue = rand() % 50000;
    //    m.erase(randomValue);
    //}

    ///*unsigned int count = 0;
    //count = m.erase(10000);
    //count = m.erase(10000);*/

    //// map 검색
    //map<int, int>::iterator findIt = m.find(10000);
    //if (findIt != m.end())
    //{
    //    cout << "찾음" << endl;
    //}
    //else
    //{
    //    cout << "못 찾음" << endl;
    //}

    //// map 순회: 순회는 vector보다 느림
    //// iterator 활용해야 함
    //for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
    //{
    //    pair<const int, int>& p = (*it);
    //    int key = p.first;
    //    int value = p.second;
    //    cout << key << " " << value << endl;
    //}

    //// map 없으면 추가, 있으면 수정
    //map<int, int>::iterator findIt2 = m.find(10000);
    //if (findIt2 != m.end())
    //{
    //    findIt2->second = 200;
    //}
    //else
    //{
    //    m.insert(make_pair(10000, 200));
    //}

    //// map 없으면 추가, 있으면 수정 v2
    //m[10000] = 500;

    //m.clear();

    //// [] 연산자 사용 시 주의
    //// 대입을 하지 않더라도 (Key, Value) 형태의 데이터가 추가된다 (기본값이 0으로 세팅된다)
    //// 값이 있는지 여부를 확인하기 위한 용도라면 find()를 사용하자
    //for (int i = 0; i < 10; i++)
    //{
    //    cout << m[i] << endl;
    //}

    // 삽입   (insert, [])
    // 삭제   (erase)
    // 검색   (find, [])
    // 반복자 (map<key, value>::iterator) (*it) = pair<key, value>&

#pragma endregion

#pragma region set, multimap, multiset

    //cout << "------------- set -------------" << endl;

    //// (Key = Value)
    //set<int> s;

    //// 삽입
    //// 삭제
    //// 검색
    //// 순회

    //// 삽입
    //s.insert(10);
    //s.insert(20);
    //s.insert(60);
    //s.insert(40);
    //s.insert(70);
    //s.insert(30);
    //s.insert(90);
    //s.insert(50);
    //s.insert(100);
    //s.insert(80);

    //// 삭제
    //s.erase(40);

    //// 검색
    //set<int>::iterator findIt = s.find(50);
    //if (findIt == s.end())
    //{
    //    cout << "못 찾음" << endl;
    //}
    //else
    //{
    //    cout << "찾음" << endl;
    //}

    //// 순회
    //for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
    //{
    //    cout << (*it) << endl;
    //}

    //cout << "------------- multimap -------------" << endl;

    //multimap<int, int> mm;

    //// 삽입
    //mm.insert(make_pair(1, 100));
    //mm.insert(make_pair(1, 200));
    //mm.insert(make_pair(1, 300));
    //mm.insert(make_pair(2, 400));
    //mm.insert(make_pair(2, 500));

    ////mm[1] = 500;  // 사용 불가

    //// 삭제
    ////unsigned int count = mm.erase(1);

    //// 검색
    //multimap<int, int>::iterator findIt2 = mm.find(2);
    //if (findIt2 != mm.end())
    //{
    //    mm.erase(findIt2);
    //}

    //// 범위 검색
    //mm.equal_range(1);

    //mm.lower_bound(1);
    //mm.upper_bound(1);

    //// 순회
    //for (multimap<int, int>::iterator it = mm.begin(); it != mm.end(); ++it)
    //{
    //    cout << it->first << " " << it->second << endl;
    //}

    //// 부분 순회
    //pair<multimap<int, int>::iterator, multimap<int, int>::iterator> pairIt;
    //pairIt = mm.equal_range(1);
    //for (multimap<int, int>::iterator it = pairIt.first; it != pairIt.second; ++it)
    //{
    //    cout << it->first << " " << it->second << endl;
    //}

    //multimap<int, int>::iterator beginIt = mm.lower_bound(1);
    //multimap<int, int>::iterator endIt = mm.upper_bound(1);
    //for (multimap<int, int>::iterator it = beginIt; it != endIt; ++it)
    //{
    //    cout << it->first << " " << it->second << endl;
    //}
    //
    //cout << "------------- multiset -------------" << endl;

    //multiset<int> ms;

    //// 삽입
    //ms.insert(100);
    //ms.insert(100);
    //ms.insert(100);
    //ms.insert(200);
    //ms.insert(200);

    //// 검색
    //multiset<int>::iterator findIt3 = ms.find(100);  // 첫번째 값만 찾아줌

    //// 범위 검색
    //pair<multiset<int>::iterator, multiset<int>::iterator> pairIt2;
    //pairIt2 = ms.equal_range(100);

    //multiset<int>::iterator beginIt2 = ms.lower_bound(100);
    //multiset<int>::iterator endIt2 = ms.upper_bound(100);

    //// 순회
    //for (multiset<int>::iterator it = pairIt2.first; it != pairIt2.second; ++it)
    //{
    //    cout << *it << endl;
    //}

    //for (multiset<int>::iterator it = beginIt2; it != endIt2; ++it)
    //{
    //    cout << *it << endl;
    //}

#pragma endregion

#pragma region 연습 문제

    srand(static_cast<unsigned int>(time(nullptr)));

    vector<int> v;

    for (int i = 0; i < 100; i++)
    {
        int num = rand() % 100;
        v.push_back(num);
    }

    // Q1) number라는 숫자가 벡터에 존재하는지 확인 (bool / iterator)
    {
        int number = 50;

        bool found = false;
        vector<int>::iterator it;

        // TODO
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == number)
            {
                found = true;
                it = v.begin() + i;
                break;
            }
        }

        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        {
            if (*iter == number)
            {
                found = true;
                it = iter;
                break;
            }
        }
    }

    // Q2) 11로 나뉘는 숫자가 벡터에 존재하는지 확인 (bool / iterator)
    {
        bool found = false;
        vector<int>::iterator it;

        // TODO
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 11 == 0)
            {
                found = true;
                it = v.begin() + i;
                break;
            }
        }

        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        {
            if (*iter % 11 == 0)
            {
                found = true;
                it = iter;
                break;
            }
        }
    }

    // Q3) 홀수인 숫자의 개수 (count)
    {
        int count = 0;

        // TODO
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 != 0)
            {
                count++;
            }
        }

        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        {
            if (*iter % 2 != 0)
            {
                count++;
            }
        }
    }

    // Q4) 벡터에 들어가 있는 모든 숫자들에 3 곱하기
    {
        for (int i = 0; i < v.size(); i++)
        {
            v[i] *= 3;
        }

        for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
        {
            *iter *= 3;
        }
    }

#pragma endregion

}