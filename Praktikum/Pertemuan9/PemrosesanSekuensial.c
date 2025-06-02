/*Nama File 	: TugasSeqAndSearch.c*/
/*Deskripsi 	: Tugas Laprak Pemrosesan Sekuensial dan Searching*/
/*Pembuat   	: Agil Yudis Wibawa - 24060124120045*/
/*Tgl Pembuatan	: 7:34 PM 5/19/2025*/

#include <stdio.h> /*header file*/

/*SubProgram*/

void RataRata(int TABNILAI[], int N, char TABMARK[])
{
    for (int i = 0; i < N; i++)
    {
        if (TABNILAI[i] >= 80)
            TABMARK[i] = 'A';
        else if (TABNILAI[i] >= 70)
            TABMARK[i] = 'B';
        else if (TABNILAI[i] >= 55)
            TABMARK[i] = 'C';
        else if (TABNILAI[i] >= 40)
            TABMARK[i] = 'D';
        else
            TABMARK[i] = 'E';
    }

    int Total = 0;
    for (int i = 0; i < N; i++) {
        Total += TABNILAI[i];
    }
    printf("Rata-rata: %.2f\n", (float)Total / N);
    printf("Nilai Huruf: ");
    for (int i = 0; i < N; i++) {
        printf("%c ", TABMARK[i]);
    }
    printf("\n");
}

/*Program Utama*/
int main()
{
    /*Kamus*/
    int TABNILAI[4] = {100, 76, 98, 40, 56, 45};
    char TABMARK[4];
    int N = 4;

    /*Algoritma*/
    RataRata(TABNILAI, N, TABMARK);

    // Hitung frekuensi relatif
    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;
    for (int i = 0; i < N; i++) {
        switch (TABMARK[i]) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            case 'E': countE++; break;
        }
    }
    printf("Frekuensi relatif:\n");
    printf("A: %.2f\n", (float)countA / N);
    printf("B: %.2f\n", (float)countB / N);
    printf("C: %.2f\n", (float)countC / N);
    printf("D: %.2f\n", (float)countD / N);
    printf("E: %.2f\n", (float)countE / N);

    return 0;
}

