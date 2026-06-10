// write a program to print character pyramid
#include <stdio.h>

int main()
{
    int i, j, n;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        ch = 'A';

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%c", ch++);
        }

        for (j = i - 1; j >= 1; j--)
        {
            printf("%c", 'A' + j - 1);
        }

        printf("\n");
    }

    return 0;
}
