#include <stdio.h>
int main()
{
    char s1[100],s2[100];
    int flag=0;
    printf("string 1:\n");
    scanf("%s",s1);
    printf("string 2:\n");
    scanf("%s",s2);
    for(int i=0;(s1[i]!='\0'&&s2[i]!='\0');i++)
    {
        if(s1[i]!=s2[i])
        flag=1;
    }
    if(flag==1)
    printf("strings are not same !!!\n");
    else
    printf("strings are same!!\n");
}