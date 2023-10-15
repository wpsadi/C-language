// convert celcius to farenhite

#include <stdio.h>

float CtoF(float c);
// see here the we wrote c in function prototype

int main(){
   float a = CtoF(10.03);
   printf("%f",a);
   return 0;
}

float CtoF(float c){
   float f = ((1.80)*c)+32.00;
   return f;
}


// 5:08:57 in video done