//*nama File : jarakPBola.c*/
// Deskripsi : Menghitung jarak sumbu y pada gerak Parabola
// nama Pembuat : Luciano Rizky Pratama
// Tanggal Pembuatan : Senin 28 Februari 2022
#include <stdio.h>
int main () {


//Kamus
float Vo,t,y ;
const float g = 9.8;
//Algoritma
printf ("Program jarak sumbu y GerakP\n");
printf ("Masukkan nilai Vo= ");
scanf("%f", &Vo);
printf ("Masukkan nilai t= ");
scanf("%f", &t);
y = Vo * t - (g*t*t/2);
printf("Maka jarak sumbu y pada GerakP adalah %2f m",y);
return 0;
}
