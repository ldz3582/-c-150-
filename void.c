#include<stdio.h>
int f(void)
{
	return 10;
}


int main(void)
{
	int j = 9;
	j = f();
	printf("%d\n", j);
	
	
	//printf("%d\n",f());
	
	return 0;
}
