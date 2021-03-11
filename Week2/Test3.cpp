// ".............." 문자열을 출력하고 숫자키를 이용하여 해당 위치의 문자만 "|" 문자로 출력하는 프로그램을 작성하시오. (동일 선상에 출력) 
// ex) '3'입력시  =>  ..|..........
//     '4'입력시  =>  ...|......... 

#include <stdio.h>
#include <conio.h>

int main()
{
	int i, j, k;
	char *str = "..........";
	char ch = '|';
	
	while(1)
	{
		k = getch() - 48;  // '0'~'9' : 30~39(Hx), 48~57
		if(k<0 || k>9) break;
		for(i=0; i<10; i++)
		{
			if(i == k) printf("%c", ch);
			else       printf("%c", *(str+i));
		}
		printf("\r");
	}
	
	return 0;
}
