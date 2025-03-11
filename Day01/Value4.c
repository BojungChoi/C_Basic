/* 문자 자료형 */
#include <stdio.h>

int main()
{
	char str[10] = "banana";		//문자타입 배열선언
	
	printf("str: %s", str);

	printf("str[0]: %c\n", str[0]); // b
	printf("str[1]: %c\n", str[1]); // a
	printf("str[2]: %c\n", str[2]); // n
	printf("str[3]: %c\n", str[3]); // a
	printf("str[4]: %c\n", str[4]); // n
	printf("str[5]: %c\n", str[5]); // a
	printf("str[6]: %c\n", str[6]); // \0
	// printf("str[6]: %s\n", str[6]); // (null) , 문자열끝에는 NULL문자가 들어가있음 

	char str2[6] = "apple"; // 6을 넣는	이유는 NULL문자를 넣기 위해서 5를 넣으면 NULL문자가 들어가지 않아서 오류가 발생함
	
	
	printf("str2: %s\n", str2); // srt2 = 배열이름(주소)
	str2[0] = 'A';
	printf("str2: %s\n", str2);

	// str = str2; // 배열이름은 상수이기 때문에 대입이 불가능함
	
	return 0;
}
// 제어문은 반복제어문 선택제어문이 있음
// 반복에 대표적인 두가지제어문 for문 while문
// 선택에 대표적인 두가지제어문 if문 switch문

// 파이썬에서 for문은 for i in range(0, 10): 이런식으로 사용함
// C언어에서는 for문을 for(초기값; 조건; 증감) 이런식으로 사용함
// while문은 while(조건) 이런식으로 사용함
// if문은 if(조건) 이런식으로 사용함
// switch문은 switch(변수) case 1: 이런식으로 사용함

// 배열의 이름은 배열의 시작주소를 가리키고 있음