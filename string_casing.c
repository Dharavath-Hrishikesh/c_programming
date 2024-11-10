#include <stdio.h>
int main()
{
     //take input
    char s[100],r[100];
    printf("enter string:\n");
    scanf("%s",s);
    //logic
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]<=90&&s[i]>=65)
        {
            s[i]=s[i]+32;
        }
    }
    printf("result:\n%s",s);
    return 0;
}