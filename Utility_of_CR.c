#include <stdio.h>
void areaPeri(int, float *, float *);
int main()
{
    int radius;
    float area, parimeter;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    areaPeri(radius, &area, &parimeter);
    printf("Area = %.2f\n", area);
    printf("Perimetre = %.2f\n", parimeter);
    return 0;
}
void areaPeri(int radi, float *area, float *peri)
{
    *area = 3.14 * radi * radi;
    *peri = 2 * 3.14 * radi;
}