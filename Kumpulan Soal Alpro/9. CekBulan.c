/* Nama File : CekBulan.c*/
/* Deskripsi : Menampilkan di layar nama bulan dari nomor bulan*/
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Senin, 7 Maret 2022*/

/*header file*/
#include <stdio.h>

/*Program Utama*/
int main()
{
/*Kamus*/
    int i;

/*Algoritma*/
    printf("Masukkan nilai i =");
    scanf("%d", &i);

    if (i>0 && i<=12){

        if (i == 1){
            printf ("Januari");
        }
        else if (i == 2){
            printf ("Februari");
        }
        else if (i == 3){
            printf("Maret");
        }
        else if (i==4){
            printf("April");
        }
        else if (i == 5){
            printf("Mei");
        }
        else if (i == 6){
            printf("Juni");
        }
        else if (i == 7){
            printf("Juli");
        }
        else if (i == 8){
            printf("Agustus");
        }
        else if (i == 9){
            printf("September");
        }
        else if (i == 10){
            printf("Oktober");
        }
        else if (i == 11){
            printf("November");
        }
        else{
            printf("Desember");
        }
    }
    else{
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}
