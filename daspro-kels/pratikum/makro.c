#include <stdio.h>

#define persegi(x) ((x)*(x))
#define cetakHello() printf("hello, dunia\n")
#define f(i,n) for(int i=0;i<n;i++)
#define green "\003[32m"
#define reset "\033[0m"


int main(){
    int angka;
    scanf("%d", &angka);

    cetakHello();
    printf("persegi dari %d adalah %d\n", angka, persegi(angka));

    f(i, angka){
        printf(green "loop ke -%d\n" reset, i); 
    }

    return 0;
}
