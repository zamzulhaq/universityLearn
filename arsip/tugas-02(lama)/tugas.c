#include <stdio.h>

int main (){

    int bilangan;
    printf("masukan angka:\n");
    scanf("%d", &bilangan);

    if ((bilangan >= 0) && (bilangan < 9)){

        printf("bilangan satuan");
    }
    else if ((bilangan >= 10) && (bilangan < 99)){
        printf("bilangan puluhan");
    }
    else if ((bilangan >= 100) && (bilangan < 999)){
        printf("bilangan ratusan");
    }
    else if ((bilangan >= 1000) && (bilangan < 9999)){
        printf("bilangan ribuan");
    } 
    else if ((bilangan >= 10000) && (bilangan < 99999)){
        printf("bilangan puluhan ribu");

    }
    else {
        printf("bilangan jutaan seterusnya");
    }


return 0;

}