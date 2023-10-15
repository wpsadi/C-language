// keeping asking for input until user enter odd number

#include <stdio.h>

int main(){
   int num;

   do{
      printf("Enter number : ");

      scanf("%d",&num);

      printf("\n");
   }while(num % 2 == 0);

   printf("Thank You");

   return 0;
}