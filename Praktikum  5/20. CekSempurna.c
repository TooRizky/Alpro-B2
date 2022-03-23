/* Nama File : CekSempurna.c*/
/* Deskripsi : Menentukan bilangan integer positif sembarang termasuk bilangan sempurna atau bukan */
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Selasa, 15 Maret 2022*/

// Header file
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Program Utama
int main()
{
// Kamus
    int N;
    int i;
    int c;
//Algoritma
    printf("Apakah Merupakan Bilangan Sempurna? \n");
    printf("Masukan Bilangan N = ");
    scanf("%d",&N);
    if ( N<= 0){
        printf("N harus positif \n");
    }
    else {
        c = 0;
    }
       for(i=1; i<N ;i++){
           if (N % i == 0){
              c = c + i;
        }
    }
    if (c == N){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan bilangan Sempurna");
    }
    return 0;
}
