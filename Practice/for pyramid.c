#include <stdio.h>
#define N 20

int main()
{
	int i; int j;
	for(i = 0; i < N; i++)
	{
		for(j = N - i - 1; j > 0; j--)
		{
			printf(" ");
		}
		for(j = 0; j < i; j++)
		{
			printf("@");
		}
		for(j = 0; j < i - 1; j++)
		{
			printf("@");
		}
		printf("\n");
	}
	return 0;
}
