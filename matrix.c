//matrix printing and sum of all elements
#include <stdio.h>
int main()
{  
    int matrx[100][100],rows,columns,sum;
    sum=0;
    printf("no. of rows:");
    scanf("%d",&rows);
    printf("no. of columns:");
    scanf("%d",&columns);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&matrx[i][j]);
            sum+=matrx[i][j];
        }
    }
     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d ",matrx[i][j]);
        }
        printf("\n");
    }
    printf(" sum:%d ",sum);
    return 0;
}