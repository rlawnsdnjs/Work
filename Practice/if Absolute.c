#include <stdio.h> 

int main()
{
	int x = -150;
	if(x < 0)
	{
		x = -x;
	}
	printf("The absoulute value of x is %d.",x);
	return 0;
}
