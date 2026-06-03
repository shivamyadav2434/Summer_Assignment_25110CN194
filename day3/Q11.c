// write a program to find GCD of two numbers
#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d", a);

    return 0;
}