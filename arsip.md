# draft


## include <stdio.h>

int main(){


//ini kayak pengenalan variabel nya
int variabelKu = 15;
int variabelDia = 27;
int variabelBaru = 14; 
int totalVariabel = variabelKu + variabelDia;
int variabelLain, variabelLebihLain, variabelAkhir;
int hasilJumlah;
int x;
int z = 35, c = 25, y = 10;

//ini rumus untuk variabel nya hehe
x = z - c;
hasilJumlah = x + y;
y = y - 5;
variabelKu = variabelDia;
variabelLain = variabelLebihLain = variabelAkhir = 50;

//coba nihh variabel type lain
char variabelHuruf = 'n';
float variabelKoma = 10.5;


//kita buat data dumy asli tpi kwkw
int totalSiswa = 10;
int totalKelas  = 5;
int totalGuru = 3;
char namaSekolah = 'A';
float tinggiSiswa = 162.2;
float dataTinggiSiswa = tinggiSiswa * totalSiswa;
int objektifSekolah;
int objektifNilai;
double luasTanah = 100.576;
char namaSiswa = 'F';
int tertinggiNilai = 100;
int siswaNilai = 79;
float rataRatanilai;

rataRatanilai = (float)siswaNilai / tertinggiNilai * 50;
objektifSekolah = totalSiswa - totalGuru + totalKelas;
objektifNilai = totalSiswa - totalGuru;




//nahh ini teks yang keluar di log
printf("aku suka %d telur, dan juga %d nasi\nnahh total %d deh\n", variabelBaru, variabelKu, totalVariabel);
printf("diketahui z adalah %d, dan c sendiri adalah %d\n", z, c);
printf("dan jika x adalah kurangan dari z - c, yaitu %d, dan y adalah %d, maka x + y = %d\n", x, y, hasilJumlah);
printf("jadi, kalau z di tambah y adalah %d\nitu setara sama hasi yg tadi %d\n\n", z + y, hasilJumlah);
printf("dan ini hasil dari variabel GOPLUS (tambahan banyak) %d\n\n", variabelLain + variabelLebihLain + variabelAkhir);
printf("kalau kita perhatikan, ini adalah bilangan yg ada koma nya %f, dan ini adalah semua huruf %c\ndengan ini kita bisa buat satu ada\n\n", variabelKoma, variabelHuruf);

//datasekolah
printf("berikut adalah data sebuah sekolah, nama sekolah yaitu %c, dengan banyaknya siswa %d, dan memiliki guru sebanyak %d, rata rata tinggi siswa adalah %.1f karena per siswa meimili tinggi sekitar %.2f\n", namaSekolah, totalSiswa, totalGuru, dataTinggiSiswa, tinggiSiswa);
printf("dan nilai akumulasi sekolah ini terakreditasi A karena memiliki nilai objektif %d, dari kalkulasi nilai sekolah setara dengan %d, dan %c adalah siswa di sekloah %c juga\n", objektifSekolah, objektifNilai, namaSiswa, namaSekolah);
printf("siswa %c memiliki nilai sebesar %d dan hasil akhirnya %.1f, karena yang paling tinggi di kelas adalah %d\n", namaSiswa, siswaNilai, rataRatanilai, tertinggiNilai);



return 0;

}




#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);
    int tabIn[n];
    int i;

    for (i=0; i < n; i++){

        scanf("%d", &tabIn[i]);
    }
    int jumlah = 0;
    for (i=0; i < n; i++){

        if(tabIn[i] %2 == 1){

            jumlah++;
        }
    }

    printf("nomor dari element baku adalah: %d", jumlah);
    return 0;

}


#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);
    int tabIn[n];
    int i;

    for (i=0; i < n; i++){

        scanf("%d", &tabIn[i]);
    }
    int jumlah = 0;
    //tampilin setengahnya aja dari kode array nyaa
    for (i=0; i < (n/2); i++){

        if(tabIn[i] %2 == 1){

            jumlah++;
        }
    }

    printf("nomor dari element baku adalah: %d", jumlah);
    return 0;

}



#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);
    int tabIn[n];
    int i;

    for (i=0; i < n; i++){

        scanf("%d", &tabIn[i]);
    }
    int maksimal = tabIn[0];
    //tampilin yg paling maksimal dari array
    for (i=0; i < n; i++){

        if(maksimal < tabIn[i]){

            maksimal = tabIn[i];
        }
    }

    printf("nilai maksimalnya adalah: %d", maksimal);
    return 0;

}\\\


typedef struct {
    int x; 
    int y;
} koordinat;




int main() {
    int n;
    scanf("%d", &n);

    koordinat data[n];

    for (int i =0; i < n; i++){

        printf("masukan koordinat x :");
        scanf("%d", &data[i].x);

        printf("masukan koordinat y :");
        scanf("%d", &data[i].y);

    }

    for (int i = 0; i < n; i++){

        printf("%d. koordinat data[%d] -- x : %d -- y : %d\n", i+1, i, data[i].x, data[i].y);
    }




    int uangJajan = 100;
     int jajan;

     while (uangJajan > 0){

        printf("hari ini aku beli barang seharga : ");
        scanf("%d", &jajan);
        uangJajan -= jajan;
        printf("sisa uang aku : %d\n", uangJajan);

     }

    if (uangJajan < 0){
       printf("- duh boros banget\n");
    }else {
        printf("- pas banget uangnya\n");
    
    }




    int flag = 0;
    int i = 0;
    int n;
    
    //buat array
    printf("masukan nilai array");
    scanf("%d", &n);
    int num[n];

    //untuk ngisi dari nilai array
    for (int i = 0; i < n; i++){
        printf("masukan nilai num index ke-%d : ", i);
        scanf("%d", &num[i]);
    }


     while (i < n && flag == 0){
        if(num[i] % 7 == 0){
            flag = 1;
        }
     else {
        i++;
     }
    }

    if(flag != 0){
        printf("bilangan yang habis dibagi 7 : %d\n", num[i]);
    }else {
        printf("tidak terdapat bilangan yang habis di bagi 7\n");
    }
