#include <stdio.h>

int main()
{
	//d = 자리수의 개수
	int n, sum = 0, cnt = 1, d = 9, res = 0;

	scanf_s("%d", &n, 10);
	while (sum + d < n)
	{
		res = res + (cnt * d);
		sum = sum + d;
		cnt++;
		d = d * 10;
	}

	res = res + ((n - sum) * cnt);
	printf("%d\n", res);
}