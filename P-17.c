//In a class of 20,15 students were sitting in random order science teacher Mr. Sachin came to
//class and wanted to find whether student name Mr. Saurav came to class or not, illustrate a
//solution using C program to help Mr. Sachin for the search.
#include <stdio.h>
#include <string.h>
int main()
{
    char n[50];
    int count=0;
    struct stu_details
    {
        char name[50];
    };
    struct stu_details sd[20];
    for (int i=0;i<20;i++)
    {
        printf("Enter The Names Of The Students In Index No.%d:", i);
        gets(n);
    }
    for (int i=0;i<20;i++)
    {
    if((strcasecmp(sd[i].name,n)==0))
    {
        count++;
    }
    }
    if(count==1)
    {
        printf("Saurav Is Present In Class!");
    }
    else
    {
        printf("Saurav Is Absent In Class!");
    }
}