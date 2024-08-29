#include<stdio.h>
int main(void)
{   int n,flag,i;
scanf("%d",&n);
if(n==1)
  printf("This is not a prime.\n");
else
{
	flag = 0;
	for(i=n-1; i>1; --i)
	{
		if(n%i==0)
		{
			flag = 1;
			break;
		}
	}
	if(flag==0)
	printf("This is a prime.\n");
	else
	printf("This is not a prime.\n");
}
	
	return 0;
}
