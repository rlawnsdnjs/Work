#include <stdio.h>
#include <io.h>
#include <malloc.h>

void FileTest()
{
	char *buf = (char*)malloc(255);  // char buf[255];
	FILE *a = fopen("test.txt","rb"); // rb : fscanf 를 위해서는 a가 아니고 r이 되어야한다.
	
	fscanf(a, "%s", buf);
	printf("파일에서 읽은 문자열 : \"%s\"", buf);  //  "Good Moring"
	
	fclose(a);
}

int main()
{
	FILE *a = fopen("test.txt","ab"); 
	
	fprintf(a, "Hello!");  // %d %f %s %c : printf 사용법과 동일
	
	FileTest();
	
	fclose(a);
}

//===================================================================================================
// 데이터 파일을 open 하여 읽어오기.  ---> 이름  과목명1 과목명2 과목명3  [총점]  [평균]  [석차]
//                                      홍길동  점수1   점수2   점수3   총점    실수    등수

#define PNUM 100

int main()
{
	int i,j,k,n;
	int *eng,*kor,*math;
	char **name;
	
	eng = (int*)malloc(PNUM * sizeof(int));
	kor = (int*)malloc(PNUM * sizeof(int));
	math = (int*)malloc(PNUM * sizeof(int));
	
//	name = (char**)malloc(PNUM * 10);
	
	FILE *a = fopen("test.txt","rb");
	
	for(i=0;i<PNUM;i++)
	{
		k = fscanf(a, "%d %d %d", kor+i, math+i, eng+i);
		if(k != 3)  break;
	}  
	n = i;  // for문이 종료되었을 때 i값은 무엇을 가리키나요? : 데이터의 갯수 (줄 수)
	for(i=0;i<n;i++)
	{
		printf("%d   %d   %d\n", *(kor+i), *(math+i), *(eng+i));
	}
	
	fclose(a);
}


