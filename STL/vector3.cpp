/*
	vector container 출력
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	//printf("%d \n", v[2]);

	/* 출력1 */
	for (auto i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
		cout << v.at(i) << endl;
	}
	cout << endl << endl;
	/* 출력2 */
	for (vector<int>::size_type i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << endl << endl;
	/* 출력3 */
	vector<int>::iterator iter;			// 반복자 (포인터)
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << endl;
	}
	cout << endl << endl;
	/* 출력4 */
	for (auto i : v) {  // 범위기반for문은 인덱스 사용이 불가 그치만 젤 간단
		cout << i << endl;
	}
	
	return 0;
}