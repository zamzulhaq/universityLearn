#include <stdio.h>
#include <string.h>

int main (){

    char sample[201];
    char dna[201];

    //intput sample
    
    scanf("%s", sample);


    //intput kata
    scanf("%s", dna);

    //tanda kalau ke temu
    int flag=0;

    //pencarian dna nya
    int i = 0;
    while(i < strlen(sample) && flag == 0){
        for(int h=0; i<strlen(sample); i++){
            if(sample[h] == strlen(dna)){
                flag= 1;
            }
        }
        i++;
    }


    //fungsi kalau ketemu dna nya / flag=1
    if(flag){
        printf("goodbye dio.. i will miss you bro\n");
    }else{
        printf("alhamdulillah ternyata kamu selamat\n");
    }


    return 0;


}
