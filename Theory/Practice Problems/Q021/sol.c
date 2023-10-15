// print factorial of a number (input by user)

#include <stdio.h>

int main(){
   printf("Enter number to calculate it\'s factorial : ");

   int num;
   scanf("%d",&num);

   int fac = 1;

   for (int i = 1; i <= num; i++){
      fac*= i;
   }

   printf("factorial of number %d is : %d",num,fac);
   return 0;
}