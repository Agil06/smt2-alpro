#include <stdio.h> /*header file*/

void BubbleSort(int T[], int N){
    // Kamus Lokal
    int i, k;
    int pass;
    int temp;

    // Algoritma
    for (pass = 0; pass < N-1; pass++){
        printf("Pass %d:\n", pass+1);
        for (k = 0; k < N-1-pass; k++){
            printf("  Cek: T[%d]=%d > T[%d]=%d ? %s\n", k, T[k], k+1, T[k+1], (T[k] > T[k+1]) ? "true" : "false");
            if (T[k] > T[k+1]){
                printf("    Swap T[%d]=%d dan T[%d]=%d\n", k, T[k], k+1, T[k+1]);
                temp = T[k];
                T[k] = T[k+1];
                T[k+1] = temp;
            } else {
                printf("    Tidak swap\n");
            }
            printf("    State array: ");
            for (i = 0; i < N; i++) printf("%d ", T[i]);
            printf("\n");
        }
    }

    printf("Hasil akhir: ");
    for (i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
    printf("\n");
}

int main(){
    int T[4] = {2, 1, 4, 3};
    int N = 4;

    printf("Sebelum Sorting : ");
    for (int i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
    printf("\nSesudah Sorting :\n");
    BubbleSort(T, N);

    return 0;
}