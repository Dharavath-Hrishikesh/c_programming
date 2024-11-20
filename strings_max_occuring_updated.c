//Write a program to find the maximum occurring character in a string. Also, print the frequency of that character. 
#include <stdio.h>
int main()
{
    //input
    char str[100];
    printf("enter string:\n");
    scanf("%s",str);
    //logic
    int f[256]={0},max=0,temp=0; //every block initialized zero
    for(int i=0;str[i]!='\0';i++)
    {
        f[(int)str[i]]++;  //counts frequency of each character
    }
    for(int i=0;str[i]!='\0';i++)//max frequency
    {
        if(f[(int)str[i]]>max)
        max=f[(int)str[i]];
    }
    for(int i=0;i<256;i++)
    {
        if(f[i]==max)
        {
           printf("character:%c \n",(char)i);
        }
    }
    printf("frequency:%d \n",max);
    
    
}