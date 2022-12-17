#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int numchars;
    scanf("%d", &numchars);
    char chars[numchars];
    scanf("%s", chars);
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < numchars; i++)
    {
        int index = chars[i] - 97;
        if (freq[index] == 0)
        {
            freq[index] = 1;
        }
        else
        {
            freq[index] = freq[index] + 1;
        }
    }
    int unique = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
        {
            unique++;
        }
    }
    printf("%d", unique);
    return 0;
}
