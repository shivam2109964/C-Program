#include<stdio.h>
int main(){
    int i, num, fact;
    i = fact = 1;
    printf("Enter the number to find the factorial \n");
    scanf(" %d", &num);

    while(i <= num){
        fact = fact * i;
        i++;
    }
    printf("The factorial of %d is %d \n", num, fact);
    return 0;
}