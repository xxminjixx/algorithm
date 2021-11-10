#include <stdio.h>

//1√  ¡¶«—

int main()
{
	int n, i, j, flag, cnt = 0;
	scanf_s("%d", &n);

	for (i = 2; i <= n; i++)
	{
		flag = 1;
		for (j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1) cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}