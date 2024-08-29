#include<stdio.h>
int main(void)
  {  int i;
     char ch;
    
    printf("please\n");
    scanf("%d",&i);
    printf("i=%d\n",i);
    scanf("%c",&ch);
	printf("ch=%c\n",ch);
	return 0;
 } 
//m%d含有非输入控制符 ,必须输入%d前面的值 
// \n 表示空行 
