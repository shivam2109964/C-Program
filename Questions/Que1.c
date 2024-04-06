/* A five-digit number is entered thorugh the keyboard. 
   Write a program to obtain the reversed number and to determine wheter
   original and reversed numbers are equal or not.
*/
#include<stdio.h>

int main(){
    int n, d1,d2,d3,d4,d5, rev;
    printf("Enter the five digit number ");
    scanf("%d",&n);

    d5 = n % 10;
    n = n / 10;

    d4 = n % 10;
    n = n / 10;

    d3 = n % 10;
    n = n / 10;

    d2 = n % 10;
    n = n / 10;

    d1 = n % 10;
    n = n / 10;

    rev = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;  
    if(n == rev){
        printf("Original no is equal to reverse no %d %d \n",n, rev);
    }else{
        printf("Orignal no is not equal to reverse no %d %d \n", n, rev);
    }
}