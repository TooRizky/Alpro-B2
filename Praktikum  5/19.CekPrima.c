/* Nama File : CekPrima.c*/
/* Deskripsi : menampilkan bilangan prima atau bukan bilangan prima  */
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Selasa, 15 Maret 2022*/

#include <stdio.h> /*Header file*/
#include <stdlib.h>

/*Program Utama*/
int main()
{
    /*kamus*/
    int N;
    int i;
    int c;
/* Algoritma*/
    printf("Prime Checker \n");
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus positif");
    }
    else {
       c == 0;
       for(i = 1; i <= N; i++){
          if ((N%i)==0){
            c = c + 1;
          }
      }
     }
   if (c == 2){
    printf("N = %d adalah bilangan prima", N);
   }
   else {
    printf("N = %d bukan bilangan prima", N);
   }

    return 0;
 }
