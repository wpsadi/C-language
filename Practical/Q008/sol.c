// if else elseif

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if((age > 0) && (age < 18)){
        printf("You are a minor");
    }
    else if(age >=18){
        printf("You are eligible to vote");
    }
    else{
        printf("We detected a vague age. Please check your birth certificate");
    }
    return 0;
}