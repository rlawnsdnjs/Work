#include <stdio.h>

// Ű���忡�� 5���� ������ �Է� �޾Ƽ� (���α׷� ���ο��� �����ص� ��) �� �� ���� ���� ���� ã�Ƽ� ����Ͻÿ�.
// ��, �迭�� �Լ��� �̿��ؼ� ������ ��. �Լ��� �迭�� �Ű������� �޾Ƽ� �� �� ���� ���� ���� �ǵ��� �ִ� �Լ���. 
/*
int GetMin(int *p, int n);
void swap(int *a, int *b);

int main()
{
	int arr[5];
	int min;
	
	printf("5���� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	
	min = GetMin(arr,5);
	printf("�Էµ� ���� �� ���� ���� ���� %d�Դϴ�.\n", min); 
	printf("---------------------------------------\n");
	printf("�Էµ� ���� �� ó�� �� ���� %d��(��) %d�Դϴ�.\n",arr[0],arr[1]);
	swap(arr, arr+1);  // swap(&arr[0], &arr[1]);
	printf("�Էµ� ���� �� ó�� �� ���� ��ȯ�ϸ� %d��(��) %d�Դϴ�.\n",arr[0],arr[1]);
}

int GetMin(int *p, int n)
{
	int mn = *p;
	int i,j,k;
	
	for(i=0; i<n; i++)
	{
		if(mn > *(p+i)) mn = *(p+i);   // �����͸� �̿��� ����
	//	if(min > p[i]) min = p[i];
	}
	return mn; 
}
*/
//=========================================================================================================================================
// �ΰ��� ���� a�� b�� ��ȯ(swap)
// a = 10; b = 20;
// a = b; b = a;  <==  ���� �������?
// c ��� ���� �ʿ�. �߰� �ٸ� ����. 
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
// �� ���� �Է¹޾� �ִ������� ����ϴ� ���α׷��� �ۼ��϶�.

int GetCD(int num1,int *arr1);
int GetGCD(int n1, int n2);
//int GetGCD2(int *arr1, int n1, int *arr2, int n2);  // �迭�� �̿��� ��� 
int main(void) 
{
	int num1, num2;
	int n1, n2, MaxNum;
	int arr1[100], arr2[100];
	
	printf("2���� ���ڸ� �Է��ϼ���.\n");
	scanf("%d %d",&num1,&num2);
	
	n1 = GetCD(num1,arr1);  // n1 : 1st ���� ��� ���� 
	n2 = GetCD(num2,arr2);  // n2 : 2nd ���� ��� ���� 
	
	
	MaxNum = GetGCD(n1,n2);  // �迭�� �̿��� ��� MaxNum = GetGCD(arr1,n1,arr2,n2);

	
	printf("%d�� ���:", num1);
	for(int i=0; i<n1; i++)	printf("%d ", arr1[i]);
	printf("\n%d�� ���:", num2); 
	for(int i=0; i<n2; i++)	printf("%d ", arr2[i]);
	 
	printf("\n\n%d��%d�� �ִ������� %d�Դϴ�.\n", num1, num2, MaxNum);
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
int GetGCD2(int *arr1, int n1, int *arr2, int n2)   // �迭�� �̿��� ��� 
{
	int i, j, k;
	
	for(i=n1-1; i>=0; i--)  // for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(*(arr1+i) == *(arr2+j))  return *(arr1+i);
		}
	}
	return -1;  // ���� �߸�����. 
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






















 
