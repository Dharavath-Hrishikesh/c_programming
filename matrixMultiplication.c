#include <stdio.h>
int main()
{
int rows,columns,columns_n,m1[100][100],m2[100][100],r[100][100];
printf("no. of rows of 1st matrix:");
scanf("%d",&rows);
printf("no. of columns of 1st matrix:");
scanf("%d",&columns);
printf("\n \nfor matrix multiplication to take place\nno. of columns of 1st matrix is equal to no. of rows of 2nd matrix \n");
printf("\n \n");
printf("no. of columns of 2nd matrix : ");
scanf("%d",&columns_n);
//input of 1st matrix
printf("inputs of 1st matrix: \n");
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        scanf("%d",&m1[i][j]);
    }
}
//input of 2nd matrix
printf("inputs of 2nd matrix: \n");
for(int i=0;i<columns;i++)
{
    for(int j=0;j<columns_n;j++)
    {
        scanf("%d",&m2[i][j]);
    }
}
printf("resultant matrix \n");
for(int m=0;m<rows;m++)
{
    for(int n=0;n<columns_n;n++)
    {
        for(int o=0;o<columns;o++)
        {
            r[m][n]+=m1[m][o]*m2[o][n];
        }
        printf("%d ",r[m][n]);
    }
    printf("\n");
}
return 0;
}