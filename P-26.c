//Write a program to add two floating point numbers. The result should contain only two digit after the decimal, Using Pointers.
#include <stdio.h>
int main()
{
    float a,b;
    printf("Enter the value of A:");
    scanf("%f",&a);
    printf("Enter the value of B:");
    scanf("%f",&b);
    float *c=&a;
    float *d=&b;
    float e=*c+*d;
    printf("Addition of A and B = %.2f",e);
}