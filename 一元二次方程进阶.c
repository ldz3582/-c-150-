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
      printf("��һԪ���η����������⣬x1 = %f, x2=%f\n", x1, x2);
   }
   else if (delta==0)
   {
   	  x1 = x2 = (-b)/(2*a);
   	  printf("��һԪ���η�����һ���⣬ x1 = x2 = %f\n", x1, x2);
   }
   else
   {
   	 printf("��һԪ���η����޽�"); 
   }
   
  printf("������ yes/no��\n");
    scanf(" %c", &ch);
	}
    
	 
    while ('y'==ch||'Y'== ch);
   return 0;
} 
