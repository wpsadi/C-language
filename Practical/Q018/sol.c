// factorial using recursion

#include <stdio.h>

int fact(int);

int main()
{
    int f = fact(30);
    printf("%d",f);
    return 0;
}

int fact(int  x){
    if (x == 1){
        return 1;
    }
    return x*fact(x-1);
}