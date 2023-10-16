// calc sum, product, average of 2 numbers. Print avg in main function.

#include <stdio.h>

float sum(float a, float b);

float prod(float a , float b);

float avg(float a , float b);

int main(){
    int a = 1.00, b = 2.0;
    printf("sum : %f\nProduct : %f\nAvg : %f",sum(a,b),prod(a,b),avg(a,b));
    return 0;
}

float sum(float a, float b){
    return a+b;
}

float prod(float a, float b){
    return a*b;
}

float avg(float a, float b){
    return (a+b)/2.00;
}