/* Nama File : BiayaParkir.c*/
/* Deskripsi : menampilkan di layar besarnya  biaya parkir berdasarkan durasi(lamanya) parkir */
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Selasa, 8 Maret 2022*/

/*header file*/
#include <stdio.h>
/*Program Utama*/
int main()
{
/*Kamus*/
    int biaya;
    int waktu;

/*Algoritma*/
    printf("Program Biaya Parkir\n");
    printf("Masukkan lamanya parkir = ");
    scanf("%d", &waktu);
    if (waktu > 0) {

     if (1 <= waktu <= 2){
        printf("Biaya untuk parkir adalah Rp.2000,-\n");
     }
        else{
        printf("Biaya untuk parkir adalah : %d", (waktu-2) +500 + 2000);
    }

    }
    else{
        printf("Jam parkir tidak diketahui");
    }
    return 0;

}

