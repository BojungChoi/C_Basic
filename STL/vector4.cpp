/*
	vector container - ����, ���� ,����
*/
#include <iostream>
#include <vector>
using namespace std;

void main() {
	vector<string> v;
	//list<int> li;

	v.push_back("tiger");
	v.push_back("lion");
	v.push_back("elephane");
	v.push_back("horse");

	cout << "v.front() : " << v.front() << endl;  // begin ���� �ٸ� (�����ּ�) �̰� ���Ҹ�������
	cout << "v.back() : " << v.back() << endl;
	cout << "v.capacity() : " << v.capacity() << endl;


	vector<string>::iterator iter;
	for (iter = v.begin(); iter != v.end() ; iter++) {
		cout << *iter << "/" ;
	}

	cout << endl;
	
	v.pop_back();
	v.pop_back();
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "/";
	}
	
	cout << endl;

	for (iter = v.begin(); iter != v.end(); iter++) {
		if (*iter == "lion") {
			v.erase(iter); break;
		}
	}
	cout << endl;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << "/";
	}

}

/*
	iterator Ÿ�� : iterator , begin() , end() , erase()
*/