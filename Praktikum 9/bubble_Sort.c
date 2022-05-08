/*Nama File     : bubble_Sort.c*/
/*Deskripsi     : Melakukan sorting dari array dengan menggunakan algoritma bubble sort dari bilangan terkecil ke terbesar*/
/*Pembuat       : Luciano Rizky Pratama - 24060121140156*/
/*Tgl Pembuatan : Minggu, 08 Mei 2022 */

/*Header file*/
#include <stdio.h>

/*Program Utama*/
int main(){ 
/*Kamus*/
	int N; /*banyaknya bilangan (panjang array)*/
	int i; /*counter perulangan input bilangan yang akan diurutkan*/
	void swap(int* x, int* y); 					/*deklarasi prosedur swap*/
	void bubbleSort(int array[], int LengthArray); /*deklarasi prosedur bubbleSort*/
	void printArray(int array[], int LengthArray); /*deklarasi prosedur printArray*/

/*Algoritma*/
    printf("Bubble Sort Program \n");
    printf("Banyaknya bilangan yang akan diurutkan = ");
    scanf("%d", &N);
	
	int arr[N]; /*deklarasi array integer*/
	
	printf("\nMasukkan bilangan-bilangan yang akan diurutkan :\n");
	for(i = 0; i < N; i++){ /*input bilangan-bilangan yang akan diurutkan*/
		printf("Bilangan ke-%d = ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nArray sebelum diurutkan : \n");
	printArray(arr, N); /*mencetak array sebelum diurutkan*/
	
	bubbleSort(arr, N); /*memanggil prosedur bubbleSort untuk mengurutkan array*/
	
	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N); /*mencetak array setelah diurutkan*/
	
	return 0;
}

void swap(int* x, int* y){ /*prosedur untuk swap (tukar posisi)*/
/*Kamus lokal*/
	int temp; /*variabel penampung*/

/*Algoritma*/
	temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int array[], int LengthArray){ /*prosedur untuk menjalankan bubble sort*/
/*Kamus lokal*/
	int i; /*counter perulangan siklus sorting*/
	int j; /*counter perulangan perbandingan 2 nilai*/

/*Algoritma*/
	/*perulangan siklus sorting array yang belum terurut*/
	for (i = 0; i < LengthArray - 1; i++){	
		
		/*perulangan membandingkan nilai dari tiap 2 elemen yang bersebelahan dari elemen awal sampai terakhir pada array yang belum terurut*/
		for (j = 0; j < LengthArray - i - 1; j++){
			
			/*jika elemen sebelumnya (elemen kiri) lebih besar daripada elemen selanjutnya (elemen kanan) maka akan ditukarkan*/
			if (array[j] > array[j + 1]){
				swap(&array[j], &array[j + 1]);
			}
		}
	}
}

void printArray(int array[], int LengthArray){ /*prosedur untuk mencetak array*/
/*Kamus lokal*/
	int i; /*counter*/

/*Algoritma*/
	/*perulangan mencetak setiap elemen dalam sebuah array*/
	for (i = 0; i < LengthArray; i++){
		printf("%d ", array[i]);
	}

	printf("\n");
}
