#include <stdio.h>

/* Nomor 2: selection sort array of tipe terstruktur (pecahan)
   diurutkan berdasarkan pembilang saja */
struct Pecahan{
 int pembilang;
 int penyebut;
};

int main(){
 struct Pecahan tabPecahan[4] = {{5, 6}, {2, 3}, {1, 4}, {7, 8}};
 int i; int minIndeks; int j;
 struct Pecahan temp;
 for(i=0; i<(4-1); i++){
 /*inisialisasi indeks elemen minimum*/
 minIndeks = i;
 /*perulangan mencari nilai minimum sepanjang indeks i + 1 sampai jumlah elemen array*/
 for(j=(i + 1); j<4; j++){
 if(tabPecahan[minIndeks].pembilang > tabPecahan[j].pembilang){
 minIndeks = j;
 }
 }
 //menukar posisi elemen
 temp = tabPecahan[i];
 tabPecahan[i] = tabPecahan[minIndeks];
 tabPecahan[minIndeks] = temp;
 }
 /*menampilkan hasil*/
 for(i=0; i<4; i++){
 printf("Pembilang = %d, Penyebut = %d\n", tabPecahan[i].pembilang, tabPecahan[i].penyebut);
 }
 return 0;
}