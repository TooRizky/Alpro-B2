/*Nama File     : selection_Sort.c*/
/*Deskripsi     : Melakukan sorting sebuah urutan angka dengan algoritma selection sort dari bilangan terkecil ke terbesar*/
/*Pembuat       : Luciano Rizky Pratama - 24060121140156*/
/*Tgl Pembuatan : Minggu, 08 Mei 2022*/

/*Header file*/
#include <stdio.h>

/*Program Utama*/
int main(){ 
/*Kamus*/
	int N; /*banyaknya bilangan atau panjang array*/
	int i; /*counter loop input bilangan yang ingin diurutkan*/
	void swap(int* x, int* y); 					   /*deklarasi prosedur swap*/
	void selectionSort(int array[], int LengthArray); /*deklarasi prosedur selectionSort*/
	void printArray(int array[], int LengthArray);    /*deklarasi prosedur printArray*/

/*Algoritma*/
    printf("Selection Sort Program \n");
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
	
	selectionSort(arr, N); /*memanggil prosedur selectionSort untuk mengurutkan array*/
	
	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N); /*mencetak array setelah diurutkan*/
	
	return 0;
}

void swap(int* x, int* y){ /*prosedur untuk swap atau menukar posisi*/
/*Kamus lokal*/
	int temp; /*variabel penampung*/

/*Algoritma*/
	temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort(int array[], int LengthArray){
/*Kamus lokal*/
	int i; /*counter loop siklus sorting*/
	int j; /*counter loop pencarian elemen terkecil*/
	int smallElmt; /*elemen terkecil dari array yang belum terurut*/

/*Algoritma*/
	/*looping siklus sorting array yang belum terurut*/
	for (i = 0; i < LengthArray-1; i++){
		smallElmt = i;
		
		/*looping mencari elemen terkecil dari array yang belum terurut*/
		for (j = i+1; j < LengthArray; j++){
			if (array[j] < array[smallElmt])
				smallElmt = j;
		}

		/*menukar posisi elemen terkecil dengan elemen pertama array yang belum terurut*/
		swap(&array[smallElmt], &array[i]);
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
