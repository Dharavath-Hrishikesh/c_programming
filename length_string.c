#include <stdio.h>

int main()
{
    char name[100],temp;
    int count=0;
    printf("enter string:\n");
    gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
       count+=1;
    }
    printf("length of the string:%d",count);
}