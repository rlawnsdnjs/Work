# Work
I'm the best.
2021.03.02 IoT Class daily report.
### C 언어 1강

// 0~9의 숫자를 누르면 그에 해당하는 영단어가 출력되도록 프로그래밍 하시오. 단, 0을 누를때는 종료되도록 하시오. 

#include <stdio.h>

int main()
{
	int a;
	
	for(int i=0; i<=9; i++)  // 보여주기식. 설명하는것임. 
	{
			switch(i)
		{
    		case 1 : printf("One\n\n"); break;
    		case 2 : printf("Two\n\n"); break;
	    	case 3 : printf("Three\n\n"); break;
    		case 4 : printf("Four\n\n"); break;
    		case 5 : printf("Five\n\n"); break;
    		case 6 : printf("Six\n\n"); break;
    		case 7 : printf("Seven\n\n"); break;
    		case 8 : printf("Eight\n\n"); break;
    		case 9 : printf("Nine\n\n"); break;
    		default : printf("수고하셨습니다.\n\n"); break;
    	}
	}
	while(1)
	{	
		printf("숫자키를 누르세요. 마치시려면 0을 누르세요. ^_^\n");
		scanf("%d", &a);
		
		if(a == 0) break;
		switch(a)
		{
    		case 1 : printf("One\n\n"); break;
    		case 2 : printf("Two\n\n"); break;
	    	case 3 : printf("Three\n\n"); break;
    		case 4 : printf("Four\n\n"); break;
    		case 5 : printf("Five\n\n"); break;
    		case 6 : printf("Six\n\n"); break;
    		case 7 : printf("Seven\n\n"); break;
    		case 8 : printf("Eight\n\n"); break;
    		case 9 : printf("Nine\n\n"); break;
    		default : printf("ㅅㄱㅇ"); break;
		}
		 
	}
	return 0;
} 
