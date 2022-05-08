/*Nama File     : insertion_Sort.c*/
/*Deskripsi     : Melakukan sorting sebuah urutan angka dengan algoritma insertion sort dari bilangan terkecil ke terbesar*/
/*Pembuat       : Luciano Rizky Pratama - 24060121140156*/
/*Tgl Pembuatan : Minggu, 08 Mei 2022*/

/*Header file*/
#include <stdio.h>
#include <math.h>

/*Program Utama*/
int main(){ 
/*Kamus*/
	int N; /*banyaknya bilangan (panjang array)*/
	int i; /*counter loop input bilangan yang ingin diurutkan*/
	void insertionSort(int array[], int LengthArray); /*deklarasi prosedur insertionSort*/
	void printArray(int array[], int LengthArray);    /*deklarasi prosedur printArray*/

/*Algoritma*/
	printf("Insertion Sort Program \n");
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
	
	insertionSort(arr, N); /*memanggil prosedur insertionSort untuk mengurutkan array*/
	
	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N); /*mencetak array setelah diurutkan*/
	
	return 0;
}

void insertionSort(int array[], int LengthArray){ /*prosedur untuk menjalankan insertion sort*/
/*Kamus lokal*/
	int i; /*counter loop siklus sorting*/
	int j; /*counter loop memindahkan posisi*/
	int center; /*variabel penampung untuk elemen yang dijadikan poros*/
	
/*Algoritma*/
	/*looping siklus sorting array yang belum terurut*/
	for (i = 1; i < LengthArray; i++){
		/*menentukan elemen yang dijadikan sebagai poros*/
		center = array[i];
		
		j = i - 1;

		/*memindahkan posisi elemen yang lebih besar dari center ke posisi kanan atau selanjutnya dari posisi saat ini*/
		while (j >= 0 && array[j] > center){
			array[j + 1] = array[j];
			j -= 1;
		}
		
		/*center dipindahkan ke posisi yang tepat yaitu sebelah kiri dari elemen yang lebih besar dari center dan sebelah kanan dari elemen yang lebih kecil dari center*/
		array[j + 1] = center;
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
