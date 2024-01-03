#include <stdio.h>
signed int fact(int n){
    if (n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    signed int x = fact(100);
    printf("%u",x);
    return 0;
}