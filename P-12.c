//Write a program to display fibonacci series.
#include<stdio.h>
int main()
{
    int n,temp1=0,temp2=1,backup=temp1+temp2;
    printf("Limit:\n");
    scanf("%d",&n);
    printf("Fibonacci:");
    printf("%d\t%d\t",temp1,temp2);
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",backup);
        temp1=temp2;
        temp2=backup;
        backup=temp1+temp2;
    }
}