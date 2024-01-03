#include <stdio.h>
#include <string.h>

typedef struct body {
    char name[100];
    int age;
    struct body *ptr;
}sut;

int main(){
    sut var1;
    var1.age = 10;
    var1.ptr = NULL;
    strcpy(var1.name,"aditya");

    sut var2 = {"ishant",20};
    var1.ptr = &var2;

    // sut *ptr = &var2;
    printf("%d",var1.ptr->age); //20
    return 0;
}