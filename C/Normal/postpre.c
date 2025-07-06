#include<stdio.h>
/*int main (){
    int x=5;
    printf("%d\n",x);
    x++;
    printf("%d\n",x);
    x--;
    printf("%d\n",x);
    ++x;
    printf("%d\n",x);
    --x;
    printf("%d\n",x);
    return 0;
}*/
int main (){
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("\n%d %d %d",x,y,z);
    return 0;
}