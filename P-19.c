//Write a C program demonstrating the implementation of sparse matrix.
#include<stdio.h>
int main(){
    int row,col,i,j,a[10][10],count = 0;
    printf("Enter row:");
    scanf("%d",&row);
    printf("Enter Column:");
    scanf("%d",&col);
    printf("Enter Element of Matrix:\n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("Enter element in row %d: and column %d:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements are:");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf(" ");
    }
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(a[i][j] == 0)
                count++;
        }
    }
    if(count > ((row * col)/2))
        printf("Matrix is a sparse matrix");
    else
        printf("Matrix is not sparse matrix");
}