#include <stdio.h>
int main()
{
    int first, second, third;
    printf("Enter a First side:");
    scanf("%d", &first);
    printf("Enter a Second side:");
    scanf("%d", &second);
    printf("Enter a Third side:");
    scanf("%d", &third);
    if ((first + second) > third &&
        (first + third) > second &&
        (second + third) > first)
    {
        printf("It is a Triangle");
    }
    else
    {
        printf("It is not a Triangle");
    }

    return 0;
}