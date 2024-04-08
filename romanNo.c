#include <stdio.h>
int romanNum(int, int, char);
int main()
{
    int yr;

    printf("Enter the number\n");
    scanf("%d", &yr);

    yr = romanNum(yr, 1000, 'm');
    yr = romanNum(yr, 500,  'd');
    yr = romanNum(yr, 100,  'c');
    yr = romanNum(yr, 50,   'l');
    yr = romanNum(yr, 10,   'x');
    yr = romanNum(yr, 5,    'v');
         romanNum(yr, 1,    'i');
    return 0;
}
int romanNum(int z, int o, char ch)
{
    int i, j;
    j = z / o;
    for (i = 1; i <= j; i++)
    {
        printf("%c", ch);
    }
    return (z % o);
}