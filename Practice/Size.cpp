#include <stdio.h>
#define MONTHS 12  // 상수값 지정.

int main(void)
{
	double monthsalary = 1000.5;  // 한달 월급 계산
	printf("$ %.2f",monthsalary * MONTHS);
	return 0;
}
