#include <stdio.h>

int main()
{
    int a = 1;
    switch (a)
    {
    case 0:
        printf("choice is 0");
        break;
    case 1:
        printf("choice is 1");
        break;
    default:
        printf("default choice:");
        break;
    }
    return 0;
}