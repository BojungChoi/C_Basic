/*
    �޸� ���� �Ҵ�
*/

#define _CRT_SECURE_NO_WARNINGS  // strcpy ���� �Լ� ��� �� ��� ���� (MSVC ����)
#include <iostream>              // ����� ����� ���� ��� ����

using namespace std;             // std ���ӽ����̽� ��� (std:: ���� �����ϰ� ��)

// Ŭ���� ����
class Myclass {
private:
    int id;            // �л� ��ȣ
    char* name;        // �л� �̸� (���ڿ��� ���� �Ҵ����� ������ ������)
    int age;           // �л� ����

public:
    // ��� �Լ�: ����� �����͸� ����ϴ� �Լ�
    void getData() {
        cout << "��ȣ : " << id << ", �̸� : " << name << ", ���� : " << age << endl;
    }

    // ������: ��ü ���� �� �����͸� �ʱ�ȭ�ϰ� name�� ���� �޸� �Ҵ�
    Myclass(int _num, const char* _name, int _age) {
        id = _num;                           // id �ʱ�ȭ
        name = new char[strlen(_name) + 1];  // name�� ���� �޸� �Ҵ� (���� �� + �ι��� ����)
        strcpy(name, _name);                 // name�� ���ڿ� ����
        age = _age;                          // age �ʱ�ȭ
    }

    // �Ҹ���: ��ü �Ҹ� �� ȣ��Ǿ� ���� �Ҵ�� �޸� ����
    ~Myclass() {
        delete[] name;  // new�� �Ҵ��� �޸𸮴� �ݵ�� delete[]�� �����ؾ� ��
    }
};

// ���� �Լ�
int main() {
    // ���� �޸𸮿� Myclass ��ü ����
    Myclass obj(1, "��ö��", 20);

    // ��� �Լ� ȣ���Ͽ� �� ���
    obj.getData();

    // ��ü �ּҸ� �����Ϳ� ����
    Myclass* azz = &obj;

    // �����͸� ���� ��� �Լ� ȣ���ϴ� �� ���� ���
    (*azz).getData();  // ������ ���
    azz->getData();    // ������ ��� ���� ������ ��� ��� (�Ϲ������� �� ���� ����)

    return 0;
}
