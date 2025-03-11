/*
	입력 - scanf()
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

// --------------------------------------------------

	{
		//int inputVal;
		//printf("정수를 입력하세요: ");
		//scanf("%d", &inputVal); // & 주소 연산자 : 키보드로 입력받은 값(주소값이 다름)을 inputVal에 저장 하기위해서 주소연산자를 사용


		//printf("입력한 정수는 %d 입니다.\n", inputVal);

		//int n1, n2;
		//printf("두개의 정수를 입력하세요: ");
		//scanf_s("%d%d", &n1, &n2); // _s 는 보안을 강화한 함수이다. scanf_s는 scanf보다 안전하다. (버퍼오버플로우를 방지하는 것이다.)

		//printf("입력한 두 정수는 %d, %d 입니다.\n", n1, n2);
		//return 0;


	}
// --------------------------------------------------


// --------------------------------------------------
	{
		char str[20];
		int age;
		

		//printf("문자열을 입력하세요:  ");
		//scanf_s("%s", str, sizeof(str));

		//

		//printf("입력한 문자열은 %s 입니다.\n", str);


 


		//printf("char크기 : %d\n", sizeof(char));
		//printf("정수크기 : %d\n", sizeof(int));
		//printf("float크기: %d\n", sizeof(float));
		//printf("double크기: %d\n", sizeof(double));
		

		// scanf_s 에서 _s 는 버퍼 오버플로우 방지를 위한것이며, sizeof(str)을 명시적으로 지정해줘야한다.

		// 만약 scanf 에서 scanf_s("%s %d", str, &age); 이렇게 지정한경우 오류 발생



		printf("당신의 이름을 입력하세요: ");
		scanf_s("%s", str, sizeof(str)); 

		printf("당신의 이름은 %s 입니다.\n", str);


		printf("당신의 나이를 입력하세요: ");
		
		
		scanf_s("%d", &age);

		printf("당신은 %d 살 입니다.", age);


		printf("당신의 이름과 나이를 입력하세요: ");
		
		scanf_s("%s %d", str, sizeof(str), &age);

		printf("당신의 이름은 %s 이고, 나이는 %d살 입니다.\n", str, age);


		return 0;
	}



}