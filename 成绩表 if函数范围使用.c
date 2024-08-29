//成绩

#include<stdio.h>
int main(void)
{
	int score;
	printf("请输入你的成绩！");
	
	scanf("%d",&score); //这里注意空格，多打空格\n才可以弥补
	
	if( score > 100)
	{
		printf("你这是在做梦！");
	 } 
	 else if(90<=score && score<=100)
	 {
	 	printf("非常好");
	 }
	 else if(60<=score && score<90 )
	 {
	 	printf("还凑合！");
	 }
	else 
	{printf("不合格");
	}
	
	return 0;
 } 
