// logical Operators (&&, !, ||)

// there is no true-false in c

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;

    printf("Value of %d && %d is %d", a, b, a && b);
    printf("\n");
    printf("Value of %d || %d is %d", a, b, a || b);
    printf("\n");
    printf("Value of !%d , !%d id %d, %d", a,b,!a,!b);
    return 0;
}