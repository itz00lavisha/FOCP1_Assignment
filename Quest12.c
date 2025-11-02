#include <stdio.h>
int main()
{
    int array[100];
    int n, i;
    int maximum, minimum;
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    printf("Enter %d scores:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    maximum = array[0];
    minimum = array[0];
    for (i = 1; i < n; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    printf("\nScores entered are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nHighest Score (Rank 1): %d", maximum);
    printf("\nLowest Score (Bottom Rank): %d", minimum);
    return 0;
}
