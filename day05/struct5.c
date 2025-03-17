#include <stdio.h>

typedef int umm;


struct human {
	char name[100];
	umm age;
};
typedef struct mystruct {
	umm a;
	umm b;
}Myst;

int main()
{
	// struct human h = {"홍길동", 100};
	// struct human h2 = {"강감찬", 100};
	struct human h = { "홍길동", 100 },
		h2 = { "이순신", 110 },
		h3 = { "김유신", 200 };

	int n1 = 100, n2 = 200, n3 = 300;



	return 0;
}