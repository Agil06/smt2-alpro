#include <stdio.h>
#include "gelas.h"

int main() {
    Gelas gelas1, gelas2;

    // Inisialisasi gelas
    gelas1.kapasitas = 500; // Kapasitas 500 ml
    gelas1.isi = 0;         // Isi awal 0 ml

    gelas2.kapasitas = 300; // Kapasitas 300 ml
    gelas2.isi = 0;         // Isi awal 0 ml

    // Mengisi gelas1 hingga penuh
    isiPenuh(&gelas1);
    tampilkanStatus(&gelas1);

    // Mengisi gelas2 dengan 200 ml
    isiDengan(&gelas2, 200);
    tampilkanStatus(&gelas2);

    // Menuangkan isi dari gelas1 ke gelas2
    tuangKe(&gelas1, &gelas2);
    tampilkanStatus(&gelas1);
    tampilkanStatus(&gelas2);

    // Mengosongkan gelas1
    kosongkan(&gelas1);
    tampilkanStatus(&gelas1);

    return 0;
}