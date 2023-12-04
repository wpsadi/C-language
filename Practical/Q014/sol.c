// function
#include <stdio.h>

void french();
void indian();

int main()
{

   printf("Enter User Origin (f and i): ");

   char origin;
   // char origin = ' ';
   scanf("%c", &origin);

   printf("\n\n");

   if (origin == 'i'){
      indian();
   }
   else if (origin == 'f'){
      french();
   }
   else{
      printf("Martian Species Detected");
   }

   return 0;
}

void french()
{
   printf("Bonjour\n");
}

void indian()
{
   printf("Namaste\n");
}