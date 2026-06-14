// write a program to write function for perfect square
#include <stdio.h>

int perfectSquare(int n)
{
    int i;

    for (i = 1; i * i <= n; i++)
    {
        if (i * i == n)
            return 1;
    }

    return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (perfectSquare(n))
        printf("Perfect Square");
    else
        printf("Not a Perfect Square");

    return 0;
}