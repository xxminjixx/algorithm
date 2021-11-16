#include <stdio.h>
#define MAX_ARR 42
int main()
{
	int a[10], input, i, j, num = 0;
	int count[MAX_ARR] = {0, };

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &input);
		count[input % 42]++;
	}

	for (i = 0; i < MAX_ARR; i++)
	{
		if (count[i] > 0)
			num++;
	}

	printf("%d\n", num);
	return 0;
}