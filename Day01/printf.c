#include<stdio.h>

int main()
{
	printf("�������: %d\n", 10);
	printf("�Ǽ����: %lf\n", 3.14);
	printf("�Ǽ����: %.4lf\n", 3.141592); // �Ҽ��� 4�ڸ����� ��� �ݿø�
	printf("�������: %c\n", 'A');

	printf("%d �׸��� %d\n", 10, 20);
	printf("%d �׸��� %f\n", 10, 3.141592); 
	printf("%d �׸��� %d", 10); // ���ڰ� �����ϹǷ� ����


	return 0;
}
