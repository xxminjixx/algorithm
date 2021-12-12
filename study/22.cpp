#include <stdio.h>
#include <vector>

int main()
{
	int n, k, i, sum = 0, max;
	scanf_s("%d %d", &n, &k);
	std::vector<int> a(n);

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	for (i = 0; i < k; i++)
	{
		sum += a[i];
	}

	max = sum;

	for (i = k; i < n; i++)
	{
		sum = sum + (a[i] - a[i - k]);

		if (sum > max)
			max = sum;
	}

	printf("%d\n", max);

	return 0;
}
