#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, k, caseNum;
	char S[20];
	int count;

	scanf_s("%d", &caseNum);

	for (i = 0; i < caseNum; i++)
	{
		scanf_s("%d %s", &count, S, 20);

		for (j = 0; j < strlen(S); j++)
		{
			for (k = 0; k < count; k++)
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}

	
}