#include <stdio.h>
    int main()
{
    int x;
    printf("Enter number of scores: ");
    scanf("%d", &x);
    int scores[x];
    int i, f=0;
    printf("Enter %d scores:", x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &scores[i]);
    }
    for (i = 0; i < x; i++)
    {
        if (scores[i] == 99)
        {
            printf("The first occurrence of Score 99 is at position %d.\n", i + 1);
            f=1;
            break;
        }
    }
    if (f==0)
    {
        printf("Score 99 not found in the list.\n");
    }

    return 0;
}
