// find area of circle

#include <stdio.h>
#include <math.h>

// #define pi 3.14;

int main(){
    printf("Enter the Radius of circle : ");

    // float radius = 10;
    float radius;
    scanf("%d",&radius);



    float area = 3.14 * radius * radius  ;
    printf("\n\nArea of Circle : %f", area);


    return 0;
}