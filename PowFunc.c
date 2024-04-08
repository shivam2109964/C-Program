#include <stdio.h>
int power(int, int);
int main()
{
    int x, y, pow;
    printf("Enter two number \n");
    scanf("%d", &x, &y);

    pow = power(x, y);
    printf("%d to the power %d is %d: ", x, y, pow);
    return 0;
}

int power(int a, int b)
{
    int value = 1;
    for (int i = 1; i <= b; i++)
    {
        value = value * a;
    }
    return (value);
}