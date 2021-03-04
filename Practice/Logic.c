#include <stdio.h>

int main()
{
	int x = 50, y = 30;
	printf("Is x more than y and y less than 40? %d\n", (x > y) && (y < 40));
	printf("Is x less than y or y 30? %d\n", (x < y) || (y == 30));
	printf("Is x not 50? %d\n", x != 50);
	return 0;
}
