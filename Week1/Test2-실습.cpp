// 0~9�� ���ڸ� ������ �׿� �ش��ϴ� ���ܾ ��µǵ��� ���α׷��� �Ͻÿ�. ��, 0�� �������� ����ǵ��� �Ͻÿ�. 

#include <stdio.h>

int main()
{
	int a;
	
	for(int i=0; i<=9; i++)  // �����ֱ��. �����ϴ°���. 
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
    		default : printf("�����ϼ̽��ϴ�.\n\n"); break;
    	}
	}
	while(1)
	{	
		printf("����Ű�� ��������. ��ġ�÷��� 0�� ��������. ^_^\n");
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
    		default : printf("������"); break;
		}
		 
	}
	return 0;
} 
