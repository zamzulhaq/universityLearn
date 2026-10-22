#include "header.h"

//fungsi untuk isi per data inpt obat
obat dataObat(){
    obat isi;

    scanf("%s", isi.namaObat);
    scanf("%s", &isi.kategori);
    scanf("%lf", &isi.stok);

    return isi;
}