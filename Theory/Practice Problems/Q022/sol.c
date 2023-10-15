// print table in reverse order of number (input by user)

#include <stdio.h>

int main(){
   printf("Please Enter the number to print it\'s table : ");

   // int num;
   int num = 5;
   // scanf("%d",&num);

   printf("\n\n");

   for ( int i = 10; i > 0 ; i--){
      printf("\n %d x %d = %d",num,i,num*i);
   }
   return 0;
}