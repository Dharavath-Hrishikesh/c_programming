//sum of individual rows and columns of a matrix

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
        }
    }
   printf("\n");
   for(int i=0;i<rows;i++)
    {   sum=0;
        for(int j=0;j<columns;j++)
        {
            sum+=matrx[i][j];
        }
    printf("the sum of row:%d is = %d \n",(i+1),sum);
    }
    for(int i=0;i<columns;i++)
    {   sum=0;
        for(int j=0;j<rows;j++)
        {
            sum+=matrx[j][i];
        }
    printf("the sum of column:%d is = %d \n",(i+1),sum);
    }
  return 0;  
}