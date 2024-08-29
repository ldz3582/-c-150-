#include<stdio.h>
int main(void)
{
	int i;
	int sum = 0;
	int cnt = 0;
	double avg; //double float 
	
	for(i=1; i<101; ++i)
	{
		
		if(i%2==1)
	 	  {sum += i;  ///if只能表示一个单句 ,故加括号 
	 	   ++cnt;
		   }
	 	  
	 } 
	 avg = 1.0*sum / cnt;  //处理成小数浮点型 
	printf("sum=%d\n", sum);
	printf("cnt=%d\n", cnt);
	printf("avg=%lf\n", avg);   //%f  %lf
	
	
	return 0;
}
/*sum=2500
cnt=50

--------------------------------
Process exited after 0.01606 seconds with return value 0
请按任意键继续. . .




*/
