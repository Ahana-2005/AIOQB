//Write a c program to convert decimal to binary and binary to decimal.
#include <stdio.h>
void decimalToBinary(int decimal_num)
{
    int binary_num[32];
    int i = 0;
    while (decimal_num > 0)
    {
        binary_num[i] = decimal_num % 2;
        decimal_num = decimal_num / 2;
        i++;
    }
    printf("Binary Number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary_num[j]);
    }
    printf("\n");
}
void binaryToDecimal(char binary_num[])
{
    int decimal_num = 0;
    int base = 1;
    int i = 0;
    while (binary_num[i] != '\0')
    {
        i++;
    }
    i--;
    while (i >= 0)
    {
        if (binary_num[i] == '1')
        {
            decimal_num += base;
        }
        base *= 2;
        i--;
    }
    printf("Decimal Number: %d\n", decimal_num);
}
int main()
{
    int decimal_input;
    char binary_input[32];
    printf("Enter a decimal number: ");
    scanf("%d", &decimal_input);
    decimalToBinary(decimal_input);
    printf("Enter a binary number: ");
    scanf("%s", binary_input);
    binaryToDecimal(binary_input);
}

