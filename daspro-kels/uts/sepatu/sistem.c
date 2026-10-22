#include "header.h"

//fungsi untuk isi per data inpt obat
sepatu dataSepatu(){
    sepatu data;

    scanf("%s", data.namaSpeatu);
    scanf("%s", &data.asal);
    scanf("%lf", &data.harga);

    return data;
}