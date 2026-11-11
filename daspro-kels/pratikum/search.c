#include <stdio.h>

/*
ini masih belum di ulik lagi, 
baru ambil referensi

*/

// prosedur untuk proses selection sort
void selectionSort(int n, int* arr) {
    for(int i=0; i < n-1; i++) {
        int minIdx = i;
        for(int j= i+1; j<n; j++) {
        
            // sorting secara ascending
        if(arr[minIdx] > arr[j]) {
            minIdx = j;
        }
    }
        swap(&arr[i], &arr[minIndx]);
        printArr(n, arr);
    }
}


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
    printf("\nNice, akhirnya selsai juga my hukuman.\nPakk ini udah selesai yh, saya balik ke kelas dulu hehehe\n");
    printf("\nHASIL NILAI PK SELURUH SISWA SMA PANGLIMA SUDIRMAN:");
    printf("\n+----+-------+");
    printf("\n| no | nilai |");
    printf("\n+----+-------+");    
    for(penghitung = 0; penghitung < 8; penghitung++){
        printf("\n|  %d |     %d |", penghitung, tabel3[penghitung]);
        
    }
    printf("\n+----+-------+");
    return 0;
}

