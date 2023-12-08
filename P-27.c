//Write a program to print Hello World, Using Pointers.
#include <stdio.h>
int main()
{
    char str[]="Hello World";
    char *s=&str;
    printf("The String is '%s' printed using pointer",s);
}