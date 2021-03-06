/*Nama File     : counting_Sort.c*/
/*Deskripsi     : Melakukan sorting sebuah urutan angka dengan algoritma counting sort dari bilangan terkecil ke terbesar*/
/*Pembuat       : Luciano Rizky Pratama - 24060121140156*/
/*Tgl Pembuatan : Minggu, 08 Mei 2022*/

/*Header file*/
#include <stdio.h>
#define RANGE 10000 /*nilai maksimal dari elemen array yang akan disorting*/

/*Program Utama*/
int main(){ 
/*Kamus*/
	int N; /*banyaknya bilangan (panjang array)*/
	int i; /*counter loop input bilangan yang ingin diurutkan*/
	void countingSort(int array[], int LengthArray); /*deklarasi prosedur countingSort*/
	void printArray(int array[], int LengthArray);   /*deklarasi prosedur printArray*/

/*Algoritma*/
	printf("Counting Sort Program \n");
    printf("Banyaknya bilangan yang ingin diurutkan = ");
    scanf("%d", &N);
	
	int arr[N]; /*deklarasi array integer*/
	
	printf("\nMasukkan bilangan-bilangan yang ingin diurutkan :\n");
	for(i = 0; i < N; i++){ /*input bilangan-bilangan yang ingin diurutkan*/
		printf("Bilangan ke-%d = ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nArray sebelum diurutkan : \n");
	printArray(arr, N); /*mencetak array sebelum diurutkan*/
	
	countingSort(arr, N); /*memanggil prosedur countingSort untuk mengurutkan array*/
	
	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N); /*mencetak array setelah diurutkan*/
	
	return 0;
}

void countingSort(int array[], int LengthArray){
/*Kamus lokal*/
    int i; /*counter loop*/
    int count[RANGE]; /*array untuk menghitung banyaknya elemen dalam array*/
    int index; /*index untuk penyusunan ulang array yang berisi elemen yang sudah terurut*/

/*Algoritma*/
    /*inisialisasi array count*/
    for (i = 0; i < RANGE; i++){
        count[i] = 0;
    }

    /*menghitung banyaknya tiap elemen dalam array yang belum terurut*/
    for (i = 0; i < LengthArray; i++){
        count[array[i]]++;
    }
    
    index = 0;

    /*menyusun array yang sudah terurut*/
    for (i = 0; i < RANGE; i++){
        while (count[i] > 0){
            array[index] = i;
            index++;
            count[i]--;
        }
    }
}

void printArray(int array[], int LengthArray){ /*prosedur untuk mencetak array*/
/*Kamus lokal*/
	int i; /*counter*/

/*Algoritma*/
	/*loop mencetak setiap elemen dalam sebuah array*/
    for (i = 0; i < LengthArray; i++){
		printf("%d ", array[i]);
	}

	printf("\n");
}
