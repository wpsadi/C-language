// print numbers 1-10 except 6

#include <stdio.h>

int main(){
   int num = 10;

   for (int i = 1; i <= num; i++){
      if (i != 6){
         printf("%d\n",i);
      }
   }
   return 0;
}