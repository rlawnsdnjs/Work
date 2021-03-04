void func1(int k);

int key; // 키를 선언하기 위한 변 

void func1(int k)
{
	if(k >= 'A' && k <= 'Z') // Test what is Capital letter. - Use ASCII Code
	// A=65, Z=90
	{
		printf(">%c : It is Capital letter.\n", k);
	}
	
	else if(k >= 'a' && k <= 'z')
	{
		printf(">%c : It is small letter.\n", k);
	}
	
	else if(k >= '0' && k <= '9')
	{
		printf(">%c : It is a number.\n", k);
	}
}
