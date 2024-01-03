#include <stdio.h>

int main(){
    int r1 =3, c1 =3, r2=3, c2=3;

    int arr1[3][3] = {{12,8,4},{3,17,14},{9,8,10}};
    int arr2[3][3] = {{5,19,3},{6,15,9},{7,8,16}};

    if (c1 !=r2){
        printf("Not Possible");
        return 0;
    }


    for (int i = 0; i<r1; i++){
        for (int j=0; j<c1; j++){
            int sum = 0;
            for (int k = 0; k<c2; k++){
                sum += (arr1[i][k]*arr2[k][j]);
            }
            printf("%d ",sum);

        }
        printf("\n");
    }
    

    
    return 0;
}