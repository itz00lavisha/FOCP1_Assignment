#include <stdio.h>
int main()
{
    int a, b, c = 0,n;
    printf("Enter your maximum limit:");
    scanf("%d", &n);
    a = 0;
    b = 1;
    while (c <= n)
    {
        printf("%d", c);
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
