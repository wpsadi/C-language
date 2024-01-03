#include <stdio.h>

#define cap 10

int arr[cap];
int top = 0;

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

void push(int x){
    arr[top++] = x;
    return;
}

void pop(){
    printf("popped : %d",arr[--top]);
    return;
}


int main(){
    push(3);
    push(4);
    pop();
    isEmpty();
    return 0;
}