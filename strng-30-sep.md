#include <stdio.h>
#include <string.h>

int main (){
    char str[50];
    scanf("%s", &str);
    int i;
    printf("%s\n", str);
    for(int i = 0; i < strlen (str); i++){
        printf("%c\n", str[i]);
    }
    

    return 0;


}


###

#include <stdio.h>
#include <string.h>

int main (){
    char str1[50];
    char str2[50];
    scanf("%s", &str1);
    strcpy(str2, str1);

    int i; 
    for(i = 0; i < strlen (str2); i++){
        printf("%c\n", str2[i]);
    }
    

    return 0;


}

###

#include <stdio.h>
#include <string.h>

int main (){
    char str1[50];
    char str2[50];
    
    scanf("%s", &str1);
    scanf("%s", &str2);

    if(strcmp(str1, str2) == 0){ //nge cek ini setiap string teh setara atau engga = 0 jadi sama engga
        printf("strings are equal\n");
    }else{
        printf("strings are not equal\n");
    }
    

    return 0;

}


#include <stdio.h>
#include <string.h>

int main (){
    char str[50];
    scanf("%s", str);

    int i;
    int jumlah = 0;

    for(i=0; i < strlen(str); i++){
            jumlah++;
        
    }

    printf("%d\n", jumlah);
    

    return 0;


}


###

#include <stdio.h>
#include <string.h>

int main (){
    char str[50];
    scanf("%s", str);

    int i;
    int jumlah = 0;
    //char str2[5] = "ka";

    for(i=0; i < strlen(str); i++){
        if((str[i] == 'k') && (str[i+1] == 'a')){ //ini cek +1 setelah i sebelumnya, ngerti gak wkwk gitu intinya,,
            jumlah++;
        }
    }

    printf("%d\n", jumlah);
    

    return 0;


}
