#include <stdio.h>

int lenCharArr(char arr[]);// calculates the length of the array
void revCharArr(char arr[]);// swaps the characters in the array

int main(){
    // char x = '*';
    char charArr[] = {"aditya is legend"};

    revCharArr(charArr);
    
    printf("%s", charArr);

    return 0;
}

int lenCharArr(char arr[]){
    int i = 0, count = 0;

    while ( arr[i] != '\0'){
        i++;
        count++;
    }
    return count;
}

void revCharArr(char arr[]){
    int lenArr = lenCharArr(arr);

    int nearestEven = lenArr - (lenArr%2);
    printf("%d\n",nearestEven);

    for (int i = 0 ; i < (nearestEven)/2; i++){
        char x = arr[i]; // creates a copy of the the term from the starting

        arr[i] = arr[lenArr-i-1] ; // replaces term from starting to the end 

        arr[lenArr-i-1] = x;

    }
}