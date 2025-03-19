#include <stdio.h>
//MULTIDIMENSION ARRAY
int main(void){
    int layar[10][10];

    int layar2[3][3] = {{1,2,3},
    {1,2,3},
    {1,2,3}};

    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", layar2[i][j]); // Corrected printf statement
        }
        printf("\n"); // Added to format the output as a matrix
    }
}
