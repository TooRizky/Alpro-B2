/* Nama File : KalkSS.c*/
/* Deskripsi : menampilkan di layar opreasi kalkulator sederhana*/
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Selasa, 8 Maret 2022*/

/*header file*/
#include <stdio.h>
/*Program Utama*/
int main()
{
/*Kammus*/
    char    Operasi;
    int     iA;
    int     iB;

/*Algoritma*/
    printf("Masukkan Operasi (a-f)= ");
    scanf("%c", &Operasi);
    printf("Masukkan Nilai A = ");
    scanf("%d", &iA);
    printf("Masukkan Nilai B = ");
    scanf("%d", &iB);

    if (Operasi == 'a'){
        printf("Hasil Penjumlahan= %d\n", iA + iB);
    }
    else if (Operasi == 'b'){
        printf("Hasil Pengurangan = %d\n", iA - iB);
    }
    else if (Operasi == 'c'){
        printf("Hasil Perkalian = %d\n", iA * iB);
    }
    else if (Operasi == 'd'){
        printf("Hasil Pembagian = %f\n",(float) iA / iB);
    }
    else if (Operasi == 'e'){
        printf("Hasil Floor Div = %d\n", iA / iB);
    }
    else if (Operasi == 'f'){
        printf("Hasil Mod = %d\n", iA % iB);
    }
    else{
        printf("Bukan Pilihan Menu Yang Benar");
    }
    return 0;
}
