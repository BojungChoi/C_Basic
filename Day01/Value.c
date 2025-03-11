/* 변수 선언 */

#include <stdio.h>

int main()
{
	int num;		// 자료형 변수명
	num = 10;
	int num2 = 150; // 변수의 초기화 
	// (l value,  r value) r value는 상수값(리터럴)을 의미 ㅣvalue는 변수를 의미

	num = num2; // 변수의 대입

	char ch = 'A'; // 문자형 변수
	double db = 3.14; // 실수형 변수
	
	printf("num의 값은: %d\n", num);
	printf("num의 값은: %d\n", num2);
	printf("ch의 값은: %c\n", ch);
	printf("db의 값은: %f\n", db);


	return 0;
}
