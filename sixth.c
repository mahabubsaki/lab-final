#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPrime(int number);
int main()
{

    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        int from, to;
        scanf("%d %d", &from, &to);
        for (int i = from; i <= to; i++)
        {
            if (i == 1 || i == 2)
            {
                printf("%d ", i);
            }
            else
            {
                if (isPrime(i))
                {
                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
int isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }

    return 1;
}