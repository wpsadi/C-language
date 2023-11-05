// count odd numbers in array

#include <stdio.h>

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9,11,13,12,14};

    int count = 0;

    for (int i = 0; i< 10; i++){
        if (array[i] % 2 != 0){
            count++;
        }
    }

    printf("value of count is : %d", count);

    return 0;
}