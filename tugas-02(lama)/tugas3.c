#include <stdio.h>

int main (){

    int bilangan1;
    int bilangan2;
    int hasil;

    printf("masukan angka:\n");
    scanf("%d %d", &bilangan1, &bilangan2);

    if ((bilangan1 % 2 != 0) && (bilangan2 % 2 != 0)){ 
        //ganjil    
        hasil = bilangan1 * bilangan2;
        printf("%d", hasil);
    }
    else if ((bilangan1 % 2 == 0) && (bilangan2 % 2 == 0)){
        //genap
        hasil = bilangan1 + bilangan2;
        printf("%d", hasil); 

    }else {
        printf("%d %d", bilangan1, bilangan2);
    }


return 0;

}