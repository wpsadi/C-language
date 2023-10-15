/*To check if a character is uppercase or not*/

#include <stdio.h>

int main()
{
   printf("Enter the character you want to check : ");

   // char x;
   char x = 'M';
   // scanf("%c", &x);

   printf("\n\n");

   if (x >= 'a' && x <= 'z')
   {
      printf("The character is Lower Case");
   }
   else if (x >= 'A' && x <= 'Z')
   {
      printf("The character is Upper Case");
   }
   else
   {
      printf("The character is not available in English");
   }
   return 0;
}
