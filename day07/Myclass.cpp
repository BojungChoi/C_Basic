/*

*/
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Myclass {
private:
	int id;
	char name[20];
	int age;

public:

	void setData(int _num, const char* _name, int _age) {
	
		id = _num;
		strcpy_s(name, _name);
		age = _age;
	

	}
	void getData() {

		cout << "¹øÈ£ : " << id << ", ÀÌ¸§ : " << name << ", ³ªÀÌ : " << age << endl;
	}
};
int main()
{
	Myclass obj;
	obj.setData(1, "±èÃ¶¼ö", 20);
	obj.getData();

	return 0;
}