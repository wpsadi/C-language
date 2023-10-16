// print percentage for maths, science, sanskrit

#include <stdio.h>

int main()
{
    printf("Enter Marks in Maths : ");

    float math, science, sans;
    math = 90.00, science = 89.00, sans = 84.00;
    // scanf("%d",&math);

    printf("\n\n");

    printf("Enter Marks in science : ");
    // scanf("%d",&science);

    printf("\n\n");

    printf("Enter Marks in Sanskrit : ");
    // scanf("%d",&sans);

    printf("\n\n");

    printf("Percentage : %f", (math + science + sans) / 3.00);

     return 0;
}