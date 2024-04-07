#include <stdio.h>

#define LIMIT 10000 // Adjust this limit as needed

int main() {
    printf("Numbers expressible as sum of two cubes in two different ways:\n");
    printf("--------------------------------------------------------------\n");

    for (int a = 1; a <= LIMIT; a++) {
        int a_cube = a * a * a;

        for (int b = a; b <= LIMIT; b++) {
            int b_cube = b * b * b;
            int sum = a_cube + b_cube;

            if (sum > LIMIT) // No need to continue if sum exceeds the limit
                break;

            int count = 0; // Count of pairs of cubes summing to the current number

            for (int c = a + 1; c <= LIMIT; c++) {
                int c_cube = c * c * c;

                for (int d = c; d <= LIMIT; d++) {
                    int d_cube = d * d * d;

                    if (c_cube + d_cube == sum) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum, a, b, c, d);
                        count++;
                    }

                    if (c_cube + d_cube > sum) // No need to continue if sum exceeds the current number
                        break;
                }
            }

            if (count > 1) {
                printf("\n");
            }
        }
    }

    return 0;
}
