//Enter fibonacci numbers upto n(input by user)

#include <stdio.h>

void fibo();

int main(){
    int num = 10;
    fibo(num,0,1);
    return 0;
}

void fibo(int n, int a, int b){
if (n == 0){
    return;
}

    printf("%d ",a);

    int c = a+b;
    a = b;
    b = c;

    fibo(n-1,a,b);
}