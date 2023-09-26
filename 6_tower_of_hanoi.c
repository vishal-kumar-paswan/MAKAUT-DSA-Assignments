#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disk 1 from tower %c to tower %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary tower using destination as auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    printf("Move disk %d from tower %c to tower %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary tower to destination using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C'); // Towers are named A, B, and C
    return 0;
}
