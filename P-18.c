//Assume two strings S1= “HELLO” ,S2=”WORLD”. Write a program to do the following:
//a. Find the length of S1.
//b. Concatenate S1 and S2.
//c. Find the occurrence of a character ‘A’ in S1.
//d. Display the total length of the concatenation.
//e. Copy the string S2 in S1.
//f. Reverse the string S2.
//g. Convert S1 and S2 in lower case
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="HELLO";
    char s2[]="WORLD";
    char s_1[6]="HELLO";
    char s_2[6]="WORLD";
    char temp[50];
    char c='A';
    char *ch;
    temp[5]= (char) s1;
    int a= strlen(s1);
    printf("Length of String 1 is:%d\n",a);
    strcat(s1, s2);
    printf("The concatenated string is:%s\n",s1);
    ch=strchr(s1, (int) c);
    printf("The first occurrence of 'A' in string 1 is:%s\n",ch);
    int b= strlen(s1);
    printf("The total length of concatenated string is:%d\n",b);


    printf("The copied string in string 1 is:%s\n", strcpy(temp,s2));
    printf("The reversed form of string 2 is:%s\n",strrev(s2));
    printf("String 1 in lower case:%s\n", strlwr(s_1));
    printf("String 2 in lower case:%s\n", strlwr(s_2));
}