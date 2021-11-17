#include <stdio.h>

int main()
{
	int i, n, a[101], b[101];

	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &b[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] == b[i])
		{
			printf("D\n");
		}
		else if (a[i] == 1 && b[i] == 3)
		{
			printf("A\n");
		}
		else if (a[i] == 2 && b[i] == 1)
		{
			printf("A\n");
		}
		else if (a[i] == 3 && b[i] == 2)
		{
			printf("A\n");
		}
		else printf("B\n");
	}

	return 0;
}