#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Positive number:");
    scanf("%d", &num);

    /*if(num%5==0 || num%3==0){
        if(num%15!=0){
            printf("%d id div by 5 or 3 but not 15",num);
        }else{
        printf("%d is div by 15",num);
    }

    }
    else{
        printf("%d is not div");
    }*/

/**/    if (num % 5 == 0){
            if (num % 15 != 0){
            printf("%d is div by 5 but not 15", num);
        }else{
            printf("%d is div by 15", num);
        }
    }else if (num % 3 == 0){
            if (num % 15 != 0){
            printf("%d is div by 3 but not 15", num);
        }else{
            printf("%d is div by 15", num);
        }
    }else{
        printf("%d is not div by 5 or 3", num);
    }

    return 0;
} 