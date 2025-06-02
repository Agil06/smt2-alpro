#include <stdio.h>




void InsertionSort(int T[], int N) {
    int i, pass, temp;

    for (pass = 1; pass < N; pass++) {
        temp = T[pass];
        i = pass - 1;

        while (i > 0 && temp < T[i]) {
            T[i + 1] = T[i];
            i--;
        }

        if (temp >= T[i]){
            T[i+1] = temp;
        } else {
            T[i+1] = T[i];
            T[i] = temp;
        }
        
    }

    for (i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
}

int main() {
    int T[7] = {5, 4, 7, 6, 2, 3, 1};
    int N = 7;


    printf("Sebelum Sorting:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    printf("Setelah Sorting:\n");
    InsertionSort(T, N);

    return 0;
}
