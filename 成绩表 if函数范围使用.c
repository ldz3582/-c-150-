//�ɼ�

#include<stdio.h>
int main(void)
{
	int score;
	printf("��������ĳɼ���");
	
	scanf("%d",&score); //����ע��ո񣬶��ո�\n�ſ����ֲ�
	
	if( score > 100)
	{
		printf("�����������Σ�");
	 } 
	 else if(90<=score && score<=100)
	 {
	 	printf("�ǳ���");
	 }
	 else if(60<=score && score<90 )
	 {
	 	printf("���պϣ�");
	 }
	else 
	{printf("���ϸ�");
	}
	
	return 0;
 } 
