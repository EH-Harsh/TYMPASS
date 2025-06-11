#include <stdio.h>
int main()
{
    int first, second, third;
    printf("Enter a First number:");
    scanf("%d", &first);
    printf("Enter a Second number:");
    scanf("%d", &second);
    printf("Enter a Third number:");
    scanf("%d", &third);
/*    if (first > second && first > third)
    {
        printf("%d is Greatest number", first);
    }
    if (second > third)
    {
        printf("%d is Greatest number", second);
    }
    else
    {
        printf("%d is Greatest number", third);
    }
*/

    if(first>second){
        if(first>third){
            printf("%d is Greatest number",first);
        }else{
            printf("%d is Greatest number",third);
        } 
    }
    else {
        if(second>third){
        printf("%d is Greatest number",second);
        }
        else{
            printf("%d is Greatest number",third);
        }
    }
    return 0;
}

    
