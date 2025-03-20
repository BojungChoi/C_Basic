#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class StaticTest {
private:
    char name[20];
    char phonNum[15];
    char addr[20];
    int memberNum; // 이 객체의 회원번호

    static int cnt; // 전체 회원 번호 카운터 (모든 객체가 공유함)

public:


    // 생성자 (이름, 전화번호, 주소 전달받기)
    StaticTest(const char* _name, const char* _phonNum, const char* _addr) {
        strncpy(name, _name, sizeof(name));
        name[sizeof(name) - 1] = '\0';

        strncpy(phonNum, _phonNum, sizeof(phonNum));
        phonNum[sizeof(phonNum) - 1] = '\0';

        strncpy(addr, _addr, sizeof(addr));
        addr[sizeof(addr) - 1] = '\0';

        memberNum = ++cnt;

        cout << name << " 회원 생성 완료! 회원번호: " << memberNum << endl;
    }

    // 멤버 정보 출력 함수
    void showmember() const {
        cout << "==== 회원 정보 ====" << endl;
        cout << "회원번호: " << memberNum << endl;
        cout << "이름: " << name << endl;
        cout << "전화번호: " << phonNum << endl;
        cout << "주소: " << addr << endl;
        cout << "===================" << endl;
    }
};

// static 변수 초기화 (반드시 클래스 밖에서 초기화)
int StaticTest::cnt = 100; // 101부터 시작하고 싶어서 100으로 초기화

int main() {
    StaticTest m1("홍길동", "010-2758-8299", "부산");
    m1.showmember();

    StaticTest m2("김철수", "010-3123-4124", "양산");
    m2.showmember();

    StaticTest m3("박옹용", "010-1241-1253", "서울");
    m3.showmember();

    return 0;
}
