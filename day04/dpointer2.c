/*
	이중포인터 사용하기
*/
#include <stdio.h>
void printAry(char**, int);

int main()
{
	char* ary[] = { "mango", "apple", "banana"};
	
	printAry(ary, 3);

	return 0;
}
void printAry(char** pary, int size) // char** pary = char* pary[] 와 같은 의미
{
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", *(pary + 1)); // pary[i] 와 같은 의미  
	}

}