#include <stdio.h>

int convertToBinary(int decimal_number)
{
    if (decimal_number == 0)
        return 0;
    else
        return (decimal_number % 2 + 10 * convertToBinary(decimal_number / 2));
}

int main()
{
    printf("Enter a decimal number: ");
    int decimal_number;
    scanf("%d", &decimal_number);

    printf("%d", convertToBinary(decimal_number));
    return 0;
}
