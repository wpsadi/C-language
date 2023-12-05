// passing array through function

#include <stdio.h>

void printArray(int l[], int length);

int main(){
    int arr[5] = {1,2,3,4,5};
    printArray(arr,5);

    return 0;
}

void printArray(int l[], int length){
    for(int i = 0; i < length; i++){
        printf("%d, ",l[i]);
    }
}