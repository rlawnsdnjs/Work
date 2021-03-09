#include <stdio.h>
#include <io.h>

int main()
{
	FILE *a = fopen("test.txt","rb"); // rb : a가 아니고 r이 되어야한다. 
	
	fprintf(a, "Hello everybody!"); // 메모장에 뜰것임.
	
/*	char buf[256];
	
	for(int i=0; i<4; i++)
	{
	    fscanf(a, "%s", buf);
		printf("%s\n", buf);	
	}
*/	
	fclose(a);
}
