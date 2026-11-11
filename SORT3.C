#include <stdio.h>

/* Nomor 1: selection sort dari besar ke kecil */
int main(){
 int tabInt[10] = {34, 67, 23, 28, 98, 15, 89, 67, 28, 18};
 int i; int temp; int maxIndeks; int j;
 for(i=0; i<(10-1); i++){
 /*inisialisasi indeks elemen maksimum*/
 maxIndeks = i;
 /*perulangan mencari nilai maksimum sepanjang indeks i + 1 sampai jumlah elemen array*/
 for(j=(i + 1); j<10; j++){
 if(tabInt[maxIndeks] < tabInt[j]){
 maxIndeks = j;
 }
 }
 //menukar posisi elemen
 temp = tabInt[i];
 tabInt[i] = tabInt[maxIndeks];
 tabInt[maxIndeks] = temp;
 }
 /*menampilkan hasil*/
 for(i=0; i<10; i++){
 printf("%d\n", tabInt[i]);
 }
 return 0;
}