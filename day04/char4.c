#include <stdio.h>

void myStrInput(char* , int);

int main()
{
	char str[100];
	int size = sizeof(str);

	myStrInput(str, size);

	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void myStrInput(char* um , int size)
{
	/*int i = 0;
	while (1) {
		um[i] = getchar();
		if (um[i] == '\n' || i >= (size - 1)) break;
		i++;
	}*/
	//um[i] = '\0';

	int i = 0;
	printf("문자 입력 : ");
	for ( ; i < size; i++)
	{
		um[i] = getchar();
		if (um[i] == '\n') break;
	}
	um[i] = '\0';

}