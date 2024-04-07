#include<stdio.h>

int main() {
    float i, x;
    int y;
    
    printf(" y |   x   |    i   \n");
    printf("---+-------+--------\n");
    
    for (y = 1; y <= 6; y++) {
        for (x = 5.5; x <= 12.5; x += 0.5) {
            i = 2 + (y + 0.5 * x);
            printf("%2d | %5.2f | %6.2f\n", y, x, i);
        }
    }
    
    return 0;
}
