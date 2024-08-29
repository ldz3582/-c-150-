#include<stdio.h>
int main()
{
	int n;
	int i;
	int temp;
	int a =0;
	scanf("%d",&n);
	for(i=2;i<=n;++i)
	{
		if(i!=n)
		{
		   if(i==2)	
		   {
		   	   printf("%d ",i);
		   	   a++;
		   }
		   else
		   {
		   	 for(temp = 2;temp<i;++temp)
		   	 {
		   	   if(i%temp == 0)
				  {
				    break;  	
				} 	
			}
			   if( i == temp)
			   {
			   	 printf("%d ",i);
			   	 a++;
			   	 if(a%10==0)
			   	   printf("\n");
			   }
			
		   }
		}
	}
	printf("\n");
	return 0;
}
