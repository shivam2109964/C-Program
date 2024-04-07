#include <stdio.h>
int main()
{
    int i, j, k, c = 0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                c++;
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    printf("%d", c);
    return 0;
}