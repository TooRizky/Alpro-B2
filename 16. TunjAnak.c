/* Nama File : TunjAnak.c*/
/* Deskripsi : menampilkan di layar jumlah tunjangan yabg diberikan berdasarkan jumlah anak */
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
    int jumlahAnak;
    int gaji;
    int tunjAnak;

    /*Algoritma*/
    printf("Program Tunjangan Anak\n");
    printf("Masukkan jumlah anak = ");
    scanf("%d", &jumlahAnak);
    printf("Masukkan gaji = ");
    scanf("%d", &gaji);

    if (jumlahAnak >= 0 && jumlahAnak<3){
        tunjAnak = jumlahAnak*(gaji*10/100);
    }
    else{
        tunjAnak = 3*(gaji*10/100);
    }
    printf("Besarnya tunjangan anak adalah ; %d", tunjAnak);
}
