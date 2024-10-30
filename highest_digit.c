#include <stdio.h>

int main() {
    int i,a,b,c,d;
    b=0;
    c=0;
    d=0;
    printf("enter number:");
    scanf("%d",&a);
    for(i=1;a!=0;i++)
    {
     b=b+(a%10);
     a=a/10;
     c=c+(a%10);
     a=a/10;
     if (b>c && b>d)
     {d=b;
    b=0;
    c=0;
     }
     else if(c>b && c>d)
     {
         d=c;
         b=0;
         c=0;
     }
     else 
     {
         d=d;
         b=0;
         c=0;
    }
 }
printf("highest digit value:%d",d);
    
  return 0;  
    
    
}
