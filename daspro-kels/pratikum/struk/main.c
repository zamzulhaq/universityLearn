#include "sistem.h"

int main(){
    int n;
    scanf("%d", &n);

    printf("segitiga berukuran %d", n);
    printSegitiga(n);

    printf("\n");
    printf("segitiga berukuran %d*2 (%d):\n", n, n*2);
    printSegitiga(n*2);

    printf("\n");
    printf("segitiga berukuran %d*3 (%d):\n", n, n*3);
    printf("n *3");
    printSegitiga(n*3);

    return 0;

}