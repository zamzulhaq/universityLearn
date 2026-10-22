#include <stdio.h>

typedef struct{
    char nama[51];
    int nim;
    double ipk;

} mahasiswa;

mahasiswa inputMahasiswa(){
    mahasiswa mhs;
    scanf("%s", mhs.nama);
    scanf("%d",&mhs.nim);
    scanft("%lf", &mhs.ipk);
    return mhs;
}

return 0;