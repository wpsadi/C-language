// jump statement

#include <stdio.h>

int main()
{
    // break;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d", i);
    }
    printf("\n\nBreak and continue at 5\n\n");

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d", i);
    }
    return 0;
}