#include <stdio.h>
int main()
{
    int array[100];
    int n, i, nis, num;
    printf("Enter number of elements in array: ");
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
    printf("\n Where do you want to insert the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    int choice;
    scanf("%d", &choice);
    printf("Enter the element to insert: ");
    scanf("%d", &num);
    if (choice == 1)
    {
        nis = 0;
    }
    else if (choice == 2)
    {
        nis = n / 2;
    }
    else if (choice == 3)
    {
        nis = n;
    }
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }
    for (i = n; i > nis; i--)
    {
        array[i] = array[i - 1];
    }
    array[nis] = num;
    n++;
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
