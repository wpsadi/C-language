#include <stdio.h>

int binary(int arr[], int x, int length)
{
    int l = 0, r = length - 1;
    while (l <= r){
        int mid = (l + r) / 2;
        if (x == arr[mid]){
            return 1;
        }
        else if (x < arr[mid]){
            r = mid-1;
        }
        else{
            l = mid + 1;
        }
    }
    if (l > r){
        return 0;
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 7, 8, 9};
    int a = 6;
    printf("%d is the response from binary srch", binary(arr, a, 8));
    return 0;
}