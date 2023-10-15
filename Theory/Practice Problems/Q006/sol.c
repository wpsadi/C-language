// to check if a number is odd or even

#include <stdio.h>

int main(){
    printf("Enter th number that you want to check : ");

    int num;
    scanf("%d",&num);

    printf("\n\n");

    if (num % 2 == 0)
    {
        printf("%d is Even", num);
    }
    else
    {
        printf("%d is ODD", num);
    }

    return 0;
}