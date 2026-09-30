#include <stdio.h>

int main () {

    int baris;
    int bintang;
    int kolom;

    
    printf("nilai bintang nya\n");
    scanf("%d", &bintang);

    if((bintang >= 5) &&by (bintang <= 99)){ //ini di luar pelajaran btw, wkwk 4.

        for (baris = 1; baris <= bintang; baris++){
        
            for (kolom=1; kolom<=bintang; kolom++){     //pengurangan ganti aja jadi minus, yg bawah plus
            printf("*");
            }

        printf("\n");
        }
    }else {
         printf("banyak banget!");
        printf("isi lagi!");
        scanf("%d", &bintang);
    }
        
}




#include <stdio.h>

int main() {

    int tabInt[10];
    int penghitung;
    for (penghitung=0; penghitung < 5; penghitung++){

        tabInt[penghitung] = penghitung;

    }
    
    for (penghitung=0; penghitung < 10; penghitung++){
        printf("%d", tabInt[penghitung]);
    
    }
    return 0;

}