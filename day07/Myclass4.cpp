/*
    �޸� ���� �Ҵ�
    ���ڿ� �κп� ���� �޸� �Ҵ� �� strcpy�� �Ἥ ���ڿ� ����
    Ŭ���� ����ϰ� ������
*/
#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>     
using namespace std;
// Ŭ���� ����
class Myclass {
private:
    int id;    
    char* name;    
    int age;           
public:
    void getData() const;
    Myclass(int _num, const char* _name, int _age);    // const ���ȭ
    ~Myclass() { delete[] name; }   // new�� �Ҵ��� �޸𸮴� �ݵ�� delete[]�� �����ؾ� ��
};
Myclass::Myclass(int _num, const char* _name, int _age) {   
    id = _num;                          
    name = new char[strlen(_name) + 1];  // name�� ���� �޸� �Ҵ� (���� �� + �ι��� ����) //�߿�
    //name = _name;                      // �迭�� ������ �Ŀ� ���Կ����ڸ� ����Ͽ� ���� ���� �Ҵ��� �� ����.
    strcpy(name, _name);
    age = _age;
}
void Myclass::getData() const {         // const : �ܼ��� ����� �����ΰ�쿡�� ���� ������������ �������� ���ȭ (����ϰ�����)
        cout << "��ȣ : " << id << ", �̸� : " << name << ", ���� : " << age << endl;
}
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
