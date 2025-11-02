#include <stdio.h>
int main()
{
    int array[100], n, i, j;
    int count, hDuplicate = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nDuplicate elements:\n");
    for (i = 0; i < n; i++)
    {
        count = 1;

        if (array[i] == -1)
            continue;

        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                array[j] = -1;
            }
        }
        if (count > 1)
        {
            printf("%d ", array[i]);
            hDuplicate = 1;
        }
    }
    if (!hDuplicate)
    {
        printf("-1");
    }
    printf("\n");
    return 0;
}
