/* Nama File : CekBilSemb.c*/
/* Deskripsi : menampilkan di layar bilangan i sebagai bilangan bulat positif, negatif, atau nol*/
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
    if (scanf("%d", &i)){
    if (i>0)
    {
        printf("Bilangan positif", i);
    }
    else if (i == 0){
        printf("Nol",i);
    }
    else if (i > 0){
        printf("Bilangan negatif", i);
    }
    else {
        printf("Bukan termasuk sebuah bilangan");
    }

}
return 0;
}
