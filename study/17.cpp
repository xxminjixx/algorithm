#include <stdio.h>

int main()
{
	int i, j, n, num, ans, sum = 0;

	scanf_s("%d\n", &n);

	for (i = 0; i < n; i++)
	{
		sum = 0;

		scanf_s("%d %d", &num, &ans);

		for (j = 0; j <= num; j++)
		{
			sum += j;
		}

		if (ans == sum)
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}