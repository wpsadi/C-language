// find factorial using recursion

#include <stdio.h>

int fac();

int main(){
   int x = fac(5,1);

   printf("%d",x);
   return 0;
}

int fac(int num, int result){
   if (num == 1){
      return result;
   }
   result *= num;
   fac(num = num-1,result);
}