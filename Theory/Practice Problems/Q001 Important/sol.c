// find area of a square

#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the value of side of the square : ");

    int side = 10;
    // scanf("%d",&side);

    double area = pow(side,2);

    int int_area = (int) area;
    printf("\n\nArea of the Square : %d", int_area);


    return 0;
}