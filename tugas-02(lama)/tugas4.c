#include <stdio.h>

int main (){

    float nilai;
    int depan, belakang;


    printf("masukan angka float:\n");
    scanf("%f", &nilai);
    
        depan = (int) nilai;
        belakang = (int) ((nilai - depan) * 10);

    if (depan % belakang == 0){
        
        printf("angka depan, adalah kelipatan dari setelah koma");
    }else {
        printf("angka depan bukan kelipatan dari setelah koma");
    }


return 0;


}