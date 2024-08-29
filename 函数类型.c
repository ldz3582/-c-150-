#include<stdio.h>

int f(void)
{
	return 10.4;
}
/*void g(void)
{
	
}*/
int main(void)
{ 
     double x = 9.3;
     x = f();
     printf("%lf\n",x);
	
	return 0;

