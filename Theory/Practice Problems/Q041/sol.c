// enter price of 3 items & print theior final cost with gst

#include <stdio.h>

int main(){
    int arr[3];

    for (int i = 0; i< 3; i++){
        printf("Enter the value to be put in array : ");
        scanf("%d",&arr[0]);

        printf("\n");
    }

    printf("Your array is : %d, %d, %d", arr[0], arr[1], arr[2]);
    return 0;
}