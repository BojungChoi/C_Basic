#include<stdio.h>

int main()
{
	printf("정수출력: %d\n", 10);
	printf("실수출력: %lf\n", 3.14);
	printf("실수출력: %.4lf\n", 3.141592); // 소수점 4자리까지 출력 반올림
	printf("문자출력: %c\n", 'A');

	printf("%d 그리고 %d\n", 10, 20);
	printf("%d 그리고 %f\n", 10, 3.141592); 
	printf("%d 그리고 %d", 10); // 인자가 부족하므로 오류


	return 0;
}
