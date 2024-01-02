// matrix multiply

#include <stdio.h>

int main()
{
    int arr1[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int arr2[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            int sum = 0;
            for (int j = 0; j < 3; j++)
            {
                sum += arr1[k][j] * arr2[j][k];
                // printf("%d ",arr1[i][j]*arr2[j][i]);
            }
            printf("%d ",sum);
        }
    }
}