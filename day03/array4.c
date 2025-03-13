#include <stdio.h>

int main()
{
	char str[100] = "banana";
	char str2[6] = "apple";		// char 배열에 저장시는 +1만큼의 방이 필요하다. 마지막 null 문자를 확보 해야한다.
	char str3[7] = { 'o', 'r', 'a', 'n', 'g', 'e'};
	
	char str4[4];
	str4[0] = 'a';
	str4[1] = 'b';
	str4[2] = 'c'; str4[3] = '\0';


	printf("str: %s\n", str);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str3[6]: %s\n", str3[6]);
	printf("str4 : %s\n", str4);
	printf("str 나머지 방: %s\n", str[99]);


	//str = str2;
	strcpy(str, str2);			// 문자열 복사
	printf("str: %s\n", str);

	strcpy(str, "dog");
	printf("str: %s\n", str);	// dog

	str[0] = 'D';
	printf("stgr : %s\n", str);	// Dog

	return 0;
}

