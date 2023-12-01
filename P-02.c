//Write a program in c to find the hcf of two numbers
#include <stdio.h>
int hcf(int n1, int n2)
{
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
int main()
{
    int n1 = 202, n2 = 300;
    printf("H.C.F of %d and %d is %d.", n1, n2, hcf(n1, n2));
    return 0;
}