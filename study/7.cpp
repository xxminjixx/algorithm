#include <stdio.h>

int main()
{
	char a[101], b[101];
	int i, p = 0;

	gets_s(a);

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90) //�빮��
			{
				//�빮�� -> �ҹ���
				b[p++] = a[i] + 32;
			}
			else //�ҹ���
			{
				b[p++] = a[i];
			}
		}
	}

	b[p] = '\0';
	printf("%s\n", b);

	return 0;
}