/*

*/
#include <iostream>
#include <vector>		// vector 헤더파일 포함
using namespace std;
int main() {	
	vector<int> v;				// 비어있는 벡터 (size 0)
	vector<int> v1{ 10 };		// 하나의 원소 10을 저장(size 1)
	vector<int> v2(10);			// 0으로 초기화된 10개의 원소(size 10)
	vector<int> v3 = { 1, 2, 3, 4 ,5, 6 };	// 직접 값을 지정 (size 6)

	cout << "v size : " << v.size() << endl;
	cout << "v1 size : " << v1.size() << endl;
	cout << "v2 size : " << v2.size() << endl;
	cout << "v3 size : " << v3.size() << endl;

	for (int i = 0; i < 6; i++) {
		printf("v2[%d] : %d \n", i, v2[i]);
	}
	cout << endl;
	for (auto i : v3) {			// 범위기반 for문 
		//cout << v3[i] <<endl;	 // 범위기반for문은 인덱스 사용이 불가
		 cout << i << endl;
	}

	/* begin()과 end()는 interator(반복자) 타입을 반환한다. (포인터) */
	cout << "v3의 첫번째 요소값 : " << *v3.begin() << endl;
	cout << "v3의 첫번째 요소값 : " << *(v3.end() - 1) << endl;

	return 0;
}
/*
	vector.size() : 원소 크기(갯수)를 반환
	vector.begin() : 첫 요소를 가리키는 iterator
	vector.end() : 마지막 다음 요소를 가리킨
*/