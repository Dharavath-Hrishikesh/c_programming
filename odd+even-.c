#include <stdio.h>
int main() {
    int i,a,b,c,j;
    b=0;
    c=0;
    printf("enter number:");
    scanf("%d",&a);
    for(i=1;a!=0;i++)
    {
     b=b+(a%10);
     a=a/10;
     c=c+(a%10);
     a=a/10;
 }
 
printf("%d",b-c);
  return 0;  
    
    
}
