#include <stdio.h>

// ������ ����
int main()
{
	int a = 2005;  // 4byte��ŭ 2005�� �����. ex) a=1000
	int b = 2021;
	int *pA = &a;  // ����� ������ 4byte��ŭ a�� �ּ��� 1000�� ����.  // �����ʹ� �ּ� ��ü�� ��ġ ������ó�� �����Ѵ�.
	void *vp;
	
	printf("pA : %d \n", pA); // ���� ���� : �� �ּҰ�(1000) �ȿ� �ִ� �����͸� ����������. 	
	printf("&a : %d \n", &a); // ���� ���� 
	printf("pA : %08x \n", pA);  // %08x : 8�ڸ��� 16���� ǥ��, �� ������ 0���� ä��. 
	printf("&a : %08x \n\n", &a); 
	
	(*pA)++;  // a++�� ���� �ǹ̸� ���Ѵ�.   *(pA++)�� ������ ��ü�� ������Ű�� �ǹ̸� ������. 
	
	printf(" a  : %d \n", a);
	printf("*pA : %d \n\n", *pA);
	
	vp = pA++;  // a ���� ������ �ּ� 
	printf(" pA : %08x \n", pA);
	printf("*pA : %d \n", *pA);
	printf(" vp : %08x \n", vp++);
	printf(" vp : %08x \n", vp++);
	
	return 0;
}

