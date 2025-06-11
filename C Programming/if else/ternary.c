#include<stdio.h>
int main( ){
    int x,y;
    printf("enter two number\n");
    scanf("%d %d",&x,&y);
    x>y ? printf("hello") : printf("bye");
    return 0;
}