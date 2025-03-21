/*
	전처리기 매크로 함수	
*/
#include <iostream>

#define ADD(a, b) #a "+" #b			// 매크로 함수
#define PI		  3.14
#define MSG(x, y, z)	x ## y ## z 

int main()
{
	printf("ADD(a, b): %s\n", ADD(10, 20));
	printf("ADD(x, y, z): %s\n", MSG("macro+", "operator+", "test"));

	
	return 0;
}

