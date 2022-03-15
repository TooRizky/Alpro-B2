/* Nama File : TarifPLN.c*/
/* Deskripsi : menampilkan di layar besarnya tarif listrik yang dikenakan */
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
    int daya;
    int tarif;

    /*Algoritma*/
    printf("Program tarif PLN\n");
    printf("Masukkan golongan = ");
    scanf("%d", &golongan);
    printf("Masukkan daya = ");
    scanf("%d", &daya);

    if (golongan == 1){
        if (daya >0 && daya <= 100){
            tarif =  100*1000;
        }
        else if (daya > 100 && daya<1000){
            tarif = daya*1000;
        }
        else if (daya>=1000){
            tarif = (daya*1000) + (daya*1000*10/100);
        }
        else{
             printf("daya harus diatas 0\n");
        }
    }
    else if(golongan == 2){
        if (daya >0 && daya <= 100){
            tarif = 100*2000;
        }
        else if(daya > 100 && daya<1000){
            tarif = daya*2000;
        }
        else if (daya>=1000){
            tarif = (daya*2000) + (daya*2000*10/100);
        }
        else{
            printf("daya harus diatas 0\n");
        }
    }
    printf("Tarif PLN yang harus dibayarkan adalah : %d", tarif);
}
