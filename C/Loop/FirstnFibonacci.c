#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    for (int i = 1; i <= n; i++) {
        printf("%d: %d\n", i, a);
        int sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}