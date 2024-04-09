#include<stdio.h>
void swap(int *, int *);
int main(){
    int x, y;
    x = 10;
    y = 20;
    printf("x = %d, y = %d\n",x,y);
    swap(&x, &y);
    return 0;
}
void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("a = %d, b = %d\n", *a, *b);
}