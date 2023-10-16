// Pointers

#include <stdio.h>

int main()
{
    int a = 100;

    int *x = &a; // while assignment "*" means value of pointer and "& means" address on memmory

    printf("%p", &a);
    printf("\n%p", x); // print hex values
    printf("\n%p", &x);

    printf("\n\n%u", &a);
    printf("\n%u", x); // print integer address
    printf("\n%u", &x);

    printf("\n%u", *(&a));
    return 0;
}
