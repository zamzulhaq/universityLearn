#include "header.h"

int main() {
    char metode[20];
    kandidat data1[50], data2[50], data3[50];
    kandidat gabung[150];
    int n1, n2, n3;
    int atas, bawah, cari;

    scanf("%s", metode);

    scanf("%d", &n1);
    for (int i = 0; i < n1; i++) {
        scanf("%s %d %d %s %d", data1[i].nama, &data1[i].pengalaman, &data1[i].kemampuanBahasa, &data1[i].negaraAsal, &data1[i].kelakuanBaik);
    }

    scanf("%d", &n2);
    for (int i = 0; i < n2; i++) {
        scanf("%s %d %d %s %d", data2[i].nama, &data2[i].pengalaman, &data2[i].kemampuanBahasa, data2[i].negaraAsal, &data2[i].kelakuanBaik);
    }

    scanf("%d", &n3);
    for (int i = 0; i < n3; i++) {
        scanf("%s %d %d %s %d", data3[i].nama, &data3[i].pengalaman, &data3[i].kemampuanBahasa,  data3[i].negaraAsal, &data3[i].kelakuanBaik);
    }

    
    scanf("%d", &atas);
    scanf("%d", &bawah);
    scanf("%d", &cari);

    
    hitungRata(data1, n1);
    hitungRata(data2, n2);
    hitungRata(data3, n3);

    
    int totalData = satuin(data1, n1, data2, n2, data3, n3, gabung);

    
    pengurutan(gabung, totalData);

    
    penampilanData(gabung, totalData);

    
    printf("\nDaftar dalam range %d-%d:\n", bawah, atas);
    for (int i = 0; i < totalData; i++) {
        if (gabung[i].totalRata >= bawah && gabung[i].totalRata <= atas) {
            printf("%s %d %d %s %d %d\n", gabung[i].nama, gabung[i].pengalaman, gabung[i].kemampuanBahasa, gabung[i].negaraAsal, gabung[i].kelakuanBaik, gabung[i].totalRata);
        }
    }

    scrh(gabung, totalData, cari);

    return 0;
}