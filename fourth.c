#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {

        int number;
        scanf("%d", &number);
        char result[10];
        int count = 0;
        while (number > 0)
        {
            int current = number % 10;
            result[count] = current + 64;
            number = number / 10;
            count++;
        }
        result[count] = '\0';
        printf("%s", result);
        printf("\n");
    }

    return 0;
}