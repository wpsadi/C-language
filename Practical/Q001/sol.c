// take 2 numbers using scanf and print their sum using printf

#include <stdio.h>

int main(){
    printf("Enter the values to find their sum : \n");

    printf("Enter value of a :");

    int a,b;
    scanf("%d",&a);

    printf("Enter value of b :");
    scanf("%d",&b);

    printf("\n\n");


    printf("\nThe sum of the two numbers is : %d",a+b);
    return 0;
}