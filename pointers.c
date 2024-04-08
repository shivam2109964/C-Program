#include <stdio.h>
int main()
{
    int i = 3;
    int* j = &i;

    printf("Value of j %llu\n", j);

    return 0;
}