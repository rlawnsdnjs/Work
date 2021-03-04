#include <stdio.h>

int main(void)
{
	int x = 65;
	printf("%c\n", x);
	char y = 65;
	printf("%c\n", y);
	char z = 'B';
	printf("%c\n", z);
	printf("%d", z); // %d로 쓰니까 B의 아스키 코드인 66이 출력된다.
	return 0;
}
