#include <stdio.h>
int main()
{
    int choice;
    printf("1. BINARY TO DECIMAL \n");
    printf("2. DECIMAL TO BINARY \n");
    printf("Enter Your Choice 1 or 2:");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int rem,b,base=1,dec=0;
        printf("Enter Number in Binary:");
        scanf("%d", &b);
        while (b > 0)
        {
            rem = b % 10;
            dec = dec + rem * base;
            b= b / 10;
            base = base * 2;
        }
        printf("Number in Decimal is: %d", dec);
    }
    else if (choice == 2)
    {
        int dec, b=0, remainder, place = 1;
        printf("Enter Number:");
        scanf("%d", &dec);
        while (dec > 0)
        {
            remainder = dec % 2;
            b= b + remainder * place;
            dec = dec / 2;
            place = place * 10;
        }
        printf("Number in Binary is: %d", b);
    }
    else
        printf("invalid choice");
    return 0;
}
