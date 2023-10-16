// swap 2 numbers using pointer

#include <stdio.h>
 int main(){
    int a = 10;
    int b = 20;

    int c =a;

    printf("%d %d",a,b);

    *(&a) = b, *(&b) = c;

    printf("%d %d",a,b);
    return 0;
 }