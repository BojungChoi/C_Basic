#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct vision {
	double left;
	double right;

}Vision;

Vision exchange(Vision);		// 함수 원형

int main() {
	Vision rot;
	printf("시력 입력 (좌, 우) >> \n");
	scanf_s("%lf %lf", &(rot.left), &(rot.right));		// '.'이 '&'보다 연산자우선순위가 높지만, 가독성을 위해서 명시적으로 표시해줌

	rot = exchange(rot);

	printf("바뀐 시력: 좌 : %.1lf 우 : %.1lf\n", rot.left, rot.right);

	return 0;
}

// 시력 교환 함수 정의
Vision exchange(Vision rver) {
	float temp;

	temp = rver.left;
	rver.left = rver.right;
	rver.right = temp;

	return rver;
}