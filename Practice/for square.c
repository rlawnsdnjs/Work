#include <stdio.h>
#define N 10

int main()
{
	int i; int j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("@");
		}
		printf("\n");
	}
	return 0;
}
