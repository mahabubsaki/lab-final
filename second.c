#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int size;
    scanf("%d", &size);
    int first[size];
    int second[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &first[i]);
    }
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &second[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (first[j] > first[j + 1])
            {
                int temp = first[j + 1];
                first[j + 1] = first[j];
                first[j] = temp;
            }
            if (second[j] < second[j + 1])
            {
                int temp = second[j];
                second[j] = second[j + 1];
                second[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", first[i] - second[i]);
    }

    return 0;
}
