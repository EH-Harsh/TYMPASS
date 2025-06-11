#include <stdio.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    printf("Enter x1 and y1 coordinate:");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 and y2 coordinate:");
    scanf("%d %d", &x2, &y2);
    printf("Enter x3 and y3 coordinate:");
    scanf("%d %d", &x3, &y3);
    double m1 = (y2 - y1) / (x2 - x1);
    double m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
        printf("all the point fall on a straight line ");
    else
        printf("not all the pont are fall on a straight line ");

    return 0;
}