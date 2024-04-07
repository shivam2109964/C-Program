#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any one alphabets a, b, or c \n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
        printf("a as in apple\n");
        break;

    case 'b':
    case 'B':
        printf("b as in brain\n");
        break;

    case 'c':
    case 'C':
        printf("c as in cookie\n");
        break;
    case 'd':
    case 'D':
        printf("d as in Dog");
        break;
    default:
        printf("I hope you understand :)");
        return 0;
    }
}
