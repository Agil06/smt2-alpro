/*Nama File 	: IsiMatrik.c*/
/*Deskripsi 	: Program ini mengisi array dua dimensi yang merepresentasikan
                  matriks diagonal, dengan segitiga bawah 1 dan segitiga atas 0.*/
/*Pembuat   	: <24060124120045-Agil Yudis Wibawa>*/
/*Tgl Pembuatan	: <>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Kamus*/
    int M, N;
    
    /*Algoritma*/
    printf("Masukkan jumlah baris (M): ");
    scanf("%d", &M);
    printf("Masukkan jumlah kolom (N): ");
    scanf("%d", &N);
    
    if (M != N) {
        printf("Nilai M dan N harus sama\n");
        return 1; // Keluar program dengan kode error
    }
    
    int **matriks = (int **)malloc(M * sizeof(int *));
    for (int i = 0; i < M; i++) {
        matriks[i] = (int *)malloc(N * sizeof(int));
    }
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                matriks[i][j] = 1; // Diagonal utama
            } else if (i < j) {
                matriks[i][j] = 0; // Atas diagonal utama
            } else {
                matriks[i][j] = 2; // Bawah diagonal utama
            }
        }
    }
    
    printf("\nMatriks hasil:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matriks[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < M; i++) {
        free(matriks[i]);
    }
    free(matriks);
    
    return 0;
}
