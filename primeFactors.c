#include <stdio.h>
int findPrimeNo(int);
int main()
{
    int n, choice;
    do
    {
        printf("Enter the value: \n");
        scanf("%d", &n);
        printf("The Prime factors of %d is: \n", n);
        findPrimeNo(n);

        printf("\n\nWant to find the more prime no. \n");
        printf("Enter 1 for more and 2 for exit \n");
        scanf("%d", &choice);
    } while (choice != 2);
    return 0;
}

int findPrimeNo(int num)
{
    // 2 and after even no. is common division for primeFactor
    while (num % 2 == 0)
    {
        printf("%d ", 2);
        num = num / 2;
    }

    // after 2 if odd number is occour
    for (int i = 3; i * i <= num; i = i + 2)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
    }
    // now if num is less then 2
    if (num > 2)
    {
        printf("%d", num);
    }
    return 0;
}