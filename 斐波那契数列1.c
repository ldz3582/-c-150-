#include<stdio.h>
int main(void)
{
	int i;
	int f1, f2, f3;
	int n;
	f1 = 1;
	f2 = 2;
	printf("ÇëÊäÈëÊı×Ö");
	scanf("%d",&n);
	
	if(n == 1)
	{
		f3==1;
	}
	 else if(n ==2)
	{
		f3==2;
	}
	else
	{    for( i = 3; i <= n; ++i)
	       f3 = f1 + f2;
		   f1 = f2;
		   f2 = f3; 
	}
	
	   printf("%d\n",f3);
	return 0;
}
