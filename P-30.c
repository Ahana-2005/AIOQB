//Write a C program to find sum of series of the following series for n number of terms. 1+x+x^2+…….+x^n
#include <stdio.h>
#include <math.h>
int main()
{
    int x,n;
    int sum;
    printf("Enter the value of X:");
    scanf("%d",&x);
    printf("\nEnter the value of N:");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++) {
        sum+=pow(x,i);
    }
    printf("\nSum=%d",sum);
}