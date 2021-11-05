#include <stdio.h>

//�� �ڸ����� ���� ���ϰ�
//���� �ִ��� �ڿ����� ����ϴ� ���α׷�
//int digit_sum(int x)

int digit_sum(int x)
{
	//�� �ڸ����� ��
	int tmp, sum = 0;

	while (x > 0)
	{
		tmp = x % 10;
		sum += tmp;
		x = x / 10;
	}
	return sum;
}

int main()
{
	int n, num, i, sum, max = -2147000000, res;
	scanf_s("%d", &n, 10);

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &num, 10);
		sum = digit_sum(num);

		if (sum > max)
		{
			max = sum;
			res = num;
		}
		else if(sum == max)
		{
			if (num > res) res = num;
		}
	}

	printf("%d\n", res);

	return 0;
}