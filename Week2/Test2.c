#include <stdio.h>
#include <io.h>

int main()
{
	FILE *a = fopen("test.txt","rb"); // rb : a�� �ƴϰ� r�� �Ǿ���Ѵ�. 
	
	fprintf(a, "Hello everybody!"); // �޸��忡 �����.
	
/*	char buf[256];
	
	for(int i=0; i<4; i++)
	{
	    fscanf(a, "%s", buf);
		printf("%s\n", buf);	
	}
*/	
	fclose(a);
}
