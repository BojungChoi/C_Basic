#include<stdio.h>

int main()
{
	char ch = 0; // -128 ~ 127 
	unsigned char ch2 = 0; // 0 ~ 255
	//int num = 0; // -2,147,483,648 ~ 2,147,483,647
	//unsigned int num2 = 0; // 0 ~ 4,294,967,295

	unsigned int num;
	num = 123456;
	printf("num : %d\n", num);
	num = -1;
	printf("num : %d\n", num); 
	printf("num : %u\n", num);



	return 0;
}