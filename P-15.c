//Write a program to insert an element in an array.
#include <stdio.h>
int main()
{
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
    for (i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the number to be inserted:");
    scanf("%d",&x);
    printf("Enter the index in which the number is inserted:");
    scanf("%d",&pos);
    n++;
    for (i = n - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    for (i = 0; i < n; i++)
    {
        printf("%d\t ", arr[i]);
    }
}