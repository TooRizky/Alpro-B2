/* Nama File : CekProsesBil.c*/
/* Deskripsi : Merepresentasikan kondisional satu kasus dengan berbagai ekspresi*/
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Senin, 7 Maret 2022*/

/*header file*/
#include <stdio.h>

/*Program Utama*/
int main() {
/*Kamus*/
    int N;
/*Algoritma*/
    printf("Masukkan n: ");
    scanf("%d", &N);
    if (N%2 == 0) {
        N = N+ 3;
        if (N%5 == 0) {
            N = N+5;
        } else {
            N = N+ 2;
        }
    } else {
        N = N+2;
        if (N%3 == 0) {
            N = N+4;
        } else {
            N = N+1;
        }
    }

    printf("n sekarang adalah: %d", N);
return 0;
}

