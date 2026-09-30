#include <stdio.h>
#include <string.h>

int main (){
    char str[50];
    scanf("%s", str);

    int j, spasi = 0;
    for(int i=0; i<strlen(str); i++){
        for(j=0; j<spasi; j++){
            printf(" ");
        }
        printf("%c\n", str[i]);
        spasi++;
        
        //ini aduhh beneran bingung untuk mines nyaa,,
        for(i< i+1){
            for(j=0; j<spasi; j++){
                printf("%c\n", str[i]);
            }
            printf(" ");
            spasi++;

    }
        
    }
    

    return 0;


}
