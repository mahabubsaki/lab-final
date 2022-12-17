#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int testcase;
    scanf("%d", &testcase);
    for (int l = 1; l <= testcase; l++)
    {
        int numbers, found = 0, searchVal;
        scanf("%d", &numbers);
        int array[numbers];
        for (int i = 0; i < numbers; i++)
        {
            scanf("%d", &array[i]);
        }
        scanf("%d", &searchVal);
        for (int k = 0; k < numbers; k++)
        {
            if (array[k] == searchVal)
            {
                found = k;
                break;
            }
        }
        if (found)
        {
            printf("Case %d: %d", l, found + 1);
        }
        else
        {
            printf("Case %d: Not Found", l);
        }
        printf("\n");
    }

    return 0;
}
