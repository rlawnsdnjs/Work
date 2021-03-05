#include <stdio.h>

int main()
{
	int i = 1;
	int sum = 0;
	
	while(i <= 1000)
	{
		sum = sum + i;
		i++;
	}
	printf("The sum of 1 to 1000 is %d.", sum);
	return 0;
}
