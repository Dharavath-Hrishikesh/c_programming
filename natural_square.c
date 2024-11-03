#include<stdio.h>
int main()
{
    int i,n,a;
    a=0;
    printf("sum squares of natural num till:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+i*i;
    }
    printf("sum of squares of natural numbers till %d is %d",n,a);
    
}