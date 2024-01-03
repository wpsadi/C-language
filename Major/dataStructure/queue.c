#include <stdio.h>

#define cap 10

int arr[cap];
int top = 0;
int deQ = 0;

int isfull(){
    if (top == (cap-1)){
        return 1;
    }
    return 0;
}

int isEmpty(){
    if (top == 0){
        return 1;
    }
    return 0;
}

void insert(int x){
    arr[top++] = x;
    return;
}

void delete(){
    printf("popped : %d",arr[deQ++]);
    return;
}


int main(){
    insert(4);
    insert(3);
    delete();
    isEmpty();
    return 0;
}