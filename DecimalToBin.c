#include<stdio.h>
int main(){
    int decimal;
    int array[20];

    printf("Enter the number of Decimal\n");
    scanf("%d",&decimal);
    int i = 0;

    while(decimal > 0){
       array[i] = decimal % 2;
       decimal = decimal / 10;
       i++;
    }
    for(int j = 0; j < i; j++)
    printf("%d", array[j]);
}