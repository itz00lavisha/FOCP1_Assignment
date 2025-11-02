#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter The X and Y Co-ordinates:");
    scanf("%d%d", &x,&y);
    
    if (x == 0 && y == 0)
    {
        printf("Co-ordinates lies on the origin \n");
    }
    else if (y == 0)
    {
        printf("Co-ordinates lies on the X-axis \n");
    }
    else if (x == 0)
    {
        printf("Co-ordinates lies on the Y-axis \n");
    }
    else if (x > 0 && y > 0)
    {
        printf("Co-ordinates lies in the 1st Quadrant \n");
    }
    else if (x < 0 && y > 0)
    {
        printf("Co-ordinates lies in the 2nd Quadrant \n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Co-ordinates lies in the 3rd Quadrant \n");
    }
    else
    {
        printf("Co-ordinates lies in the 4th Quadrant \n");
    }
    return 0;
}
