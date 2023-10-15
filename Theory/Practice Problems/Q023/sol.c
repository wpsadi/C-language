// calculate sum of all numbers from 5-50 including 5 & 50

#include <stdio.h>

int main(){
   int start = 5, end = 50;

   int sum = 0;

   for (int i = start; i <= end; i++){
      sum += i;
   }

   printf("The sum of all numbers from %d to %d is : %d",start,end,sum);
   return 0;
}