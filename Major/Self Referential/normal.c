#include <stdio.h>

typedef struct body{
    char name[100];
    int age;

}b;

int main(){
    b val1 = {"gigachad1",32};
    b val2 = {"gigachad2",60};
    b val3 = {"gigachad3",50};
    b val4 = {"gigachad4",16};

    b *ptr = &val1;
    b **ptr2 = &ptr;
    printf("%d\n",(**ptr2).age);
    printf("%d\n",(*ptr2)->age);
}