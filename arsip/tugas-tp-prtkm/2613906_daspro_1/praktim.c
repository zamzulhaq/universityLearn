#include <stdio.h>

int main(){

    int hariTabungan;
    int sahitya;
    int nirmala;
    int aksara;
    int amerta;
    int niskala;
    int totalTabungan;
    int totalTabunganB;

    printf("masukan hari tabungan:\n");
    scanf("%d", &hariTabungan);

    printf("masukan jumlah tabungan sahitya:\n");
    scanf("%d", &sahitya);
    printf("masukan jumlah tabungan nirmala:\n");
    scanf("%d", &nirmala);
    printf("masukan jumlah tabungan aksara:\n");
    scanf("%d", &aksara);
    printf("masukan jumlah tabungan amerta:\n");
    scanf("%d", &amerta);
    printf("masukan jumlah tabungan niskala:\n");
    scanf("%d", &niskala);
    
    totalTabungan = sahitya + nirmala + aksara + amerta + niskala * hariTabungan;
    totalTabunganB = sahitya + nirmala + aksara + amerta + niskala;

    printf("total %d\n", totalTabunganB);
    printf("total selama %d hari: %d\n", hariTabungan, totalTabungan);

    


    if (totalTabungan > 240000){

        printf("hore! mereka berhasil membeli tiket taman swastamita :D\n");
        
    }
    else{

        printf("yahh... mereka gagal masuk ke taman swastamita :(\n");
    }


return 0;

}