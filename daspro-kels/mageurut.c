#include <stdio.h>

int main() {
    int tabel1[5];
    int tabel2[3];
    int tabel3[8];
    int penghitung1;
    int penghitung2;
    int penghitung3;
    int penghitung;


    /*ngisi untuk tabel array pertama*/
    for(penghitung1=0; penghitung1 <5;penghitung1++){
        printf("masukan angka tabel1\n");
        scanf("%d", &tabel1[penghitung1]);
        
    }

    /*ngisi untuk tabel array ke dua*/
    for(penghitung2=0; penghitung2<3;penghitung2++){
        printf("masukan angka tabel2\n");
        scanf("%d", &tabel2[penghitung2]);
    }

    /*
    inisialisasi indeks awal setiap tabel
    */

    penghitung1 =0;
    penghitung2 =0;
    penghitung3 =0;

    while((penghitung1 <5) && (penghitung2 <3)){
        if(tabel1[penghitung1] < tabel2[penghitung2]){
            tabel3[penghitung3] = tabel1[penghitung1];
            penghitung1 = penghitung1 +1;
            penghitung3 = penghitung3 +1;
        }else if(tabel2[penghitung2]< tabel1[penghitung1]){
            tabel3[penghitung3] = tabel2[penghitung2];
            penghitung2 = penghitung2 + 1;
            penghitung3 = penghitung3 + 1;
        }else{
            tabel3[penghitung3] = tabel1[penghitung1];
            penghitung1=penghitung1+1;
            penghitung3=penghitung3+1;
            tabel3[penghitung3] = tabel2[penghitung2];
            penghitung2 = penghitung2+1;
            penghitung3 = penghitung3+1;
        }
    }

    if(penghitung1 <5){
        for(penghitung=penghitung1;penghitung<5;penghitung++){
            tabel3[penghitung3] = tabel1[penghitung];
            penghitung3 = penghitung3 +1;
        }
    }

    if(penghitung2 <3){
        for(penghitung=penghitung2; penghitung<3;penghitung++){
            tabel3[penghitung3] = tabel2[penghitung];
            penghitung3 = penghitung3+1;
        }
    }

    printf("====hasil dari code puanjangg di atas====\n");
    for(penghitung=0;penghitung<8;penghitung++){
        printf("tabel index: [%d] = %d\n", penghitung, tabel3[penghitung]);
    }

    return 0;

}