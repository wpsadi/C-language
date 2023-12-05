// Palindrome or not
// Number is same from both sides

#include <stdio.h>
#include <string.h>

int main()
{
    int num = 123;

    // printf("\n\n");

    int x = num;

    int rem = x % 10;
    x = x / 10;

    int arr[3];
    int i = 0;

    while (x > 10)
    {
        arr[i] = rem;
        i++;
        rem = x % 10;
        x = x / 10;
    }
    arr[i] = rem;
    i++;
    arr[i] = x;

    int status = 0;

    for (int i = 0; i < 3;i++){
        if (arr[i] != arr[3-1-i]){
            status = 1;
        }
    }

    if (status == 0){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }

    return 0;
}
