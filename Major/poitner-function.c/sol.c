#include <stdio.h>
#include <stdlib.h>

void dma(){
    char *str = (char *)malloc(sizeof(char)*10);
    str = "adityagoel";


    char *str2 = (char *)calloc(2,sizeof(char));
    str2[0] = 'a';
    str2[1] = 'a';
    printf("%s",str2);
    return ;
}

int main(){
    dma();
    return 0;
}