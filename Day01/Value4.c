/* ���� �ڷ��� */
#include <stdio.h>

int main()
{
	char str[10] = "banana";		//����Ÿ�� �迭����
	
	printf("str: %s", str);

	printf("str[0]: %c\n", str[0]); // b
	printf("str[1]: %c\n", str[1]); // a
	printf("str[2]: %c\n", str[2]); // n
	printf("str[3]: %c\n", str[3]); // a
	printf("str[4]: %c\n", str[4]); // n
	printf("str[5]: %c\n", str[5]); // a
	printf("str[6]: %c\n", str[6]); // \0
	// printf("str[6]: %s\n", str[6]); // (null) , ���ڿ������� NULL���ڰ� ������ 

	char str2[6] = "apple"; // 6�� �ִ�	������ NULL���ڸ� �ֱ� ���ؼ� 5�� ������ NULL���ڰ� ���� �ʾƼ� ������ �߻���
	
	
	printf("str2: %s\n", str2); // srt2 = �迭�̸�(�ּ�)
	str2[0] = 'A';
	printf("str2: %s\n", str2);

	// str = str2; // �迭�̸��� ����̱� ������ ������ �Ұ�����
	
	return 0;
}
// ����� �ݺ���� ��������� ����
// �ݺ��� ��ǥ���� �ΰ������ for�� while��
// ���ÿ� ��ǥ���� �ΰ������ if�� switch��

// ���̽㿡�� for���� for i in range(0, 10): �̷������� �����
// C������ for���� for(�ʱⰪ; ����; ����) �̷������� �����
// while���� while(����) �̷������� �����
// if���� if(����) �̷������� �����
// switch���� switch(����) case 1: �̷������� �����

// �迭�� �̸��� �迭�� �����ּҸ� ����Ű�� ����