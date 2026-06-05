// write a program to find largest prime number
#include <stdio.h>

int main()
{
    int n, i, j, flag;

    scanf("%d", &n);

    for (i = n; i >= 2; i--)
    {
        flag = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}