#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, i, num, fact;
    while (1)
    {
        printf("\n 1. Factorial ");
        printf("\n 2. Prime No. ");
        printf("\n 3. Odd/Even ");
        printf("\n 4. Exit ");
        printf("\n Your choice? ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number \n");
            scanf("%d", &num);

            fact = 1;
            for (int i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            printf("Factorial value = %d", fact);
            break;
        case 2:
            printf("Enter the number \n");
            scanf("%d", &num);
            for (int i = 2; i < num; i++)
            {
                if (num % 2 == 0)
                {
                    printf("Its not a prime no\n");
                    break;
                }
                else
                {
                    printf("Its a prime no.");
                    break;
                }
            }

                break;
            case 3:
                printf("Enter a number \n");
                scanf("%d", &num);
                if (num % 2 == 0)
                {
                    printf("Its even no\n");
                }
                else
                {
                    printf("Its odd Number\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong choice!\n");
                break;
            }
        }
        return 0;
    }