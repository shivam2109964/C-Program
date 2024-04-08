#include <stdio.h>
float square(float);
int main()
{
    float a, b;
    printf("Enter the value of a\n");
    scanf("%f", &a);
    b = square(a);
    printf("The square of %.2f is %.2f", a, b);
    return 0;
}
float square(float x)
{
    float y;
    y = x * x;
    return y;
}