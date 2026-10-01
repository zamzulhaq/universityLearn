#include <stdio.h>
#include <string.h>

int main (){
    //variabel
    int n;
    scanf("%d", &n);
    char arr[n][101];
    char kata[100];

    //intput array
    for(int i=0; i<n;i++){
        printf("masukan elemen array of string :\n");
        scanf("%s", arr[i]);

    }

    //intput kata
    printf("masukan kata yang ingin di cari\n");
    scanf("%s", kata);

    //penanda jika kata ditemukan dalam array of string
    int flag=0;

    //pencarian string kata dalam array of string
    for(int i=0;i<n;i++){
        if(strcmp(arr[i], kata)== 0){
            flag=1;
        }
    }

    //jika kata tertentu dan tidak
    if(flag){
        printf("kata %s di temukan dalam array of string.\n", kata);

    }else{
        printf("kata %s TIDAK di temukan dalam array of string.\n", kata);
    }
    

    return 0;


}
