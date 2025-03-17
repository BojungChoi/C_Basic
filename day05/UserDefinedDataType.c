/*
	사용자 정의 자료형 - 프로그래머가 직접 자료형(타입)을 정의해서 만듬
						새로운 자료형을 만들어서 데이터 구조 설계

	struct(구조체) - 여러 데이터를 묶음으로 저장
	union - 여러 데이터중 하나만 저장
	enum - 상수 집합 정의

*/
#include <stdio.h>

struct Human {				// 구조체 선언 struct 구조체명
	char name[20];			// 멤버변수
	int age;				// 멤버변수
	float tall;
};


int main()
{
	struct Human A1 = {"보정",31,176.675 };		// Human 구조체의 변수 A1 선언
	
	//A1.name[15] = "강황"; // 이렇게는 대입불가
	//snprintf(A1.name, sizeof(A1.name), "Bojung");
	strcpy(A1.name, "Bojung"); // 문자열 카피라는 방법을 사용

	A1.age = 25;
	A1.tall = 122.252;


	char str[100] = "Hong Kildong";
	printf("%s\n", str);
	//char str2[100];
	//str2 = "kim chulsul";



	printf("이름: %s\n", A1.name);
	printf("나이: %d\n", A1.age);
	printf("키: %.1f\n", A1.tall);


	return 0;
}