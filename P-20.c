// Write a menu-driven program to insert 5 elements in stack and remove one element from it.
#include<stdio.h>
int data[5];
int top=-1;
int push(int value)
{
    if(top>4)
        printf("\nStack Overflows insertion not possible");
    else{
        top++;
        data[top] =value;
    }
    return 0;
}
int pop(int val)
{
    if(top == -1)
        printf("\nStack Underflow deletion is not possible.");
    else
    {
        for (int i = val; i < 5;i++)
        {
            data[i]=data[i+1];
        }
    }
    return 0;
}
int main()
{
    int n,ch;
    printf("Enter choice:\n");
    printf("1.Push.\n");
    printf("2.Pop.\n");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
            for (int i=0;i<5;i++)
            {
                int a;
                printf("Enter the element in the index %d:",i);
                scanf("%d",&a);
                push(a);
            }
            printf("\nStack elements are:");
            for(int i=0;i<=top;i++)
            {
                printf("\n%d",data[i]);
            }
            break;
        case 2:
            printf("\nEnter the index value to be deleted:");
            scanf("%d",&n);
            pop(n);
            for(int i=0;i<=top-1;i++)
            {
                printf("\n%d",data[i]);
            }
            break;
        default:
            printf("WRONG CHOICE!");
    }
}