// write a program to check armstrong number in a range
#include <stdio.h>

int main()
{
    int start, end, n, temp, digit, sum;

    scanf("%d %d", &start, &end);

    for (n = start; n <= end; n++)
    {
        temp = n;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}
