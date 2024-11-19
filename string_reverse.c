#include <stdio.h>
int main()
{
    //taking input 
    char s[100],r[100];
    int len=0;
    printf("enter string:\n");
    scanf("%s",s);
    //finding length
    for(int i=0;s[i]!='\0';i++)
    {
       len++; 
    }
    printf("length of the string:%d\n",len);
    //logic
    for(int i=0;s[i]!='\0';i++)
    {
      r[i]=s[(len-1)-i];  
    }
    r[len]='\0';
    //output
    printf("reversed string:\n%s",r);
    return 0;
}
