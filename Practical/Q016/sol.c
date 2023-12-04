// call by value and call by refernce

#include <stdio.h>

void tnp(float a, float b, float *sum);
float sums(float a, float b);

int main(){
    float x = 1.2, y = 1.4;

    float sum;

    tnp(x,y,&sum);
    printf(" sum with pointer = >%f \n\n",sum);
    printf(" sum with call by value = >%f \n\n",sums(x,y));
    return 0;
}

float sums(float a, float b){
    return a+b;
}

void tnp(float a, float b, float *sum){

    *sum = a+b;


}