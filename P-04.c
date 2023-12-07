//Write a program to check whether the character is upper case or lower case.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character:\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("The character entered is in uppercase");
    else
        printf("The character entered is in lowercase");
}