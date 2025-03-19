/*
    메모리 동적 할당
    문자열 부분에 동적 메모리 할당 후 strcpy를 써서 문자열 복사
    클래스 깔끔하게 다지기
*/
#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>     
using namespace std;
// 클래스 정의
class Myclass {
private:
    int id;    
    char* name;    
    int age;           
public:
    void getData() const;
    Myclass(int _num, const char* _name, int _age);    // const 상수화
    ~Myclass() { delete[] name; }   // new로 할당한 메모리는 반드시 delete[]로 해제해야 함
};
Myclass::Myclass(int _num, const char* _name, int _age) {   
    id = _num;                          
    name = new char[strlen(_name) + 1];  // name에 동적 메모리 할당 (문자 수 + 널문자 포함) //중요
    //name = _name;                      // 배열을 선언한 후에 대입연산자를 사용하여 값을 직접 할당할 수 없다.
    strcpy(name, _name);
    age = _age;
}
void Myclass::getData() const {         // const : 단순히 출력의 목적인경우에는 값의 변경의행위를 막기위해 상수화 (깔끔하게하자)
        cout << "번호 : " << id << ", 이름 : " << name << ", 나이 : " << age << endl;
}
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
