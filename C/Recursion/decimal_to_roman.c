#include<stdio.h>
#include<string.h>

//decimal to roman by recursive function without using pointers
void decimalToRoman(int num) {
    if (num <= 0) return;
    // Base cases for Roman numeral conversion
    // 1000 = M, 900 = CM, 500 = D, 400 = CD, 100 = C, 90 = XC, 50 = L, 40 = XL, 10 = X, 9 = IX, 5 = V, 4 = IV, 1 = I
    else{
        if (num >= 1000) {
            printf("M");
            decimalToRoman(num - 1000);
        } else if (num >= 900) {
            printf("CM");
            decimalToRoman(num - 900);
        } else if (num >= 500) {
            printf("D");
            decimalToRoman(num - 500);
        } else if (num >= 400) {
            printf("CD");
            decimalToRoman(num - 400);
        } else if (num >= 100) {
            printf("C");
            decimalToRoman(num - 100);
        } else if (num >= 90) {
            printf("XC");
            decimalToRoman(num - 90);
        } else if (num >= 50) {
            printf("L");
            decimalToRoman(num - 50);
        } else if (num >= 40) {
            printf("XL");
            decimalToRoman(num - 40);
        } else if (num >= 10) {
            printf("X");
            decimalToRoman(num - 10);
        } else if (num >= 9) {
            printf("IX");
            decimalToRoman(num - 9);
        } else if (num >= 5) {
            printf("V");
            decimalToRoman(num - 5);
        } else if (num >= 4) {
            printf("IV");
            decimalToRoman(num - 4);
        } else if (num >= 1) {
            printf("I");
            decimalToRoman(num - 1);
        }
    }
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Roman numeral: ");
    decimalToRoman(decimal);
    printf("\n");
    return 0;
}
