//Enter fibonacci numbers upto n(input by user)

#include <stdio.h>

int fibo();

int main(){
    int num = 10;
    int x = fibo(num);

    printf("%d",x);
    return 0;
}

int fibo(int n){
    if (n == 1){
        return 1;
    }

    int term = fibo(n-1)+n;
    return term;
}