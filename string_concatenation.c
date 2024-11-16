#include <stdio.h>

int main()
{
    //take inputs 
    char s1[100],s2[100];
    int len_1=0,len_2=0,j=0;
    printf("enter 1st string :\n");
    scanf("%s",s1);
    printf("enter 2nd string :\n");
    scanf("%s",s2);
    //length of the string
    for(int i=0;s1[i]!='\0';i++)
    {
        len_1+=1;
    }
    printf("length of 1st string : %d\n",len_1);
    for(int i=0;s2[i]!='\0';i++)
    {
        len_2+=1;
    }
    printf("length of 1st string : %d\n",len_2);
    
    for(int i=len_1;i<(len_1 + len_2);i++)
    {
        s1[i]=s2[j];
        j++;
    }
    s1[len_1 + len_2]='\0';
    printf("concatenation result : %s\n",s1);
    return 0;
}