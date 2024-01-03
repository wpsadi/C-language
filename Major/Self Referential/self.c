#include <stdio.h>
#include <string.h>

typedef struct body{
    char name[100];
    int age;
    struct body *ptr;

}b;

int main(){
    b val1;
    strcpy(val1.name,"aditya");
    val1.age = 10;
    val1.ptr = NULL;
    b val2 = {"gigachad2",60};
    val1.ptr = &val2;

    b *ptr = &val1;
    b **ptr2 = &ptr;
    // printf("%d\n",(**ptr2).age);
    printf("%d\n",val1.ptr->age);
}