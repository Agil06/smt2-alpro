#include <stdio.h>

//  define tipe data baru bernama Mahasiswa
typedef struct{
    char nama[50];
    int umur;
    char jurusan[50];
    float ipk;
} Mahasiswa;

int main() {
    Mahasiswa mhs1; // Deklarasi variabel mhs1 bertipe Mahasiswa
    // Insialisasi variabel mhs1
    strcpy(mhs1.nama, "Budi"); // menginisialisasi nama mhs1
    mhs1.umur = 20; // menginisialisasi umur mhs1
    strcpy(mhs1.jurusan, "Teknik Informatika"); // menginisialisasi jurusan mhs1
    mhs1.ipk = 3.5; // menginisialisasi IPK


    Mahasiswa mhs[10]; // Deklarasi array mhs bertipe Mahasiswa
    // Insialisasi array mhs
    for (int i = 0; i < 10; i++) {
        scanf("%s ", mhs[i].nama); // menginisialisasi nama mhs[i]
        scanf("%d ", &mhs[i].umur); // menginisialisasi umur mhs[i]
        scanf("%s ", mhs[i].jurusan); // menginisialisasi jurusan mhs[i]
        scanf("%f ", &mhs[i].ipk); // menginisialisasi IPK mhs[i]
    }
    return 0;
}

