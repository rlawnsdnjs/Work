#include <stdio.h>

int main()
{
	int score = 85;
	if(score >= 90)
	{
		printf("Your score is A.",score);
	}
	else if(score >= 80)
	{
		printf("Your score is B.",score);
	}
	else if(score >= 70)
	{
		printf("Your score is C.",score);
	}
	else
	{
		printf("Your score is F.",score);
	}
	return 0;
}
