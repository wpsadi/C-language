// use of bitwise operator (&,!,~,^,>>,<<)

#include <stdio.h>

int main()
{
    int x = -1;
    int y = x << 5;

    printf("The value of x using (~) is %d\n", ~(x));

    return 0;
}