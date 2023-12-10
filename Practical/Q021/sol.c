// file write

#include <stdio.h>

int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("data.txt", "w");

    ch = 'M';
    fprintf(fptr, "%c", ch);
    fclose(fptr);
    return 0;
}