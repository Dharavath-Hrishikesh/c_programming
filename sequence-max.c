#include <stdio.h>

int main() 
{
    int a,b,n;
    a=0;
    printf("enter no. of inputs:");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        printf("enter input:");
        scanf("%d",&b);
        if(b>a)
        {
           a=b;
        }
   else 
   {
       a=a;
   }
  i++;
  
   }
 printf("highest num is :%d",a);
 return 0;
   
     
}