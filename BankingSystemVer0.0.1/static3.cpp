#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class StaticTest {
private:
    char name[20];
    char phonNum[15];
    char addr[20];
    int memberNum; // �� ��ü�� ȸ����ȣ

    static int cnt; // ��ü ȸ�� ��ȣ ī���� (��� ��ü�� ������)

public:


    // ������ (�̸�, ��ȭ��ȣ, �ּ� ���޹ޱ�)
    StaticTest(const char* _name, const char* _phonNum, const char* _addr) {
        strncpy(name, _name, sizeof(name));
        name[sizeof(name) - 1] = '\0';

        strncpy(phonNum, _phonNum, sizeof(phonNum));
        phonNum[sizeof(phonNum) - 1] = '\0';

        strncpy(addr, _addr, sizeof(addr));
        addr[sizeof(addr) - 1] = '\0';

        memberNum = ++cnt;

        cout << name << " ȸ�� ���� �Ϸ�! ȸ����ȣ: " << memberNum << endl;
    }

    // ��� ���� ��� �Լ�
    void showmember() const {
        cout << "==== ȸ�� ���� ====" << endl;
        cout << "ȸ����ȣ: " << memberNum << endl;
        cout << "�̸�: " << name << endl;
        cout << "��ȭ��ȣ: " << phonNum << endl;
        cout << "�ּ�: " << addr << endl;
        cout << "===================" << endl;
    }
};

// static ���� �ʱ�ȭ (�ݵ�� Ŭ���� �ۿ��� �ʱ�ȭ)
int StaticTest::cnt = 100; // 101���� �����ϰ� �; 100���� �ʱ�ȭ

int main() {
    StaticTest m1("ȫ�浿", "010-2758-8299", "�λ�");
    m1.showmember();

    StaticTest m2("��ö��", "010-3123-4124", "���");
    m2.showmember();

    StaticTest m3("�ڿ˿�", "010-1241-1253", "����");
    m3.showmember();

    return 0;
}
