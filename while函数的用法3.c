#include<stdio.h>
int main(void) 
{
	int i = 1;
	int sum = 0;
	
	while(i<101)
	{
		sum = sum + i;
		++i;
	}
	printf("%d\n",sum);
	return 0;
}
