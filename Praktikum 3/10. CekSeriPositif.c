/* Nama File : CekSeriPositif.c*/
/* Deskripsi : menampilkan di layar 3 inputan tahanan dan menentukan termasuk seri positif atau tidak*/
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Senin, 7 Maret 2022*/
#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{
    /*Kamus*/
    int a;
    int b;
    int c;

    /*Algoritma*/
    printf("Masukkan nilai tahanan\n");
    printf("a =");
    scanf("%d", &a);
    printf("b =");
    scanf("%d", &b);
    printf("c =");
    scanf("%d", &c);

    if (a>0 && b>0 && c>0){
        printf("Seri Positif");
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}