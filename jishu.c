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
	 	  {sum += i;  ///ifֻ�ܱ�ʾһ������ ,�ʼ����� 
	 	   ++cnt;
		   }
	 	  
	 } 
	 avg = 1.0*sum / cnt;  //�����С�������� 
	printf("sum=%d\n", sum);
	printf("cnt=%d\n", cnt);
	printf("avg=%lf\n", avg);   //%f  %lf
	
	
	return 0;
}
/*sum=2500
cnt=50

--------------------------------
Process exited after 0.01606 seconds with return value 0
�밴���������. . .




*/
