#include <stdio.h>
int DaeGoGoSo(int a);
int SoGoGoDae(int a);

int main()
{

	char ch1;
	printf("대소문자 변환기 생성! \n");
	printf("한자리 알파벳을 입력하세요!\n");
	scanf_s("%c", &ch1, 1);
		if ((ch1 >= 'A') && (ch1 <= 'Z'))
		{
			printf("대문자를 입력하셨군요!\n");
			printf("입력한 수 변환 완료! : %c\n ", DaeGoGoSo(ch1));
		}
		else if ((ch1 >= 'a') && (ch1 <= 'z'))
		{
			printf("소문자를 입력하셨군요!\n");
			printf("입력한 수 변환 완료! : %c\n ", SoGoGoDae(ch1));
		}
		else
		{
			printf("입력하신 문자는 알파벳이 아닙니다. 다시 입력하세요.\n");
		}
	return 0;
}

int DaeGoGoSo(int a)
{
	return a + ('a' - 'A');
}
// 소문자 → 대문자 변환 함수
int SoGoGoDae(int a)
{
	return a - 32; 
}



	




//int main()
//{
//	char ch1;
//	char ch2 = 'A';
//	if ((ch2 >= 'A') && (ch2 <= 'Z')); {
//		ch1 = ch2 + ('a' - 'A');	// 32
//	}
//	printf("대문자 : %c\t", ch2);
//	printf("소문자 : %c\n", ch1);
//
//	return 0;
//}