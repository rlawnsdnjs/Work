#include <stdio.h>

int main()
{
	int a,b;
	int i;
	
	printf("범위의 누적값을 계산을 위한 두 수를 입력하세요^_^\n");
	scanf("%d %d", &a, &b);  // &의 의미 : 그 변수의 주소
	printf("%d에서 %d사이의 5의 배수는\n",a,b);
	
	if(a>b)  // a가b보다 크면 자리를 바꿉니다. 
	{
		i=a;
		a=b;
		b=i;
	}
	
	int res3=0,res4=0,res5=0,res6=0,res7=0,res8=0,res9=0;
	int Oddsum=0, Evensum=0;  // 홀수합과 짝수합을 계산해보겠다. 
	for(int i=a; i<=b; i++)
	{
/*		if(i%2==0)  // 짝수
		{
			Evensum += i;
		}
		else        // 홀수 
		{
			Oddsum += i;
		}
		if(i%5==0)  // 5의 배수
		{
			printf("%4d",i);  // %4d : 4칸씩 
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
	
	printf("\n입니다.\n");
	printf("\na = %d, b = %d\n",a,b); 
	printf("\n%d부터 %d까지의\n",a,b);
	printf("9의 배수의 합 = %d\n",res9);
	printf("8의 배수의 합 = %d\n",res8);
	printf("7의 배수의 합 = %d\n",res7);
	printf("6의 배수의 합 = %d\n",res6);
	printf("5의 배수의 합 = %d\n",res5);
	printf("4의 배수의 합 = %d\n",res4);
	printf("3의 배수의 합 = %d\n",res3);
	printf("2의 배수의 합 = %d\n",Evensum);
	printf("니머지의 합 = %d입니다.\n\n",Oddsum);
	
	
	int t = a;  // t : 변수 a의 초기값 보관용.
	int result = 0;
	while(a<=b)
	{
		result = result + a;
		a = a + 1;
//		result += a++;
	}
//  이 시점에서의 a는 b보다 작거나 같지가 않다.
	printf("\n[while]문을 이용한 누적 계산\n");
	printf("a = %d\nb = %d\n", t, b);	
	printf("result = %d\n\n", result);
	
//==============================위의 while문과 아래의 for문은 서로 같은 의미를 지닌다.==============================================
//==================================================================================================================================
	
	int n = a = t; // a 초기화. 
	result = 0;  // result 값 초기화.
//	a=t;  // a 초기화. 윗윗줄처럼 써도 되고 새로 이렇게 써도 됨. 
	for(n = a; a <= b; a++)  // (초기값; 수행조건; 증감연산) 조건을 따로 선언하지 않아도 되는 장점이 있음. 
	{
		result += a;
	}
	
	printf("[for]문을 이용한 누적 계산\n");
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

	
	int a,b;       // a와b를 변수로 선언합니다. 
	int c=30, d=40;  // 선언과 동시에 값을 지정. 
	
	a=10;
	b=20;
	
	printf("%d %d \n",a,b);
	printf("%d %d \n",c,d);
*/
	
	return 0;
}
