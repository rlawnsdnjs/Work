// ".............." ���ڿ��� ����ϰ� ����Ű�� �̿��Ͽ� �ش� ��ġ�� ���ڸ� "|" ���ڷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (���� ���� ���) 
// ex) '3'�Է½�  =>  ..|..........
//     '4'�Է½�  =>  ...|......... 

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
