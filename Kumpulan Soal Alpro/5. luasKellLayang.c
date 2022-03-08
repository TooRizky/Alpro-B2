//*nama File : luasKellLayang.c*/
// Deskripsi : Menghitung luas dan keliling layang-layang
// nama Pembuat : Luciano Rizky Pratama
// Tanggal Pembuatan : Minggu, 6 Maret 2022
#include <stdio.h>

int main() {

// Kamus
    float s1, s2, d1, d2, Luas, Kell;
// Algoritma
    printf("Menghitung Luas dan Volume Keliling Layang-Layang\n");
    printf("Masukkan diagonal satu (d1) dalam m: ");
    scanf("%f", &d1);
    printf("Masukkan diagonal dua (d2) dalam m: ");
    scanf("%f", &d2);
    printf("Masukkan sisi satu (s1) dalam m: ");
    scanf("%f", &s1);
    printf("Masukkan sisi dua (s2) dalam m: ");
    scanf("%f", &s2);
    Luas = ( d1 * d2)/2;
    Kell = 2 * (s1 + s2);
    printf("Luas layang-layang adalah: %.f m^2", Luas);
    printf("Keliling layang-layang adalah: %.f m^2", Kell);
    return 0;
}
