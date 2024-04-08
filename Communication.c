#include <stdio.h>
int calcum();
int main()
{
    int a, b, c;
    int sum;

    printf("Enter the value of a, b, c : \n");
    scanf("%d %d %d", &a, &b, &c);
    sum = calcum(a, b, c);
    printf("%d is the result \n", sum);
    return 0;
}

int calcum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return (d);
}