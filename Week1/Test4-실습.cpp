#include <stdio.h>

// 키보드에서 5개의 정수를 입력 받아서 (프로그램 내부에서 선언해도 됨) 그 중 가장 작은 수를 찾아서 출력하시오.
// 단, 배열과 함수를 이용해서 구성할 것. 함수는 배열을 매개변수로 받아서 그 중 가장 작은 수를 되돌려 주는 함수임. 
/*
int GetMin(int *p, int n);
void swap(int *a, int *b);

int main()
{
	int arr[5];
	int min;
	
	printf("5개의 숫자를 입력하세요.\n");
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	
	min = GetMin(arr,5);
	printf("입력된 숫자 중 가장 작은 값은 %d입니다.\n", min); 
	printf("---------------------------------------\n");
	printf("입력된 숫자 중 처음 두 수는 %d와(과) %d입니다.\n",arr[0],arr[1]);
	swap(arr, arr+1);  // swap(&arr[0], &arr[1]);
	printf("입력된 숫자 중 처음 두 수는 교환하면 %d와(과) %d입니다.\n",arr[0],arr[1]);
}

int GetMin(int *p, int n)
{
	int mn = *p;
	int i,j,k;
	
	for(i=0; i<n; i++)
	{
		if(mn > *(p+i)) mn = *(p+i);   // 포인터를 이용한 연산
	//	if(min > p[i]) min = p[i];
	}
	return mn; 
}
*/
//=========================================================================================================================================
// 두개의 변수 a와 b의 교환(swap)
// a = 10; b = 20;
// a = b; b = a;  <==  과연 맞을까요?
// c 라는 변수 필요. 중간 다리 역할. 
// c = a; a = b; b = c;

/*
void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
*/
//=========================================================================================================================================
// 두 수를 입력받아 최대공약수를 출력하는 프로그램을 작성하라.

int GetCD(int num1,int *arr1);
int GetGCD(int n1, int n2);
//int GetGCD2(int *arr1, int n1, int *arr2, int n2);  // 배열을 이용한 방법 
int main(void) 
{
	int num1, num2;
	int n1, n2, MaxNum;
	int arr1[100], arr2[100];
	
	printf("2개의 숫자를 입력하세요.\n");
	scanf("%d %d",&num1,&num2);
	
	n1 = GetCD(num1,arr1);  // n1 : 1st 수의 약수 갯수 
	n2 = GetCD(num2,arr2);  // n2 : 2nd 수의 약수 갯수 
	
	
	MaxNum = GetGCD(n1,n2);  // 배열을 이용한 방법 MaxNum = GetGCD(arr1,n1,arr2,n2);

	
	printf("%d의 약수:", num1);
	for(int i=0; i<n1; i++)	printf("%d ", arr1[i]);
	printf("\n%d의 약수:", num2); 
	for(int i=0; i<n2; i++)	printf("%d ", arr2[i]);
	 
	printf("\n\n%d와%d의 최대공약수는 %d입니다.\n", num1, num2, MaxNum);
}

int GetCD(int num, int *arr)
{
	int i, j, k;
	
	for(i=1, j=0; i<=num; i++)
	{
		if(num%i == 0) // *arr++ = i;
		{
			*(arr+j) = i;
			j++;
		}
	}
	return j;
}
/*
int GetGCD2(int *arr1, int n1, int *arr2, int n2)   // 배열을 이용한 방법 
{
	int i, j, k;
	
	for(i=n1-1; i>=0; i--)  // for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(*(arr1+i) == *(arr2+j))  return *(arr1+i);
		}
	}
	return -1;  // 무언가 잘못됐음. 
}
*/

int GetGCD(int n1, int n2)
{
	for(int i=n1; i>0; i--)  // for(i=0;i<n1;i++)
	{
		if((n1%i == 0) && (n2%i == 0))  return i;
	}
}

//=======================================================================================================================================






















 
