// keep taking number until user enter a number which is a multiple of 7

#include <stdio.h>

int main(){
   int num;

   do{
      printf("Enter number : ");

      scanf("%d",&num);

      printf("\n");
   }while(num % 7 == 0);

   printf("Thank You");

   return 0;
}