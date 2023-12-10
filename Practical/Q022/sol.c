// write fibonacci

#include <stdio.h>
int fibo(int); 

int main(){
    int num = 10;
    int y = fibo(num)-fibo(num-2);
    printf("%d",y);
    return 0;
}

int fibo(int num){
    if (num == 0){
        return 0;
    }
    if (num ==1 ){
        return 1;
    }
    return fibo(num-2)+fibo(num-1);
}