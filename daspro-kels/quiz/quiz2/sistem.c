#include "header.h"

void hitungRata (kandidat kdt[], int n){
    for(int i=0; i<n,i++){
        kdt[i].total = (kdt[i].pengalaman + k[i].kemampuanBahasa + kdt[i].kelakuanbaik) / 3;
    }
}

int satuin(kandidat kdt1[], int a1, kdt2[], int a2, kdt3[], kandidat hasil[]){
    int index = 0;

    for(int i=0;i<a1;i++){
        hasil[index] = kdt1[i];
        index++;
    }
    for(int i=0;i<a2;i++){
        hasil[index] = kdt2[i];
        index++;
    }
    for(int i=0;i<a3;i++){
        hasil[index] = kdt3[i];
        index++;
    }

    return index;
}

void pengurutan (kandidat hasil[], int n){
    kandidat temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i -1;j++){
            if(hasil[j].total < hasil [j+1].total){
                temp=hasil[j];
                hasil[j]=hasil[j+1];
                hasil[j+1]=temp;
                
            }
        }
    }
    
}


void penampilanData(kandidat hasil[], int n){
    printf("Data kandidat\n");
    for(int i=0;i<n;i++){
        printf("%s %d %d %s %d %d\n", hasil[i].nama, hasil[i].pengalaman, hasil[i].bahasa, hasil[i].negara, hasil[i].kelakuan, hasil[i].total);

    }
}


void scrh(kandidat hasil[], int n, int cari) {
    int ketemu = 0;
    
    printf("\nData dengan skor %d:\n", cari);
    
    for (int i = 0; i < n && !ketemu; i++) {
        if (hasil[i].total == cari) {
            printf("%s %d %d %s %d %d\n", hasil[i].nama, hasil[i].pengalaman, hasil[i].bahasa, hasil[i].negara, hasil[i].kelakuan, hasil[i].total);
            ketemu = 1;
            ketemu =1;
        }
    }
    
    if (!ketemu) {
        printf("tidak ditemukan\n");
    }
}
