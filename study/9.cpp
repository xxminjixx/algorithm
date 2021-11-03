#include <stdio.h>

int cnt[50001];

int main()
{
	int n, i, j;

	scanf_s("%d", &n, 20);

	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j = j + i)
		{
			cnt[j]++;
		}
	}

	for (i = 1; i <= n; i++)
		printf("%d ", cnt[i]);

	return 0;
}