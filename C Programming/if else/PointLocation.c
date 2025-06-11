#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the coordinates\n");
    scanf("%d %d", &x, &y);
    if (y == 0 && x != 0)
        printf("coordinate lies on the x-axis");
    else if (x == 0 && y != 0)
        printf("coordinates lies on the y-axis");
    else if (x != 0 && y != 0)
        printf("coordinates not lies on the x-axis,y-axis and origin");
    else
        printf("coordinate lies on the origin");
    return 0;
}
