/*
program to grade a student based on his marks:

marks <30 - C
30<=marks<70 - B
70<=marks<90 - A
90<=marks<=100 - A+
*/

#include <stdio.h>

int main()
{
   printf("Enter you marks to get your grade : ");

   int marks;
   // int marks = 20;
   scanf("%d", &marks);

   if (marks < 30)
   {
      printf("\n\nYou have got a C grade.");
   }
   else if (30 <= marks < 70)
   {
      printf("\n\nYou have got a B grade.");
   }
   else if (70 <= marks < 90)
   {
      printf("\n\nYou have got a A grade.");
   }
      else if (90 <= marks <= 100)
   {
      printf("\n\nYou have got a A+ grade.");
   }
   else
   {
      printf("It seems you gave your Exam on Mars.");
   }
   return 0;
}