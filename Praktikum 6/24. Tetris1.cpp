// Nama Program : Tetris1.c
/* Deskripsi    : menampilkan susunan karakter bintang sesuai dengan masukan nilai N */
// Pembuat      : Luciano Rizky Pratama 24060121140156
// Tanggal      : 29 Maret 2022

// Header file
#include <stdio.h>
#include <stdlib.h>

// Program Utama
int main()
{
   // Kamus
   int N,i,j;

   // Algoritma
   printf("Masukkan jumlah baris bintang yang diinginkan : ");
   scanf("%d",&N);
   for(i=1;i<=N;i++){                //{Loop Baris}
       for(j=N;j>=i;j--){            //{Loop Kolom}
            printf("*");
            if(j==i){
                printf("  --%d",j);
       }
       printf("\n");
    }
   return 0;
}
