// write a program to count set bits in a number
#include <stdio.h>

int main()
{
    int n, count = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        count += n % 2;
        n /= 2;
    }

    printf("%d", count);

    return 0;
}