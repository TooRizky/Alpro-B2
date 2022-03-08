/*nama File : gayaSentr.c*/
// Deskripsi : Menghitung gaya yang terjadi pada GerakSentripetal
// nama Pembuat : Luciano Rizky Pratama
// Tanggal Pembuatan : Senin 28 Februari 2022
#include <stdio.h>
int main () {


//Kamus
float m,v,r, F ;
//Algoritma
printf ("Menghitung Besarnya F dari Gaya Sentripetal\n");
printf ("Masukkan nilai m= ");
scanf("%f", &m);
printf ("Masukkan nilai v= ");
scanf("%f", &v);
printf ("Masukkan nilai r= ");
scanf("%f", &r);
F = m*(v*v/r);
printf("Maka besar F pada GerakSentripetal adalah %.f N",F);
return 0;
}

