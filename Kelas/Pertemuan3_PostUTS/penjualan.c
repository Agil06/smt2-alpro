/*Nama File    	: penjualan.c*/
/*Deskripsi   	: Berisi berbagai fungsi untuk menampilkan hasil penjualan yang telah diketahui dari tiga kota dari Januari sampai April.*/
/*Pembuat    	: 24060124120045-Agil Yudis Wibawa*/
/*Tgl Pembuatan	: 9:18 AM 5/6/2025*/

#include <stdio.h> /*header file*/

// Menentukan integer untuk nama KOTA dan BULAN
#define KOTA 3
#define BULAN 4

// Deklarasi array untuk nama bulan dan kota
char *Kota[KOTA] = {"Jakarta", "Semarang", "Pati"};
char *Bulan[BULAN] = {"Januari", "Februari", "Maret", "April"};

/* Masukkan nilai penjualan sesuai dengan indeks pertama (baris) sebagai
indeks kota dan indeks kedua (kolom) sebagai indeks bulan
TABEL_PENJUALAN[KOTA][BULAN] */

int TABEL_PENJUALAN[KOTA][BULAN] = {
    {10, 20, 15, 15},  // Penjualan Jakarta
    {7, 10, 8, 3},     // Penjualan Semarang
    {10, 10, 12, 8}    // Penjualan Pati
};

// Prototype Fungsi
void penjKotaTerbesar(int totalPenjualan[], int jumlahKota);
void penjBulanTerbesar(int totalPenjualan[], int jumlahBulan);
void rataRataPenjualanKota(int penjualan[KOTA][BULAN], int jumlahKota, int jumlahBulan);
void penjTerbesarDiKota(int penjualan[KOTA][BULAN], int jumlahKota, int jumlahBulan);
void penjTerbesarDiBulan(int penjualan[KOTA][BULAN], int jumlahKota, int jumlahBulan);
void terendahDanTertinggi(int penjualan[KOTA][BULAN], int jumlahKota, int jumlahBulan);


/* Program Utama */
int main(void) 
{
    /*kamus*/
    // Tabel variabel untuk menampung Jumlah Penjualan
    int jumPenjKota[KOTA] = {0};
    int jumPenjBulan[BULAN] = {0};

    // Cetak tabel penjualan menggunakan nested loop
    printf("Data Penjualan:\n");
    for (int i = 0; i < KOTA; i++) 
    {
        for (int j = 0; j < BULAN; j++) 
        {
            printf("%d,", TABEL_PENJUALAN[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Hitung jumlah penjualan untuk tiap kota
    for (int i = 0; i < KOTA; i++)
    {
        for (int j = 0; j < BULAN; j++)
        {
            jumPenjKota[i] += TABEL_PENJUALAN[i][j];
        }
    }
    
    // Hitung jumlah penjualan untuk tiap bulan
    for (int j = 0; j < BULAN; j++) {
        for (int i = 0; i < KOTA; i++) {
            jumPenjBulan[j] += TABEL_PENJUALAN[i][j];
        }
    }

    // Total penjualan tiap kota
    for (int i = 0; i < KOTA; i++) {
        printf("Total penjualan di %s: %d\n", Kota[i], jumPenjKota[i]);
    }

    // Total penjualan tiap bulan
    for (int j = 0; j < BULAN; j++) {
        printf("Total penjualan di %s: %d\n", Bulan[j], jumPenjBulan[j]);
    }

    // Tampilkan penjualan rata-rata, tertinggi dan terendah untuk tiap kota
    rataRataPenjualanKota(TABEL_PENJUALAN, KOTA, BULAN);

    // Tampilkan penjualan tertinggi tiap bulan dan di kota mana
    penjTerbesarDiKota(TABEL_PENJUALAN, KOTA, BULAN);

    // Tampilkan penjualan tertinggi tiap kota dan di bulan mana
    penjTerbesarDiBulan(TABEL_PENJUALAN, KOTA, BULAN);

    // Cari dan tampilkan penjualan tertinggi di kota mana
    penjKotaTerbesar(jumPenjKota, KOTA);

    // Cari dan tampilkan penjualan tertinggi di bulan mana
    penjBulanTerbesar(jumPenjBulan, BULAN);

    // Cari dan tampilkan penjualan tertinggi dan terendah di tabel beserta koordinatnya
    terendahDanTertinggi(TABEL_PENJUALAN, KOTA, BULAN);

    return 0;
}

/* Algoritma */
void penjKotaTerbesar(int totalPenjualan[], int jumlahKota) {
    int maxSales = totalPenjualan[0];
    int maxCityIndex = 0;

    for (int i = 1; i < jumlahKota; i++) {
        if (totalPenjualan[i] > maxSales) {
            maxSales = totalPenjualan[i];
            maxCityIndex = i;
        }
    }

    printf("\nKota dengan total penjualan tertinggi adalah: %s\n", Kota[maxCityIndex]);
}

void penjBulanTerbesar(int totalPenjualan[], int jumlahBulan) {
    int maxSales = totalPenjualan[0];
    int maxMonthIndex = 0;

    for (int i = 1; i < jumlahBulan; i++) {
        if (totalPenjualan[i] > maxSales) {
            maxSales = totalPenjualan[i];
            maxMonthIndex = i;
        }
    }

    printf("Bulan dengan total penjualan tertinggi adalah: %s\n", Bulan[maxMonthIndex]);
}

void rataRataPenjualanKota(int penjualan[KOTA][BULAN], int jumlahKota, int jumlahBulan) {
    for (int i = 0; i < jumlahKota; i++) {
        int maxSales = penjualan[i][0];
        int minSales = penjualan[i][0];
        int totalPenjualan = 0;

        for (int j = 0; j < jumlahBulan; j++) {
            if (penjualan[i][j] > maxSales) {
                maxSales = penjualan[i][j];
            }
            if (penjualan[i][j] < minSales) {
                minSales = penjualan[i][j];
            }
            totalPenjualan += penjualan[i][j];
        }

        float avgSales = (float)totalPenjualan / jumlahBulan;
        printf("\nKota: %s\n", Kota[i]);
        printf("  Penjualan Tertinggi: %d\n", maxSales);
        printf("  Penjualan Terendah: %d\n", minSales);
        printf("  Rata-rata Penjualan: %.2f\n", avgSales);
    }
}

void penjTerbesarDiKota(int penjualan[KOTA][BULAN], int jumlahKota, int jumlahBulan) {
    for (int j = 0; j < jumlahBulan; j++) {
        int maxSales = penjualan[0][j];
        int maxCityIndex = 0;

        for (int i = 1; i < jumlahKota; i++) {
            if (penjualan[i][j] > maxSales) {
                maxSales = penjualan[i][j];
                maxCityIndex = i;
            }
        }

        printf("\nBulan: %s\n", Bulan[j]);
        printf("  Penjualan Tertinggi: %d (Kota: %s)\n", maxSales, Kota[maxCityIndex]);
    }
}

void penjTerbesarDiBulan(int penjualan[KOTA][BULAN], int jumlahKota, int jumlahBulan) {
    for (int i = 0; i < jumlahKota; i++) {
        int maxSales = penjualan[i][0];
        int maxMonthIndex = 0;

        for (int j = 1; j < jumlahBulan; j++) {
            if (penjualan[i][j] > maxSales) {
                maxSales = penjualan[i][j];
                maxMonthIndex = j;
            }
        }

        printf("\nKota: %s\n", Kota[i]);
        printf("  Penjualan Tertinggi: %d (Bulan: %s)\n", maxSales, Bulan[maxMonthIndex]);
    }
}

void terendahDanTertinggi(int penjualan[KOTA][BULAN], int jumlahKota, int jumlahBulan) {
    int minSales = penjualan[0][0], maxSales = penjualan[0][0];
    int minCity = 0, minMonth = 0, maxCity = 0, maxMonth = 0;

    for (int i = 0; i < jumlahKota; i++) {
        for (int j = 0; j < jumlahBulan; j++) {
            if (penjualan[i][j] < minSales) {
                minSales = penjualan[i][j];
                minCity = i;
                minMonth = j;
            }
            if (penjualan[i][j] > maxSales) {
                maxSales = penjualan[i][j];
                maxCity = i;
                maxMonth = j;
            }
        }
    }

    printf("\nPenjualan Terendah: %d (Kota: %s, Bulan: %s)\n", minSales, Kota[minCity], Bulan[minMonth]);
    printf("Penjualan Tertinggi: %d (Kota: %s, Bulan: %s)\n", maxSales, Kota[maxCity], Bulan[maxMonth]);
}
