#include <stdio.h>
#include <string.h>

typedef struct body
{
    char name[100];
    int age;
} b;

int main()
{
    char string[100];
    printf("Enter string you want to save in structure : ");

    b val1;
    val1.age = 10;
    strcpy(val1.name, gets(string));
    printf("\n\n");

    printf("this is stored in structure :%s", val1.name);
}