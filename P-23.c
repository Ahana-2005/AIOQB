//Write a program to print the Floyd’s triangle.
#include <stdio.h>
int main()
{
    int n,k = 1;
    printf("Enter limit:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
}