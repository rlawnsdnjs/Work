#include <stdio.h>

int main()
{
	int a,b;
	int i;
	
	printf("������ �������� ����� ���� �� ���� �Է��ϼ���^_^\n");
	scanf("%d %d", &a, &b);  // &�� �ǹ� : �� ������ �ּ�
	printf("%d���� %d������ 5�� �����\n",a,b);
	
	if(a>b)  // a��b���� ũ�� �ڸ��� �ٲߴϴ�. 
	{
		i=a;
		a=b;
		b=i;
	}
	
	int res3=0,res4=0,res5=0,res6=0,res7=0,res8=0,res9=0;
	int Oddsum=0, Evensum=0;  // Ȧ���հ� ¦������ ����غ��ڴ�. 
	for(int i=a; i<=b; i++)
	{
/*		if(i%2==0)  // ¦��
		{
			Evensum += i;
		}
		else        // Ȧ�� 
		{
			Oddsum += i;
		}
		if(i%5==0)  // 5�� ���
		{
			printf("%4d",i);  // %4d : 4ĭ�� 
		}
*/
		if(i%9==0) res9+=i;
		else if(i%8==0) res8+=i;
		else if(i%7==0) res7+=i;
		else if(i%6==0) res6+=i;
		else if(i%5==0) res5+=i;
		else if(i%4==0) res4+=i;
		else if(i%3==0) res3+=i;
		else if(i%2==0) Evensum+=i;
		else Oddsum += i;
	}
	
	printf("\n�Դϴ�.\n");
	printf("\na = %d, b = %d\n",a,b); 
	printf("\n%d���� %d������\n",a,b);
	printf("9�� ����� �� = %d\n",res9);
	printf("8�� ����� �� = %d\n",res8);
	printf("7�� ����� �� = %d\n",res7);
	printf("6�� ����� �� = %d\n",res6);
	printf("5�� ����� �� = %d\n",res5);
	printf("4�� ����� �� = %d\n",res4);
	printf("3�� ����� �� = %d\n",res3);
	printf("2�� ����� �� = %d\n",Evensum);
	printf("�ϸ����� �� = %d�Դϴ�.\n\n",Oddsum);
	
	
	int t = a;  // t : ���� a�� �ʱⰪ ������.
	int result = 0;
	while(a<=b)
	{
		result = result + a;
		a = a + 1;
//		result += a++;
	}
//  �� ���������� a�� b���� �۰ų� ������ �ʴ�.
	printf("\n[while]���� �̿��� ���� ���\n");
	printf("a = %d\nb = %d\n", t, b);	
	printf("result = %d\n\n", result);
	
//==============================���� while���� �Ʒ��� for���� ���� ���� �ǹ̸� ���Ѵ�.==============================================
//==================================================================================================================================
	
	int n = a = t; // a �ʱ�ȭ. 
	result = 0;  // result �� �ʱ�ȭ.
//	a=t;  // a �ʱ�ȭ. ������ó�� �ᵵ �ǰ� ���� �̷��� �ᵵ ��. 
	for(n = a; a <= b; a++)  // (�ʱⰪ; ��������; ��������) ������ ���� �������� �ʾƵ� �Ǵ� ������ ����. 
	{
		result += a;
	}
	
	printf("[for]���� �̿��� ���� ���\n");
	printf("a = %d\nb = %d\n", n, b);
	printf("result = %d\n", result);



/*	
	int a=12,b=67,result=0;
	
	printf("a = %d\nb = %d\n",a,b);
	while(a<=b)
	{
		result += a++;
	}
	printf("result = %d\n",result);
*/	
	
	
/*	int a,b;
	
	if(a>5) // Is a more than 5?
	if(a<10) // Is a less than 10?
	
	printf("%d",a); 
	
	int a;
	a=10;
	
	printf("%d\n",++a);
	printf("%d\n",a++);

	
	int a=10,b=20,result=a+b; // declared variance 'result'.
	
	a=3; // variance a is 3.
	b=4; // variance b is 4.
	result=a+b;
	
	printf("A sum of each number is %d + %d = %d\n",a,b,result);

		
	int a=10,b=20;
	
	a = 10;
	b = 20;
	
	printf("a = %d\nb = %d\n",a,b); 

	
	int a,b;       // a��b�� ������ �����մϴ�. 
	int c=30, d=40;  // ����� ���ÿ� ���� ����. 
	
	a=10;
	b=20;
	
	printf("%d %d \n",a,b);
	printf("%d %d \n",c,d);
*/
	
	return 0;
}
