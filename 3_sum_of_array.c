#include <stdio.h>

void getValues(int *arr, int len)
{
    if (len <= 0)
        return;
    scanf("%d", &arr[len - 1]);
    getValues(arr, len - 1);
}

void sumOfArray(int *sum, int *arr, int len)
{
    if (len <= 0)
        return;

    *sum += arr[len - 1];
    sumOfArray(sum, arr, len - 1);
}

int main()
{
    int i, sum = 0, n = 0, len = 5, arr[5];

    printf("Enter the elements: ");
    getValues(arr, len);
    sumOfArray(&sum, arr, len);

    printf("Sum of elements of array: %d", sum);
    return 0;
}