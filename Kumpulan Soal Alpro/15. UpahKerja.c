/* Nama File : UpahKerja.c*/
/* Deskripsi : menampilkan di layar jumlah upah kerja berdasarkan jam kerja */
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Selasa, 8 Maret 2022*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Program Utama*/
int main()
{
    /*Kamus*/
    int golongan;
    int jam;
    int upah;

    /*Algoritma*/
    printf("Program Upah Kerja\n");
    printf("Masukkan golongan = ");
    scanf("%d", &golongan);
    printf("Masukkan jam kerja = ");
    scanf("%d", &jam);

    if ( jam < 40){
        if (golongan == 1){
            upah = (1000*jam);
        }
        else if (golongan == 2){
            upah = (1500*jam);
        }
        else if (golongan == 3){
            upah = (2000*jam);
        }
        else{
            upah = (2500*jam);
        }
    }
    else{ /*jam >= 40*/
        if (golongan == 1){
            upah = (1000*jam) + (jam-40)*1000*1.5;
        }
        else if (golongan == 2){
            upah = (1500*jam) + (jam-40)*1500*1.5;
        }
        else if (golongan == 3){
            upah = (2000*jam) + (jam-40)*2000*1.5;
        }
        else{ /*golongan 4*/
            upah = (2500*jam) + (jam-40)*2500*1.5;
        }
    }
    printf("Jadi upah yang diterima pekerja tersebut berdasarkan jam kerjanya adalah : %d", upah);
}
