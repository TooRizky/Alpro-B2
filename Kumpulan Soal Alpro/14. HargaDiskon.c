/* Nama File : HargaDiskon.c*/
/* Deskripsi : menampilkan di layar harga barang setelah didiskon */
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
    char jenis;
    int harga;

    /*Algoritma*/
    printf("Program harga diskon\n");
    printf("Masukkan jenis diskon = ");
    scanf("%s", &jenis);
    printf("Masukkan harga = ");
    scanf("%d", &harga);

    if(harga>200 && harga<10000)
	{
        if(jenis == 'A'){
            printf("Harga barang setelah didiskon adalah : %d", harga-(harga*10/100));
    }
		else if(jenis == 'B'){
             printf("Harga barang setelah didiskon adalah : %d", harga-(harga*15/100));
	}
	    else if (jenis == 'C'){
	        printf("Harga barang setelah didiskon adalah : %d", harga-(harga*20/100));
    }
	    else {
         printf("tidak ada jenis diskon tersebut");
    }

    }
    else
    printf("tidak ada potongan untuk harga tersebut");
}
