//print "hello" and "good bye" using functions

#include <stdio.h>

void Hello();
void Bye();

int main(){
   Hello();
   Bye();
   return 0;
}

void Hello(){
   printf("hi\n");
}

void Bye(){
   printf("Good Bye\n");
}