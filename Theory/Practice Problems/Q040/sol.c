// calc sum, product, average of 2 numbers. Print avg in main function.

#include <stdio.h>

void tnp(float a, float b, float *sum, float *prod, float *avg);

int main(){
    float x = 1.2, y = 1.4;

    float sum,prod,avg;

    tnp(x,y,&sum,&prod,&avg);
    printf("%f %f %f",sum,prod,avg);
    return 0;
}

void tnp(float a, float b, float *sum, float *prod, float *avg){

    *sum = a+b;
    *prod = a*b;
    *avg =(*sum)/2.0;


}



