#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
       {
        scanf("%d", &array[i]);
       }

    int peak = -1; 

    for (i = 0; i < n; i++)
     {
        if (i == 0 && array[i] >= array[i + 1]) 
          {
            peak = i;
            break;
          }
       
        else if (i == n - 1 && array[i]>=array[i - 1])
           {
            peak = i;
            break;
           }
      
        else if (array[i]>=array[i-1]&&array[i]>=array[i+1])
           {
            peak = i;
            break;
          }
    }
    if (peak != -1)
        printf("Peak element is %d at index %d\n", array[peak], peak);
    else
        printf("No peak element is found.\n");

    return 0;
}
