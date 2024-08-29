#include<stdio.h>
#include<math.h>
int main(void)
{
   int a , b , c;
   float x1, x2;
   float delta;
   char ch;
   do
  {
  
   printf("a = ");
   scanf("%d",&a);
   
   printf("b = ");
   scanf("%d",&b);
   
   printf("c = ");
   scanf("%d",&c);
   
   delta = b*b - 4*a*c;
   if (delta > 0)
   {  x1 = (-b + sqrt(delta)) / (2*a);
      x2 = (-b - sqrt(delta)) / (2*a);
      printf("该一元二次方程有两个解，x1 = %f, x2=%f\n", x1, x2);
   }
   else if (delta==0)
   {
   	  x1 = x2 = (-b)/(2*a);
   	  printf("该一元二次方程有一个解， x1 = x2 = %f\n", x1, x2);
   }
   else
   {
   	 printf("该一元二次方程无解"); 
   }
   
  printf("继续嘛 yes/no？\n");
    scanf(" %c", &ch);
	}
    
	 
    while ('y'==ch||'Y'== ch);
   return 0;
} 
