#include <stdio.h>

int main (){
    
    int panjangLintas;
    int typeMedan;
    char medanD = 'D';
    char medanT = 'T';
    int speed; 
    int battery;
    int armor;
    int sensor;
    int processor;
    int totalAtribut;
    float performa;

    printf("masukan panjang lintas dan type medan (D/T)\n");
    scanf("%d %c", &panjangLintas, &typeMedan);

    printf("masukan nilai atribut\n");
    scanf("%d %d %d %d %d", &speed, &battery, &armor, &sensor, &processor);

    
    totalAtribut = speed + battery + armor + sensor + processor;
    medanD = totalAtribut * 2;
    medanT = totalAtribut * 0.5;
    performa = totalAtribut * 100;

    printf("panjang lintas %dM\n", panjangLintas);
    printf("type lintasan %c\n", typeMedan);
    printf("total atribut %d\n", totalAtribut);
    printf("prediksi performa %f\n", performa);
    
    if (performa >= 80){

        printf("prediksi performa %f\n", performa);
        printf("luar biasa! volt PASTI MENANG");
    }
    else if (performa <= 30){

        printf("prediksi performa %f\n", performa);
        printf("Sayang sekali, Volt gagal!\nTapi Volt tak akan menyerah!");
    }else {

        printf("prediksi performa %f\n", performa);        
        printf("Mari kita berdoa agar Volt berjaya!");
    }






return 0;    
}