// goto function

#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("hecker.txt", "a");
    char ch = 'a';
    fprintf(fptr," hi there");
    fclose(fptr);
    return 0;
}