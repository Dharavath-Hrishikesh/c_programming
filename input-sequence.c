#include <stdio.h>

int main() 
{
    int a,n;
    a=0;
    printf("enter num:");
    scanf("%d",&n);
    a=a+n;
    while(n!=-1)
    {printf("enter num that to be added:");
    scanf("%d",&n);    
    if(n>0)
    {
        a=a+n;
    }
     }
     printf("the required result:%d",a);
     return 0;
     
     
}