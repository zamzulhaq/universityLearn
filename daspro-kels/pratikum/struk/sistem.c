#include "header.h"

void printSegitiga(int ukuran){
    for(int i=0;i<ukuran;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }
}

mahasiswa inputMahasiswa(){
    mahasiswa mhs;

    scanf("%s", mhs.nama);
    scanf("%d", &mhs.nim);
    scanf("%lf", &mhs.ipk);

    return mhs;
}