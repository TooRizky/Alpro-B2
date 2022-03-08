/* Nama File : CekSegitiga.c*/
/* Deskripsi : menampilkan di layar 3 inputan segitiga dan menentukan termasuk jenis segitiga apa*/
/* nama Pembuat : 24060121140156-Luciano Rizky Pratama*/
/* Tanggal Pembuatan : Senin, 7 Maret 2022*/

/*header file*/
#include <stdio.h>

/*Program Utama*/
int main()
{
/*Kamus*/
    int a;
    int b;
    int c;

/*Algoritma*/
    printf("Masukkan sisi segitiga\n");
    printf("a =");
    scanf("%d", &a);
    printf("b =");
    scanf("%d", &b);
    printf("c =");
    scanf("%d", &c);

    if(a>0 && b>0 && c>0){
        if(a==b && b == c){
            printf("Segitiga sama sisi");
        }
        else if(a==b || b==c || c==a){
            printf("Segitiga sama kaki");
        }
        else{
            printf("Segitiga sembarang");
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    return 0;
}
