#include <stdio.h>
int main(){
    float fahr, calsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper){
        calsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f \t  %6.1f \n", fahr, calsius);
        fahr = fahr + step;
    }
}