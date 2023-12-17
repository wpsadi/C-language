// matrix multiplication

#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("input.txt","a");
    // fprintf(fptr,"hi");
    char str;
    fscanf(fptr,"%c",str);
    printf("%c",str);

    fclose(fptr);
}