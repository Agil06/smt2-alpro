/*Nama File    	: FrekNilTabel.c*/
/*Deskripsi   	: Menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali*/
/*Pembuat    	: 24060124120045-Agil Yudis Wibawa*/
/*Tgl Pembuatan	: 7:19 AM 3/18/2025*/


#include <stdio.h>
#include <stdlib.h>

/*Program Utama*/
int main() {
    int ukuran, i , nmax;
    int *tabel, *frek;

    /*Algoritma*/
    printf("Masukkan ukuran: ");
    scanf("%d", &ukuran);

    if (ukuran <= 0) {
        printf("Ukuran tabel harus lebih dari 0.");
    }
    else {
        tabel = (int *)malloc(ukuran * sizeof(int));
        nmax = 0;
        for (i = 0; i < ukuran; i++){
            printf("Masukan elemen ke-%d: ", i);
            scanf("%d", &tabel[i]);
            if (tabel[i] > nmax){
                nmax = tabel[i];
            }
        }

        frek = (int*)calloc(nmax + 1, sizeof(int));
        for (i = 0; i < ukuran; i++){
            frek[tabel[i]]++;
        }
        printf("\nElemen yang frekuensinya lebih dari satu kali:\n");
        for (i = 0; i <= nmax; i++){
            if (frek[i] > 1){
                printf("%d muncul %d kali\n", i, frek[i]);
            }
        }
        free(tabel);
        free(frek);
    }
    return 0;
}
