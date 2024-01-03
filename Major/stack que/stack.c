#include <stdio.h>

int *push(int arr[],int x,int length){
    static int *stack = (int *)calloc((5),sizeof(int));
    for (int i= 0; i<length;i++){
        stack[i] = arr[i];
    }
    stack[length] = x;
    return &stack;
}

int main(){
    int arr[2] = {1,2}
    arr = push(arr,3,2);
    
    return 0;
}