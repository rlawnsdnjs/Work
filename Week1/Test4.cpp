#include <stdio.h>

// 포인터 예시
int main()
{
	int a = 2005;  // 4byte만큼 2005가 생긴다. ex) a=1000
	int b = 2021;
	int *pA = &a;  // 어딘가의 공간에 4byte만큼 a의 주소인 1000이 담긴다.  // 포인터는 주소 자체를 마치 데이터처럼 쓰게한다.
	void *vp;
	
	printf("pA : %d \n", pA); // 간접 접근 : 그 주소값(1000) 안에 있는 데이터를 가져오세요. 	
	printf("&a : %d \n", &a); // 직접 접근 
	printf("pA : %08x \n", pA);  // %08x : 8자리의 16진수 표기, 빈 공간은 0으로 채움. 
	printf("&a : %08x \n\n", &a); 
	
	(*pA)++;  // a++와 같은 의미를 지닌다.   *(pA++)는 포인터 자체를 증가시키는 의미를 가진다. 
	
	printf(" a  : %d \n", a);
	printf("*pA : %d \n\n", *pA);
	
	vp = pA++;  // a 변수 다음의 주소 
	printf(" pA : %08x \n", pA);
	printf("*pA : %d \n", *pA);
	printf(" vp : %08x \n", vp++);
	printf(" vp : %08x \n", vp++);
	
	return 0;
}

