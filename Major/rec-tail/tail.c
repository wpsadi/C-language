#include <stdio.h>

void print(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    print(n-1);
}

int main(){
    print(5);
    return 0;
}