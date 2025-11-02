#include <stdio.h>
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int i, last;

    printf("Original array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    last = array[n - 1];
    for (i = n - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = last;
    printf("\nArray after one clockwise rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
