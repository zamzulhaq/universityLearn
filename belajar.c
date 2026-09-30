#include <stdio.h>

int main() {
    //masukin total cabang
    scanf("%d", &n);
    int num[n];

    //performa penjualan setiap cabang
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }

    //jumlah cabang
    printf("total cabang : %d\n", n);
    
    //penjualan terendah
    int min = num[0];
    int max = num[0];
    for(innt i = 1; i < n; i++){
        if(min > num[i]){
            min = num[i];
        }
    }

    //penjualan tertinggi
    int min = num[0];
    int max = num[0];
    for(){
        if(){
            
        }
    }


    


    return 0;

}