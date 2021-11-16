#include <stdio.h>

int main()
{
	int a, b, c; //고정 비용, 가변 비용, 노트북 가격

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