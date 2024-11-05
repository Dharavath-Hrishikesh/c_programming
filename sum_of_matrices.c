//sum of two matrices
#include <stdio.h>
int main()
{
    int a[100][100],b[100][100],rows,columns,sum[100][100];
    
    printf("no. of rows:");
    scanf("%d",&rows);
    printf("no. of columns:");
    scanf("%d",&columns);
    printf("enter inputs of 1st matrix \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter inputs of 2nd matrix \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("resultant matrix \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d ",a[i][j]+b[i][j]); 
        }
        printf("\n");
    }
    return 0;
} 
   