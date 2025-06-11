#include<stdio.h>
int min(int a, int b){
    if (a<b) return a;
    else return b;
}
int HCF(int a, int b){
    int min_num = min(a, b);
    int hcf;
    for (int i=1; i<=min_num; i++){
        if (a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
}

int main (){
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    printf("The value of a and b is %d and %d\n", a, b);
    int hcf = HCF(a, b);
    printf("The HCF of %d and %d is %d\n", a, b, hcf);
    return 0;
}

