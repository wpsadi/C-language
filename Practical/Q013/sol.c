// 1D and 2D array

#include <stdio.h>

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int arr2[5][2] = {{1,1}, {1.2}, {1.3}, {1,4}, {1,5}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<2; j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}