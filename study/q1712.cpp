#include <stdio.h>

int main()
{
	int a, b, c; //���� ���, ���� ���, ��Ʈ�� ����

	int num = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	if (b >= c)
		printf("-1");
	else
	{
		printf("%d\n", a / (c - b) + 1);
	}

	return 0;
}