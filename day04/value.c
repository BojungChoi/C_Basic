/*

*/

#include <stdio.h>
void incFunc(int*);

int cnt = 0;					// global variable ��������

int main()
{

	 //int cnt = 0;				// local variable ��������
	for (int i = 0; i < 5; i++) {
		incFunc(&cnt);
		printf("main: cnt = %d\n", cnt);

	}



	return 0;

}

void incFunc()
{
	cnt++;
	printf("incFunc: cnt = %d\n", cnt);
}