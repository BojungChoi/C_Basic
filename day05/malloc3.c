
#include<stdio.h>
#include <stdlib.h> // malloc(), free()


int main()
{

	char str[100];
	char* ps[5];

	for (int i = 0 ; i < 5; i++)
	{
	printf("����5 ���Է��ϼ� >> ");
	fgets(str, 100, stdin);

	ps[i] = (char*)malloc(strlen(str) + 1);
	
	strcpy(ps[i], str);
	printf("�Է��� ���ڿ� : %s\n", ps[i]);
	free(ps[i]);							// ���� �޸� ��ȯ
	}

	if (ps == NULL) {					// �ý��� �޸𸮺���, �������� �����ų�, ���μ��� �Ҵ�� �޸� �ʰ����� �߻��Ҷ�  �����Ͱ� �ƹ��͵� �Ȱ���Ű�� ����
		printf("�޸� �Ҵ� ����");		// ����ڵ� . 
		exit(1); // == return 1;
	}




	return 0;
}