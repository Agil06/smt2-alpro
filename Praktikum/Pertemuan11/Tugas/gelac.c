#include <stdio.h>
#include "gelas.h"

void isiPenuh(Gelas* g) {
    g->isi = g->kapasitas;
}

void kosongkan(Gelas* g) {
    g->isi = 0;
}

void isiDengan(Gelas* g, int volume) {
    if (volume < 0) {
        printf("Volume tidak boleh negatif.\n");
        return;
    }
    if (g->isi + volume > g->kapasitas) {
        printf("Tidak bisa mengisi gelas melebihi kapasitas.\n");
        return;
    }
    g->isi += volume;
}

void tuangKe(Gelas* dari, Gelas* ke) {
    if (dari->isi == 0) {
        printf("Gelas sumber kosong.\n");
        return;
    }
    if (ke->isi == ke->kapasitas) {
        printf("Gelas tujuan sudah penuh.\n");
        return;
    }
    
    int volumeYangDitampung = ke->kapasitas - ke->isi;
    if (dari->isi <= volumeYangDitampung) {
        ke->isi += dari->isi;
        dari->isi = 0;
    } else {
        dari->isi -= volumeYangDitampung;
        ke->isi = ke->kapasitas;
    }
}

void tampilkanStatus(const Gelas* g) {
    printf("Kapasitas: %d ml, Isi saat ini: %d ml\n", g->kapasitas, g->isi);
}