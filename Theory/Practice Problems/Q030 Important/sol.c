// recursion

//print sum of n natural numbers using recursion

#include <stdio.h>

int recursion();

int main(){
   int x = recursion(10,1,0);
   printf("\n\nSum is : %d",x);
   return 0;
}

int recursion(int num,int i,int sum){
   if (i > num){
      return sum;
   }
   printf("%d\n",i);
   sum += i;
   recursion(num,i+1,sum);
}