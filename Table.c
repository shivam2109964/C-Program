#include<stdio.h>
int main(){
    int num, multiple;
    printf("Enter the numbre to create a table\n");
    scanf("%d",&num);

    for(int i = 1; i <= 10; i++){
        multiple = num * i;
        printf("%d * %d = %d \n",num, i, multiple );
    }
    return 0;
}