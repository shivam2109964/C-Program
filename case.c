#include <stdio.h>
int main()
{
    int i = 1;
    printf("Enter the case you want to print: ");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
        printf("I am in case 1 \n");
        break;
    case 1 + 2:
        printf("I am in case 2 \n");
        break;
  
    default:
        printf("I am in default \n");
        break;
    }
    return 0;
}