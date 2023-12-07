//Write a program to check whether a string has odd or even numbers of characters without using string function.
#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter a string:");
    gets(str);
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    if(count%2==0)
    {
        printf("The string contains even no. of characters!");
    }
    else
    {
        printf("The string contains odd no. of characters!");
    }
}