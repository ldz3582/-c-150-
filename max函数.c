#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,a;
    char s[100],s1[100];
    gets(s);
    n = strlen(s);
    a=0;
    for(i=n-1;i>=0;i--)
    {
       if(s1[a++]=s[i])
    }
    if(strcmp(s1,s)==0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
