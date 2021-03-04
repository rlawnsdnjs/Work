#include <stdio.h>
#include <conio.h> 

//=======================================================================================================================================
// 입력 받은 key값을 함수의 매개변수로 전달하고 함수 내에서 대문자/소문자/숫자/특수키 종류를 구분하여 출력하는 프로그램을 작성하시오. 
/*
#include "MyHeader.h" // 재사용 가능 

int main()
{
	int i, j, k; // 사용할 변수 입력 - 습관을 들이기 
	
	while(1)
	{
		printf("Put on the key.\n");
		
		scanf("%c", &key);  // 단일 문자를 입력. 
		// 'scanf' function must ended from [enter] key.
		if(key == '?') break;
		if(key != 13 ) // To dissmiss [enter] key that is remaining in keyboard buffer way.
		func1(key);
	}
}
*/
//========================================================================================================================================
//scanf 함수를 이용하여 문자열을 입력받아 한 문자씩 띄어서 출력하시오.
//ex)"abcde' => "a b c d e" 
/*
    int main()
{
	int i;
	char b[1024];
	
	printf("--변경 전 문자열--\n");
	
	scanf("%s",b);

	for(i=0; b[i] ; i++)
	{
		printf("%c ", b[i]);
	}
	
	return 0;
}
*/
//========================================================================================================================================
//대소문자가 혼합된 입력받은 문자열을 모두 대문자로 일괄 변환하기. 
/*
void Convertchr(char A[]);

int main(void)
{
    char A[1024];  // buf라는놈(array) 자체가 주소를 나타내고 있음. 
	
	while(1)
	{
		scanf("%s", A);  // &buf라고 썼었는데, array를 받을때는 안 붙힌다.
	    printf("입력 문자열은 %s입니다.\n", A);
	    Convertchr(A);
	}
	
	return 0;
}

void Convertchr(char A[])
{
	int i,j,k;
	
	for(i=0; A[i]!=0; i++)  // buf[i] : i번째 있는 방이 0이면 끝내라.
	{
		char a = A[i];
		if(a>96 && a<123)  // a가 소문자이면, 
		{
			a -= 32;
		}
		printf("%c", a);
	}
}
*/
//========================================================================================================================================
//scanf 함수를 이용하여 문자열을 입력 후 getch()함수를 이용하여 숫자 키를 누르면 해당 위치의 문자를 출력하시오.
//ex) abcdefghij에서 1을 누르면 b, 4를 누르면 e.
void CharPos(char buf[], int n);
 
int main(void)
{
    char buf[1024];
    
    scanf("%s", buf);
    printf("입력 문자열은 %s 입니다\n\n", buf);
    
    while(1)
    {
    	char ch = getch();
		if(ch<48 || ch>57) break; // 0,9의 ASCII Code가 각각 48,57  // 숫자키 이외의 키는 종료
    	CharPos(buf,ch-48);  // ch-48은 숫자 키 값을 index값으로 변환
	}
	
	return 0; 
}

void CharPos(char buf[], int n)
{
	printf("%s (%d) ---> %c \n\n", buf, n, *(buf+n));
}


