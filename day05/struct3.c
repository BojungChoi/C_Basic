#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct mystruct {
	char name[20];
	int age;
	double height;
	char* str;
};

int main()
{
	struct mystruct s;
	strcpy(s.name, "Bojung"); 
	s.age = 21;
	s.height = 185.5;
	//s.str = (char*)malloc(sizeof(100));
	s.str = (char*)malloc(sizeof(char) * 100);
	printf("인사말: ");
	gets(s.str);

	printf("이름: %s\n", s.name);
	printf("나이: %d\n", s.age);
	printf("키: %.2f\n", s.height);
	printf("인사말: %s\n", s.str);

	free(s.str);

	return 0;
}