// print numbers upto n (input by user)

#include <stdio.h>

int main(){
   printf("Enter the number : ");

   printf("\n\n");

   // int num;
   int num = 100;
   // scanf("%d",&num);

   //using for loop
   /* for (int i = 0; i <= num ; i++){
       printf("%d\n",i);
   }*/

   //using while loop
   int i = 0;
   while (i <= num){
      printf("%d\n",i);
      i++;
   }

   return 0;
}