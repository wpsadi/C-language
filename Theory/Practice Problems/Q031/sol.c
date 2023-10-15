//write function to find area of circle, square, rectangle

#include <stdio.h>

double AoCircle();
double AoRect();
double AoSquare();

int main(){
   double x = AoCircle(4.0000);
   printf("\n%f",x);

      double y = AoSquare(4.0000);
   printf("\n%f",y);

      double z = AoRect(4.0000,6.0000);
   printf("\n%f",z);
   return 0;
}

double AoCircle(double radius){
   // printf("%f",3.14*radius*radius);
   return 3.14*radius*radius;
}

double AoSquare(double side){
   return side*side;
}

double AoRect(double l, double b){
   return l*b;
}