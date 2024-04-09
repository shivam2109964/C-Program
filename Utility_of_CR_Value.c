#include <stdio.h>
void areaPeri(int, float*, float*);
int main()
{
    int radius;
    float area, perimeter;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    areaPeri(radius, &area, &perimeter);

    printf("Area = %f \n", area);
    printf("Perimeter = %f \n", perimeter);
    return 0;
}

void areaPeri(int radi, float *areaa, float *perim)
{
    *areaa = 3.14 * radi * radi;
    *perim = 2 * 3.14 * radi;
}