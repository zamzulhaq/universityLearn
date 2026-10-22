#include <stdio.h>

int main (){

    int segitiga;
    int sisi1, sisi2, sisi3;
    
    printf("masukan angka sisi segitiga:\n");
    scanf("%d %d %d", &sisi1, &sisi2, &sisi3);

    if ((sisi1 == sisi2) && (sisi2 == sisi3)){

        printf("segitiga sama sisi");
    }
    else if ((sisi1 == sisi2) || (sisi1 == sisi3) || (sisi2 == sisi3)){

        printf("segitiga sama kaki");
    }
    else if ((sisi1 * sisi1 + sisi2 * sisi2 == sisi3 * sisi3) || (sisi1 * sisi1 + sisi3 *sisi3 == sisi2 * sisi2) || (sisi2 * sisi2 + sisi3 * sisi3 == sisi1 *sisi1)){

        printf("segitiga siku siku");
    }else {
        printf("bukan segitiga");
    } 


return 0;



}