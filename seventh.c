#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int gcd(int first, int second);

int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        int numbers;
        int hexa = 0;

        scanf("%d", &numbers);
        int array[numbers];
        for (int i = 0; i < numbers; i++)
        {
            scanf("%d", &array[i]);
        }

        for (int i = 0; i < numbers; i++)
        {

            for (int j = 0; j < numbers; j++)
            {
                if (i != j)
                {
                    if (gcd(array[i], array[j]) == 1)
                    {
                        hexa++;
                    }
                }
            }
        }
        printf("%d", hexa);
        printf("\n");
    }

    return 0;
}
int gcd(int first, int second)
{
    int high, low;
    if (first > second)
    {
        high = first;
        low = second;
    }
    else
    {
        high = second;
        low = first;
    }
    if (second == 0)
    {
        return first;
    }
    else
    {
        return gcd(low, high % low);
    }
}