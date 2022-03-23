/*Nama File     : SiputNaik.c*/
/*Deskripsi     : Menentukan berapa hari waktu yang dibutuhkan siput untuk mencapai ketinggian N meter*/
/*Pembuat       : 24060121140156 - Luciano Rizky Pratama*/
/*Tgl Pembuatan : Rabu, 23 Maret 2022*/


#include <stdio.h> /*Header file*/


int main(){ /*Program Utama*/
/*Kamus*/
    float N; /*kedalaman lubang*/
    float ketinggian; /*ketinggian siput dari dasar lubang*/
    int hari; /*jumlah hari yang dibutuhkan*/

/*Algoritma*/
    printf("Program Siput Naik \n");
    printf("Masukkan kedalaman lubang  = ");
    scanf("%f", &N);

    if (N <= 0){
        printf("Kedalaman lubang harus positif");
    }
    
    else{
        hari = 0;
        ketinggian = 0;
        while (ketinggian >= 0 && ketinggian < N ){
            ketinggian = ketinggian + 0.3;
            if (ketinggian < N){
                ketinggian = ketinggian - 0.1;
            }
            hari = hari + 1;
        }

        printf("Waktu yang dibutuhkan oleh siput adalah %d hari", hari);
    }

    return 0;
}
