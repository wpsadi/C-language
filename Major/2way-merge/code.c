#include <stdio.h>

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[3] = {2, 4, 5};
    int arr2[3] = {1, 3, 6};

    int arr3[6];
    int i = 0, j = 0, m = 3, n = 3, k = 0;

    while (i < 3 && j < 3) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
            printf("%d",arr3[k-1]);
        } else {
            arr3[k++] = arr2[j++];
            printf("%d",arr3[k-1]);
        }
    }



    // printf(arr3, 6);

    return 0;
}