// find leap year using conditional operator

#include <stdio.h>

int leap(int year);

int main(){
    printf("Enter Year to check : ");

    int year = 2002;
    // scanf("%d",&year);

    int status = leap(year);

    printf("\n\n The year you enter is : ");

    if (status == 1){
        printf("Leap Year");
    }
    else{
        printf("Not Leap year");
    }
    return 0;
}

int leap(int year){
    if (year % 400 == 0){
        return 1;
    }
    else if (year % 400 != 0 && year % 4 == 0){
        return 1;
    }
    return 0;
}