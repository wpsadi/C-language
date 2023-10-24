#include <stdio.h>

 int main(){
    int array[10];
    // here array is also a pointer
    int *ptr = array;

    printf("%d",ptr);
    printf("\n%d",&ptr);

    // for (int i = 0; i<= 10; i++){
    //     int *ptr = i;
    //     ptr++
    // }

    return 0;
 }