// reverse array

#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 4, 5, 5, 6, 6};

    printf("here is reverse array : {");

    for (int i = 8; i >= 0; i--)
    {
        
        if (i == 0)
        {
            printf("%d", array[i]);
            break;
        }
        printf("%d,", array[i]);
    }

    printf("}");

    return 0;
}