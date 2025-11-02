#include <stdio.h>
int main()
{
    int a1, a2, HCF = 1;
    printf("Enter the two numbers:");
    scanf("%d%d", &a1,&a2);
   
    if (a1 < 0)
    {
        a1 = -(a1);
    }
    if (a2 < 0)
    {
        a2 = -(a2);
    }
    if (a1 == 0 && a2 == 0)
    {
        printf("HCF is undetermined as both numbers are zero \n ");
    }
    else if (a1 == 0)
    {
        printf("HCF of 0 and %d is : %d", a2, a2);
    }
    else if (a2 == 0)
    {
        printf("HCF of %d and 0 is : %d", a1, a1);
    }
    else
    {
        for (int i = 1; i <= a1 && i <= a2; i++)
        {
            if (a1 % i == 0 && a2 % i == 0)
                HCF = i;
        }
        printf("HCF OF %d and %d is: %d", a1, a2, HCF);
    }
    return 0;
}
