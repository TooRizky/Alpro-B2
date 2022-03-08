/*nama File : volBolaKerct.c*/
// Deskripsi : Menghitung volume bola dan volume kerucut
// nama Pembuat : Luciano Rizky Pratama
// Tanggal Pembuatan : Senin 28 Februari 2022
#include <stdio.h>
int main () {


//Kamus
float r,PHI,Vb,Vk;
PHI = 3.1415;
//Algoritma
printf("Menghitung Volume Bola dan Volume Kerucut\n");
printf("Masukkan nilai r= ");
scanf("%f", &r);
Vb= 4*(PHI*r*r*r/3);
Vk= Vb/2;
printf("Maka besar Volume Bola adalah %.f\n m^3",Vb);
printf("Maka besar Volume Kerucut adalah %.f m^3",Vk);
return 0;
}



