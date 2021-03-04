#include <stdio.h>

int main()
{
	int x = 0;
	printf("This is %d now.\n", x);
	x++;  // E sun ggaji +1 han gut.
	printf("This is %d now.\n", x);
	printf("This is %d now.\n", x--);  // E sun ggaji gyesan nono.
	printf("This is %d now.\n", x);
	printf("This is %d now.\n", --x);  // E sun ggaji gyesan yes.
	
	return 0;
}
