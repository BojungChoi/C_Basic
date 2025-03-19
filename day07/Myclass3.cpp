/*
    메모리 동적 할당
*/

#define _CRT_SECURE_NO_WARNINGS  // strcpy 같은 함수 사용 시 경고 끄기 (MSVC 전용)
#include <iostream>              // 입출력 기능을 위한 헤더 포함

using namespace std;             // std 네임스페이스 사용 (std:: 생략 가능하게 함)

// 클래스 정의
class Myclass {
private:
    int id;            // 학생 번호
    char* name;        // 학생 이름 (문자열을 동적 할당으로 저장할 포인터)
    int age;           // 학생 나이

public:
    // 멤버 함수: 저장된 데이터를 출력하는 함수
    void getData() {
        cout << "번호 : " << id << ", 이름 : " << name << ", 나이 : " << age << endl;
    }

    // 생성자: 객체 생성 시 데이터를 초기화하고 name은 동적 메모리 할당
    Myclass(int _num, const char* _name, int _age) {
        id = _num;                           // id 초기화
        name = new char[strlen(_name) + 1];  // name에 동적 메모리 할당 (문자 수 + 널문자 포함)
        strcpy(name, _name);                 // name에 문자열 복사
        age = _age;                          // age 초기화
    }

    // 소멸자: 객체 소멸 시 호출되어 동적 할당된 메모리 해제
    ~Myclass() {
        delete[] name;  // new로 할당한 메모리는 반드시 delete[]로 해제해야 함
    }
};

// 메인 함수
int main() {
    // 스택 메모리에 Myclass 객체 생성
    Myclass obj(1, "김철수", 20);

    // 멤버 함수 호출하여 값 출력
    obj.getData();

    // 객체 주소를 포인터에 저장
    Myclass* azz = &obj;

    // 포인터를 통해 멤버 함수 호출하는 두 가지 방법
    (*azz).getData();  // 역참조 방식
    azz->getData();    // 포인터 멤버 접근 연산자 사용 방식 (일반적으로 더 많이 사용됨)

    return 0;
}
