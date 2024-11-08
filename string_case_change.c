#include <stdio.h>
int main()
{
    //input
    char s[100];
    printf("enter string:\n");
    scanf("%s",s);
    //logic
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]<=90&&s[i]>=65)
        {
            s[i]=s[i]+32;
        }
        else if(s[i]<=122&&s[i]>=97)
        {
            s[i]=s[i]-32;
        }
    }
    //output
    printf("result:%s\n",s);
}