#include <stdio.h>
int factorial(int);
int main()
{
    int a, b;

    printf("Enter the value of a: \n");
    scanf("%d", &a);
    b = factorial(a);

    printf("The factorial of %d is %d \n", a, b);
    return 0;
}

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return (fact);
}