/*
program to check if a student has passed or failed:
marks>30 - passed
marks <=30 - failed
*/

#include <stdio.h>

int main()
{
   printf("Enter you marks to check your status : ");

   int marks;
   // int marks = 20;
   scanf("%d",&marks);

   if (30 < marks <= 100)
   {
      printf("\n\nCongratulations! You have passed the Exam.");
   }
   else if (0 <= marks <= 30)
   {
      printf("\n\nCongratulations! You have passed the Exam.");
   }
   else{
      printf("It seems you gave your Exam on Mars.");
   }
   return 0;
}