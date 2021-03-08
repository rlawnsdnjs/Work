#include <stdio.h>
#include <limits.h>
#define NUMBER 5 
int main()
{
	int i, max, min, index;
	int array[NUMBER];
	max, min, index = 0;
	for(i=0; i<NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
	}
	if(i=0)	printf("The greatest value is %d. And It's %dst.\n\n", max, index+1);
	else if(i=1) printf("The greatest value is %d. And It's %dnd.\n\n", max, index+1);
	else printf("The greatest value is %d. And It's %dth.\n\n", max, index+1);
	min = INT_MAX;
	for(i=0; i<NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i])
		{
			min = array[i];
			index = i;
		}
	}
	if(i=0)	printf("The least value is %d. And It's %dst.", min, index+1);
	else if(i=1) printf("The least value is %d. And It's %dnd.", min, index+1);
	else printf("The least value is %d. And It's %dth.", min, index+1);
	
//	printf("The least value is %d. And It's %dth", min, index+1);
	return 0;
}
