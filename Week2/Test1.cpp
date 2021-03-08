#include <stdio.h>
#include "MyHeader.h"
#include <string.h>
#include <stdlib.h>
/*
int sorting(int *array, int count);
int main()
{
	int i, j, k;
	
	int arr[] = { 1,3,5,7,9,2,4,0,8,6 };
	
	int n = sizeof(arr)/sizeof(int);  //macro function
	printf("원 데이터 : \n");
	for(i=0;i<n;i++) printf("%d ", arr[i]); printf("\n\n");
	
	sorting(arr,n);
	
	printf("정렬 데이터 : \n");
	for(i=0;i<n;i++) printf("%d ", arr[i]); printf("\n\n");
}
*/
//=======================================================================================================================================
//  함수명 : sorting (int *array, int count)
//  return type : int : 0 (normal) : -1 (ERROR)
//  input : int *array 정수 배열, count 배열요소 갯수

//  sorting : 데이터의 정렬
//  1,3,5,7,9,2,4,6,8,0 => 0,1,2,...,7,8,9
//  성적처리 : 총점, 평균을 기준으로 등수를 매김 => 순서대로 출력

//  1. 배열에 데이터를 탑재한다. --> 입력, 파일 로드, DB
//  2. 탑재된 데이터를 인덱스에 따라 이후의 데이터와 비교 --> 가장 작은(큰) 값과 swap
//  3. 배열 전체에 대하여 '2.'과정을 반복
/*
int sorting(int *array, int count)
{
	int i, j, k;
	//int n = sizeof(array)/sizeof(int); 
	for(i=0;i<count-1;i++)  // 배열의 비교 대상
	{
		for(j=i+1;j<count;j++)  // 배열의 나머지
		{
			if(*(array+i) > *(array+j)) // array[i] 두 개의 값을 바꾸어야 한다.
			swap(array+i, array+j);
		}
	}
}
*/
//=======================================================================================================================================
//  함수명 : int Prompt (char *pt, int *ret)
//  return type : int : 입력된 정수값, 동일한 값이 ret로도 전달 
//  input : char *pt : 출력 문자열(안내문자),
//          int *ret : 반환할 정수 변수의 주소
/*
  pt로 전달된 문자열을 출력하고(안내문자) 
  입력된 정수 문자열을 숫자로 변환하여 ret 값으로 반환.
  + 함수의 return 값으로 처리
ex) scanf(" %d", &r);
    A = r;
	===> A = Prompt("입력하세요 :", &r);
*/
/*
int prompt(char *pt, int *ret);

int prompt(char *pt, int *ret)
{
	char buf[254];
	printf("%s", pt);
	
	fgets(buf,254,stdin);
	*ret = atoi(buf);
	return *ret;
}

int main()
{
	int a,b,c;
	prompt("A를 입력하세요", &a);
	c = prompt("B를 입력하세요", &b);
	
	printf("A:%d  B:%d  C:%d",a,b,c);
}
*/
//=======================================================================================================================================
//  함수명 : int chrPos (char *str, char chr);
//  return type : int : chr문자의 위치, 없다면 -1
//  input : char *str : 대상 문자열 
//          char chr  : 찾을 문자 
//  기능 : str로 전달된문자열 중에서 chr 문자를 검색하여 해당 위치를 반환(zero base). 검색되지 않으면 -1을 반환. 

int chrPos (char *str, char chr);
int chrPos (char *str, char chr)

{  // *str = "abcdefghijklmn";  chr = 'd';

//	int i,j,k;
//	i=0;
//	while()
//	{
//		if(*(str+i++) == chr) return i-1;
//	}


	for(int i=0;*(str+i);i++) if(*(str+i) == chr) return i;
	return -1;
}
/*
int main()
{
	int a,b,c;
	char *str = "abcdefghijklmn";
	printf("문자열 : %s\n", str);
	printf("%c의 위치는 %d입니다.\n", 'e', chrPos(str,'e'));  // 4
	printf("%c의 위치는 %d입니다.\n", 'o', chrPos(str,'o'));  // -1
	
}
*/
//=======================================================================================================================================
//  함수명 : int strPos (char *str, char *s1);
//  return type : int : s1문자의 위치, 없다면 -1
//  input : char *str : 대상 문자열 
//          char s1   : 찾을 문자열 
//  기능 : str로 전달된문자열 중에서 s1 문자열을 검색하여 해당 위치를 반환(zero base). 검색되지 않으면 -1을 반환.
//  1. str에서 s1의 첫 문자가 있는 위치를 검색.
//  2. 해당 위치에서 strncmp를 이용하여 비교.
//     같으면 return i;  다르면 다시 1.로 회귀 
//  3. 만일 끝까지 없으면 -1

int strPos(char *str, char *s1);
int strPos(char *str, char *s1)
{  //  *str = "abcdefgacdbhijklmn"; s1 = 'acdb';  ret : 7
	int i,j,k,p;
	
	for(int i=0;*(str+i);i+=p+1)
	{
		p = chrPos(str+i,*s1);
	    if(p == -1) return -1;
	    if(strncmp(str+p+i,s1,strlen(s1)) == 0) return p+i;  // b부터 0이다.
	}
	return -1;
}

int main()
{
	int a,b,c;
	char *str = "abcdefgacdbhijklmn";
	char *s1  = "acdb"; 
	printf("문자열 : %s\n", str);
	printf("%c의 위치는 %d입니다.\n",'e', chrPos(str,'e'));  // 4
	printf("%s의 위치는 %d입니다.\n", s1, strPos(str,s1)); 
}
