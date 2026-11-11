#include <stdio.h>

int sqSearch(int size, int arr[], int target){
    //tandai flag ketemu sebagai -1 (target belum ke temu)
    int flag=-1;
    int idx=0;
    int res=-1;
    //iterasi dari awal array hingga akhir array dan jika elemen target belum ke temu
    while((idx < size) && (flag==-1)){
        //jika elemen target ketemu, simpan hasilnya
        if(arr[idx] == target){
            res= target;
            flag= 1;
        }else{
            //iterasi
            idx++;
        }
    }
    //bis di kembalikan variable res atau index berapa dari arraynya
    return idx;

}

int main() {
    //intput size array
    int n;
    scanf("%d", &n);
    //buat array dinamis
    int arr[n];
    //inpt array dinamis
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    //intput nilai yang mau dicari
    int target;
    scanf("%d", &target);
    //simpan hasil dari sq search
    int hasil=sqSearch(n, arr, target);
    
    //kondisi jika ada dan tidak ada
    if(hasil==n){
        printf("angka yang kamu cari tidak ada:(");

    }else{
        //kenapa arr[hasil]? karena hasil fungsi sqruential search mengebalikan nilai indexnya
        printf("angka %d yang kamu cari ada dalam array tersebut!", arr[hasil]);
    }

    return 0;
}