//*nama File : jarakGLBB.c*/
// Deskripsi L Menghitung jarak glbb
// nama Pembuat : Luciano Rizky Pratama
// Tanggal Pembuatan : Senin 28 Februari 2022
#include <stdio.h>

int main () {

//Kamus :
float Vo,t,a,s;
//algoritma
printf ("Program jarak GLBB\n");
printf ("Masukkan nilai Vo= ");
scanf("%f", &Vo);
printf ("Masukkan nilai t= ");
scanf("%f", &t);
printf ("Masukkan nilai a= ");
scanf("%f", &a);
s = Vo * t +(a*t*t/2);
printf("Maka jarak GLBB adalah %2f m",s);
return 0;
}
