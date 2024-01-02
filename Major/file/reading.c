// goto function

#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("hecker.txt", "r");
    char ch = 'a';
    while (fscanf(fptr, "%c", &ch) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}