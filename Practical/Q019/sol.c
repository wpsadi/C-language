// concept of string

#include <stdio.h>

int main(){
    char str[100];
    printf("Enter your name :");
    gets(str);
    // scanf("%s",&str);
    printf("\n\n");

    printf("Your name is %s",str);
    return 0;
}