#include <stdio.h>
#define N 20

int main()
{
	int i; int j;
	for(i = 0; i < N; i++)
	{
		for(j = N - i - 1; j > 0; j--)  // 첫 줄 공백이 19칸 나오고 한 칸씩 줄면서 N-1번 만큼 실행됨.
		{
			printf(" ");
		}
		for(j = 0; j < i; j++)  // j=0, j<i=1(@ 한 개)부터 시작해서 N-1번 만큼 실행됨. i=0일 때는 출력 안 됨.
		{
			printf("@");
		}
		for(j = 0; j < i - 1; j++)  // j=0, j<i=2(@  한 개)부터 시작해서 N-2번 만큼 실행됨. i=0,1일 때는 출력 안 됨.
		for(j = 0; j < i - 1; j++) 
		{
			printf("@");
		}
		printf("\n");
	}
	return 0;
}
