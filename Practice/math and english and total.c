#include <stdio.h>

int main()
{
	int score[5][2];  // 5명의 학생에 2개의 과목
	int total[2] = { 0, };  // { 0, } : 1차원 배열을 할당할 때, 모든 값에 0을 대입하겠다는 뜻.
	int i;
	
	for(i=0; i<5; i++)
	{
		printf("%d math & english score : ", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);
	}
	
	for(i=0; i<5; i++)
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	printf("The total math score is %d.\n", total[0]);
	printf("The total english score is %d.", total[1]);
	
	return 0;
}
