#include <stdio.h>

int main()
{
	int x = 0;
	printf("This is %d now.\n", x);
	x++;  // 이 줄까지 연산만 한것. (다음줄부터 증가된 채로 출력됨.)
	printf("This is %d now.\n", x);
	printf("This is %d now.\n", x--);  // 이 줄까지 계산 ㄴㄴ
	printf("This is %d now.\n", x);
	printf("This is %d now.\n", --x);  // 이 줄까지 계산 ㅇㅇ
	
	return 0;
}
