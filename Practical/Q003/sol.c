// We hae to use modify operators (i++, ++i, --i, i--)

#include <stdio.h>

int main(){
    int i = 1;
    while (i <= 10){
        printf("value of i is : %d \n",i);
        i++;
    }
    return 0;
}