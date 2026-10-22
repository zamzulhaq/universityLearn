#include "pola.h"

void pola (int n){
    int i, j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }

}

void tulisArrayInt(int n,int arr[n]){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }
}

int jumlahA(char str){
    int i,j=0;
    for(i=0;i<strlen(str);i++){
        if(strline[i] == 'a' || (strline[i] == 'A')){
            j++;
        }
    }
    return j;
}

int sum(int n, int arr[n]){
    int i, hasil = 0;
    for(i=0,i<n,i++){
        hasil = hasil + arr[i];
    }
    return hasil;
}