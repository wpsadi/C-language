#include <stdio.h>

int swap(int *ptr1,int *ptr2){
    int temp1 = *ptr1;
    int temp2 = *ptr2;
    *ptr1 = temp2;
    *ptr2 = temp1;
}

void print(int arr[],int n){
    for (int i = 0; i < n; i++){
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

 int main(){
    int arr[5] = {5,3,2,1,4};
    print(arr,5);
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
        if (arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
        }}
    }
    print(arr,5);
    return 0;
 }