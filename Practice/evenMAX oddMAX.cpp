#include <stdio.h>
#define NUMBER 5

int main()
{
	int array[NUMBER];
	int i, oddMAX, evenMAX;
	oddMAX, evenMAX = 0;
	for(i=0; i<NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(array[i] % 2 == 0 && evenMAX < array[i])
		{
			evenMAX = array[i];
		}
		else if(array[i] % 2 == 1 && oddMAX < array[i])
		{
			oddMAX = array[i];
		}
	}
	printf("The greatest even is %d. And the greatest odd is %d.", evenMAX, oddMAX);
	return 0;
}
