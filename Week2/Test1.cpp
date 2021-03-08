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
	printf("�� ������ : \n");
	for(i=0;i<n;i++) printf("%d ", arr[i]); printf("\n\n");
	
	sorting(arr,n);
	
	printf("���� ������ : \n");
	for(i=0;i<n;i++) printf("%d ", arr[i]); printf("\n\n");
}
*/
//=======================================================================================================================================
//  �Լ��� : sorting (int *array, int count)
//  return type : int : 0 (normal) : -1 (ERROR)
//  input : int *array ���� �迭, count �迭��� ����

//  sorting : �������� ����
//  1,3,5,7,9,2,4,6,8,0 => 0,1,2,...,7,8,9
//  ����ó�� : ����, ����� �������� ����� �ű� => ������� ���

//  1. �迭�� �����͸� ž���Ѵ�. --> �Է�, ���� �ε�, DB
//  2. ž��� �����͸� �ε����� ���� ������ �����Ϳ� �� --> ���� ����(ū) ���� swap
//  3. �迭 ��ü�� ���Ͽ� '2.'������ �ݺ�
/*
int sorting(int *array, int count)
{
	int i, j, k;
	//int n = sizeof(array)/sizeof(int); 
	for(i=0;i<count-1;i++)  // �迭�� �� ���
	{
		for(j=i+1;j<count;j++)  // �迭�� ������
		{
			if(*(array+i) > *(array+j)) // array[i] �� ���� ���� �ٲپ�� �Ѵ�.
			swap(array+i, array+j);
		}
	}
}
*/
//=======================================================================================================================================
//  �Լ��� : int Prompt (char *pt, int *ret)
//  return type : int : �Էµ� ������, ������ ���� ret�ε� ���� 
//  input : char *pt : ��� ���ڿ�(�ȳ�����),
//          int *ret : ��ȯ�� ���� ������ �ּ�
/*
  pt�� ���޵� ���ڿ��� ����ϰ�(�ȳ�����) 
  �Էµ� ���� ���ڿ��� ���ڷ� ��ȯ�Ͽ� ret ������ ��ȯ.
  + �Լ��� return ������ ó��
ex) scanf(" %d", &r);
    A = r;
	===> A = Prompt("�Է��ϼ��� :", &r);
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
	prompt("A�� �Է��ϼ���", &a);
	c = prompt("B�� �Է��ϼ���", &b);
	
	printf("A:%d  B:%d  C:%d",a,b,c);
}
*/
//=======================================================================================================================================
//  �Լ��� : int chrPos (char *str, char chr);
//  return type : int : chr������ ��ġ, ���ٸ� -1
//  input : char *str : ��� ���ڿ� 
//          char chr  : ã�� ���� 
//  ��� : str�� ���޵ȹ��ڿ� �߿��� chr ���ڸ� �˻��Ͽ� �ش� ��ġ�� ��ȯ(zero base). �˻����� ������ -1�� ��ȯ. 

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
	printf("���ڿ� : %s\n", str);
	printf("%c�� ��ġ�� %d�Դϴ�.\n", 'e', chrPos(str,'e'));  // 4
	printf("%c�� ��ġ�� %d�Դϴ�.\n", 'o', chrPos(str,'o'));  // -1
	
}
*/
//=======================================================================================================================================
//  �Լ��� : int strPos (char *str, char *s1);
//  return type : int : s1������ ��ġ, ���ٸ� -1
//  input : char *str : ��� ���ڿ� 
//          char s1   : ã�� ���ڿ� 
//  ��� : str�� ���޵ȹ��ڿ� �߿��� s1 ���ڿ��� �˻��Ͽ� �ش� ��ġ�� ��ȯ(zero base). �˻����� ������ -1�� ��ȯ.
//  1. str���� s1�� ù ���ڰ� �ִ� ��ġ�� �˻�.
//  2. �ش� ��ġ���� strncmp�� �̿��Ͽ� ��.
//     ������ return i;  �ٸ��� �ٽ� 1.�� ȸ�� 
//  3. ���� ������ ������ -1

int strPos(char *str, char *s1);
int strPos(char *str, char *s1)
{  //  *str = "abcdefgacdbhijklmn"; s1 = 'acdb';  ret : 7
	int i,j,k,p;
	
	for(int i=0;*(str+i);i+=p+1)
	{
		p = chrPos(str+i,*s1);
	    if(p == -1) return -1;
	    if(strncmp(str+p+i,s1,strlen(s1)) == 0) return p+i;  // b���� 0�̴�.
	}
	return -1;
}

int main()
{
	int a,b,c;
	char *str = "abcdefgacdbhijklmn";
	char *s1  = "acdb"; 
	printf("���ڿ� : %s\n", str);
	printf("%c�� ��ġ�� %d�Դϴ�.\n",'e', chrPos(str,'e'));  // 4
	printf("%s�� ��ġ�� %d�Դϴ�.\n", s1, strPos(str,s1)); 
}
