#include <stdio.h>

int sumOfDigits(int n)
{
    if (n <= 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int sum = sumOfDigits(n);
    printf("Sum of digits: %d", sum);
    return 0;
}
