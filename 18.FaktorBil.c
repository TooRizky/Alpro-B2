/* Nama File : FaktorBil.c*/
/* Deskripsi : menampilkan faktor dari bilangan integer sembarang */
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Selasa, 15 Maret 2022*/


/*Header file*/
#include <stdio.h>
#include <stdlib.h>

/*Program Utama*/

int main() {

/*Kamus*/
    int N;
    int i;

/*Algoritma*/
    printf("Faktor Bilangan \n");
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    if (N <= 0){
          printf("N harus positif");
    }
    else {
    	printf("N = %d, faktor bilangannya adalah : ", N);
    }
       {
       	for(i=1; i<=N; i++){
            if (N%i==0){
            printf(" %d",  i);
       }

            }
       }
       return 0;
}

