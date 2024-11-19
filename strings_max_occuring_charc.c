// Write a program to find the maximum occurring character in a string. Also, print the frequency of that character. 
#include <stdio.h>
int main()
{
    //take input
    char s[100],c;
    int count=0,max=0,temp=0;
    printf("enter string:\n");
    scanf("%s",s);
    //logic
    for(int i=0;s[i]!='\0';i++)
    {
        count=0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            count++;
        }
        temp=count;
        if(temp>=max)
        {
            max=temp;//frequency

            c=s[i];
            //printf("frequency:%d",max);

        }
    }
    printf("character:%c\n",c);
    //printf("frequency:%d",max);
}