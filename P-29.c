//Write a program to build an array of 100 random numbers in the range 1 to 100.Perform the following operations on the array:
//a. Count the number of elements that are completely divisible by 3.
//b. Count the number of odd elements.
//c. Find the smallest element in the array.
//d. Find the position of the largest value in the array.
#include <stdio.h>
int main()
{
    int arr[5];
    int count=0,flag=0,temp,max=arr[0];
    for (int i = 0; i < 5; i++) {
        printf("Enter the element in the index %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("The array is:");
    for (int i = 0; i < 5; i++) {
        printf("%d\t",arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        if(arr[i]%3==0)
        {
            count++;
        }
    }
    printf("\nThe number of 3 divisible numbers = %d\n",count);
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 1) {
            flag++;
        }
    }
    printf("The number of odd numbers = %d\n",flag);
    for (int i = 0; i < 5; i++) {
        if(max < arr[i])
            max = arr[i];
    }
    printf("Largest element present in given array: %d\n", max);
    for (int i = 0; i < 5; i++) {
        for (int j = 5; j < 5-i-1; j++) {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("The smallest element in the array is:%d\n",arr[0]);
  }