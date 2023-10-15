/*Print sum of of n natural numbers and print them in reverse order*/

#include <stdio.h>

int main(){
   printf("Please enter the number : ");
   
   // int num;
   int num = 10;
   // scanf("%d",&num);

   printf("\n\n");

   int sum = 0, i = num;

   while (i > 0){
      printf("%d\n",i);
      sum += i;
      i--;
   }

   printf("\nSum of all the numbers is %d",sum);

   return 0;
}