//Write a program to generate the following pattern :
//$ * * * $
//* $   $ *
//*   $   *
//* $   $ *
//$ * * * $
#include<stdio.h>
int main()
{
    int i,j,end=4;
    for(i=0;i<=end;i++)
    {
        for(j=0;j<=end;j++) {
            if (j == i||j==end-i)
                printf("$ ");
            else if (j == 0||j==end||i==0||i==end)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}