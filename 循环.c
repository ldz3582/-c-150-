//循环
#include<stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	for( i = 1; i <= 100; ++i)
	      sum = sum + i; //这里注意是i不是1.因为是一直在赋值！ 
	      
	      printf("sum=%d\n",sum);
	      
	      return 0;
 } 
