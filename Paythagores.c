#include <stdio.h>

int main() {
    int a, b, c;

    printf("Pythagorean Triplets with side length <= 30:\n");
    printf("------------------------------------------\n");

    for(a = 1; a <= 30; a++){
        for(b = a + 1; b <= 30; b++){
            for(c = b + 1; c <= 30; c++){
                if(a * a + b * b == c * c){
                    printf("%d,  %d,  %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
