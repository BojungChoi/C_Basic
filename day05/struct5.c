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
	// struct human h = {"ȫ�浿", 100};
	// struct human h2 = {"������", 100};
	struct human h = { "ȫ�浿", 100 },
		h2 = { "�̼���", 110 },
		h3 = { "������", 200 };

	int n1 = 100, n2 = 200, n3 = 300;



	return 0;
}