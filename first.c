#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void printPattern(int n, int total, int input);
int main()
{
    int input;
    scanf("%d", &input);
    for (int i = 1; i <= input; i++)
    {
        printPattern(i, input, input - i);
        printf("\n");
    }
    return 0;
}
void printPattern(int n, int total, int space)
{
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    for (int i = total - n; i < total + n - 1; i++)
    {
        if (n % 2 == 0)
        {
            printf("*");
        }
        else
        {
            printf("^");
        }
    }
}