#include "pola.h"

int main(){
    int b;
    scanf("%d", &b);

    pola(b);
    pola(b+1);
    pola(b+2);

    int total[b];
    
    int i;
    for(i=0;i<b;i++){
        scanf("%d", &total[i]);
    }

    tulisArrayInt(b, total);
    
    int hasil;
    char str[50];
    scanf("%s", &str);
    hasil = jumlahA(str);

    scanf("s",&str);
    printf("%d\n", jumlahA(str));
    return 0;


}

