#include <stdio.h>

int main()
{
	int n, i, cnt = 0, tmp;
	scanf_s("%d", &n, 10);

	for (i = 1; i <= n; i++)
	{
		tmp = i;
		while (tmp > 0)
		{
			tmp = tmp / 10;
			cnt++;
		}
	}

	printf("%d\n", cnt);
}