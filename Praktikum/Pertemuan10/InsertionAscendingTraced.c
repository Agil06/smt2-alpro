//Nama File         : Insertion Sort
//Deskripsi         : Algoritma Insertion Sort
//Pembuat           : Syafiq Abiyyu Taqi
//Tanggal Pembuatan : Kamis, 30 Mei 2024
#include <stdio.h>

void InsertionSort(int T[], int N){
    // Kamus Lokal
    int i;
    int pass;
    int temp;
    int iterasi; // Tambahan untuk menghitung iterasi while

    // Algoritma
    for (pass = 2; pass <= N; pass++){
        temp = T[pass-1];
        i = pass-2;
        iterasi = 0; // Reset iterasi setiap pass
            
        printf("\nPass %d:\n", pass);
        printf("  Mulai: temp=%d, i=%d, T[i]=%d\n", temp, i, T[i]);

        while (1) {
            int cond1 = (i >= 0);
            int cond2 = cond1 ? (temp < T[i]) : 0;
            printf("    Cek: i=%d, temp=%d, T[i]=%d | (i>=0)? %s, (temp<T[i])? %s\n",
                   i, temp, cond1 ? T[i] : -1,
                   cond1 ? "true" : "false",
                   cond2 ? "true" : "false");

            if (!(cond1 && cond2)) break;

            T[i+1] = T[i];
            printf("      T[%d] <- T[%d]: ", i+1, i);
            for (int k = 0; k < N; k++) printf("%d ", T[k]);
            printf("\n");
            i--;
            iterasi++; // Tambah iterasi setiap kali while berjalan
        }
        T[i+1] = temp;
        printf("  Insert temp=%d at T[%d]: ", temp, i+1);
        for (int k = 0; k < N; k++) printf("%d ", T[k]);
        printf("\n");
        printf("  Jumlah iterasi pada pass %d: %d\n", pass, iterasi);
    }

    printf("\nHasil akhir: ");
    for (i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
    printf("\n");
}

int main(){
    // Kamus Lokal
    int T[5] = {10, 18, 1, 11 ,9};
    int N = 5;

    // Algoritma
    // Sebelum Sorting
    printf("Sebelum Sorting : ");
    for (int i = 0; i < N; i++){
        printf("%d ", T[i]);
    }

    // Sesudah Sorting
    printf("\nSesudah Sorting : ");
    InsertionSort(T, N);

    return 0;
}