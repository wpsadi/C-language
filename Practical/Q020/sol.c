// file read

#include <stdio.h>

int main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("data.txt", "r");

    if (fptr == NULL)
    {
        printf("no file exist");
        return 0;
    }
    for (int i = 0; i< 7; i++){
        fscanf(fptr, "%c", &ch);
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}