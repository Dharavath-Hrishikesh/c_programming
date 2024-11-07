//avg of best two marks out of given number of test marks
#include <stdio.h>
int main()
{
    //input
    int marks[100],l;
    printf("enter no. of elements:");
    scanf("%d",&l);
    printf("enter string:\n");
    for(int i=0;i<l;i++)
    {
       scanf("%d",&marks[i]); 
    }
    //logic
    float avg=0;
    for(int i=0;i<l;i++)
    {
        for(int j=(l-1);j!=i;j--)
        {
            if((marks[i]+marks[j])>=avg)
            avg=marks[i]+marks[j];
        }
    }
    printf("avaerage of the best two:%f",avg/2.0);
    return 0;
    
}