#include<stdio.h>
int main()
{
	int n,m,k,t,i;
	int a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	scanf("%d",&m);
	for(k=0;k<m;k++)
	{
		t = a[n-1];
		for(i=n-1;i>0;i--)
		{
			a[i] = a[i-1];
		}
		a[i] = t;
	}
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		printf("%d\n",a[i]);
		else
		printf("%d ",a[i]);
	}
	
	
	return 0;
}
