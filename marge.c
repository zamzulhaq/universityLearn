#include <stdio.h>

int main (){

    int tabel1[5];
    int tabel2[3];
    int tabel3[8];//pertambahan dari tabel 1 dan 2
    int penghitung;

    for(penghitung=0; penghitung<5; penghitung++){
        printf("enter a number (tabel 1)\n");
        scanf("%d", &tabel1[penghitung]);
    }

    for(penghitung=0; penghitung<3; penghitung++){
            printf("Enter a number (tabel 2)\n");
            scanf("%d", &tabel2[penghitung]);
        
    }

    //ini di gabungin jadi satu tabel array, tpi di isi setelah satu satu dulu
    for(penghitung=0;penghitung<5;penghitung++){
        tabel3[penghitung] = tabel1[penghitung];
    }

    for(penghitung=5;penghitung<8;penghitung++){
        tabel3[penghitung] = tabel2[penghitung-5];

    }

    //ini untuk print logika nya aja
    printf("\n--- Hasil Gabungan di Tabel 3 ---\n");    
    for(penghitung = 0; penghitung < 8; penghitung++){
        printf("tabel3[%d] = %d\n", penghitung, tabel3[penghitung]);
    }
    return 0;
}

