#include<stdio.h>
#include <stdlib.h> // malloc(), free()


int main()
{
	char str[100];
	char* ps;

	printf("���ڿ��� �Է��ϼ��� >> ");
	gets(str);
	printf("�Է��� ���ڿ� : %s\n", str);


	for (int i = 0; i < 5; i++)
	{
		

	}

	ps = (char*)malloc(strlen(str) + 1); // str�� ���̿� �ι��� �ϳ� ���� ũ�⸸ŭ �޸� ������ �Ҵ��ϰ�, �� �ּҸ� ����ȯ�Ͽ� ps�� �����Ѵ�
	if (ps == NULL) {					// �ý��� �޸𸮺���, �������� �����ų�, ���μ��� �Ҵ�� �޸� �ʰ����� �߻��Ҷ�  �����Ͱ� �ƹ��͵� �Ȱ���Ű�� ����
		printf("�޸� �Ҵ� ����");		// ����ڵ� . 
		exit(1); // == return 1;
	}

	

	strcpy(ps, str);

	printf("heap : %s\n", ps);			// ���ڿ� ����

	free(ps);							// ���� �޸� ��ȯ

	return 0;
}