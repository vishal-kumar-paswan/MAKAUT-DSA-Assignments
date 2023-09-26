#include <stdio.h>

int getFactorial(int n)
{
    if (n <= 1)
        return 1;
    return n * getFactorial(n - 1);
}

int main()
{
    printf("Enter the value of n and r: ");
    int n, r;
    scanf("%d%d", &n, &r);
    float cf = getFactorial(n) / (getFactorial(n - r) * getFactorial(r));
    printf("Binomial coffecient: %f", cf);
    return 0;
}
