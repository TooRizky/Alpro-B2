/* Nama File : CekHari.c*/
/* Deskripsi : Menampilkan di layar nama hari dari nomor hari*/
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
    printf("Masukkan nilai i\n");
    scanf("%d", &i);

    if (i>=0 && i<=7){

        if (i == 1){
            printf ("Senin");
        }
        else if (i == 2){
            printf ("Selasa");
        }
        else if (i == 3){
            printf("Rabu");
        }
        else if (i==4){
            printf("Kamis");
        }
        else if (i == 5){
            printf("Jumat");
        }
        else if (i == 6){
            printf("Sabtu");
        }
        else{
            printf("Minggu");
        }
    }
    else{
        printf("Masukan nomor hari tidak tepat");
    }
    return 0;
}
