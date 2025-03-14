/*
	puts, fputs - 전용 출력 함수
	stdout - 표준 출력 버퍼(스트림)
*/

#include <stdio.h>

int main()
{

	char str[100] = "Delmonte orange"; // 수정가능 , str은 주소가 고정(배열 이름이 주소 값)
	char* ps = "banana";		  	   // 수정불가능 , 리터럴 문자열, ps는 포인터라 다른 주소도 가리킬 수 있음

	printf("%s\n", str); // 일반적인 출력 함수
	puts(str); // 문자열전용 출력 함수 (가벼움) , 띄어쓰기 포함   자동개행
	fputs(str, stdout); // 표준 출력 버퍼(스트림)				  개행안됨
	puts(ps); // puts 는 개행없이
	fputs(ps, stdout);


	return 0;

}