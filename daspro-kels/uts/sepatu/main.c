#include "header.h"

int main(){
    
    //untuk batas inpt 
    int n;
    scanf("%d", &n);

    //fungsi untuk isi data sepatu
    sepatu inputSepatu[n];
    int batasInpt;
    for(batasInpt=0; batasInpt<n; batasInpt++){
        intputSepatu[batasInpt]= dataSepatu();
    }

    //inpt persenan UMR
    int umr;
    scanf("%d", &umr);
    

    //fungsi filter bedasarkan persenan

    int batasDat=0;
    int i=0;
    while(i<n && batasDat < bInpt){
        if(intputSepatu[i].harga >= 0.80){
            
            printf("%s %lf %s\n", inputSepatu[i].namaSepatu, inputSepatu[i].harga, inputSepatu[i].asal);
            batasDat++;
        }
        i++;
    }

    return 0;

}