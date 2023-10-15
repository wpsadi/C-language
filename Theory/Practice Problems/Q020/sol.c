// print all odd numbers from 5-50

#include <stdio.h>

int main(){
   int start = 5, end = 50;

   for (start; start <= end; start+= 2){
      // here i didn't use any if else
      printf("%d\n",start);
   }
   return 0;
}