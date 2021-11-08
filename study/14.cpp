#include <stdio.h>

int reverse(int x)
{
	int res = 0;
	int tmp = 0;

	while (x > 0)
	{
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}

	return res;
}

bool isPrime(int x)
{
	int i;

	if (x == 1) return false;

	bool flag = true;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

int main()
{
	int n, num, i, tmp;
	scanf_s("%d", &n, 10);

	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &num, 20);
		tmp = reverse(num);
		
		if (isPrime(tmp))
		{
			printf("%d ", tmp);
		}
	}


	return 0;
}