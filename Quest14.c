#include <stdio.h>
int main() 
{
    int n,i,j,count=0,flag;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d",&n);

    int array[n];

    printf("Enter the elements for the array:");
    for (i=0;i<n;i++) 
       {
        scanf("%d", &array[i]);
       }

    for(i=0;i<n;i++) 
      {
        if(array[i]<=1)
            continue;
        flag=0;

        for(j=2;j<array[i];j++) 
          {
            if(array[i]%j==0)
              {
                flag = 1;
                break;
              }
          }

        if(flag == 0)
            count++;
    }
    printf("Total prime numbers in the array = %d\n", count);

    return 0;
}
