#include "header.h"

int main(){
    
    //untuk batas inpt obat
    int n;
    scanf("%d", &n);

    //fungsi untuk isi obat apa aja
    obat intputObat[n];
    int batasInpt;
    for(batasInpt=0; batasInpt<n; batasInpt++){
        intputObat[batasInpt]= dataObat();
    }

    //inpt stok minimal
    int x;
    scanf("%d", &x);
    //inpt maksimal
    int z;
    scanf("%d", &z);
    //maksimal keluaran
    int bInpt;
    scanf("%d", &bInpt);

    //fungsi filter obat yg sesuai rage

    int batasDat=0;
    int i=0;
    while(i<n && batasDat < bInpt){
        if((intputObat[i].stok >= x) && (intputObat[i].stok <= z)){
            printf("obat yag sesuai:\n %s %s %lf\n", intputObat[i].namaObat, intputObat[i].kategori, intputObat[i].stok);
            
            batasDat++;
        }
        i++;
    }

    return 0;

}