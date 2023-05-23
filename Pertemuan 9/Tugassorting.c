/*Nama File : sorting.c*/
/*Deskripsi : Membuat array acak dan mengurutkannya*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 23 Mei 2023, 11.43*/

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int array[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int findMax(int array[], int n){
    int max = array[0];
    for(int i = 1;i < n;i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

void CountingSort(int array[], int n) {
    int i;
    int max = findMax(array, n);
    int* count = (int*)malloc((max+1) * sizeof(int));

    for(int i = 0; i<= max; i++){
        count[i] = 0;
    }
    for(int i = 0;i< n;i++){
        count[array[i]]++;
    }
    for (int i = 1;i<= max;i++){
        count[i] += count[i-1];
    }
    int* sortedArray = (int*)malloc(n * sizeof(int));

    for(int i = n-1;i>= 0;i--){
        sortedArray[count[array[i]]-1] = array[i];
        count[array[i]]--;
    }
    for(int i = 0;i < n;i++){
        array[i] = sortedArray[i];
    }
    free(count);
    free(sortedArray);

}

void InsertionSort(int array[], int n){
    //Kamus
    int i;
    int temp;
    int j;

    //Algoritma
    for(i=1;i<n;i++){
        temp=array[i];
        j=i-1;
        while (j>=0 && array[j]>temp){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=temp;
    }
}

void SelectionSort(int array[], int n){
    //Kamus
    int i;
    int j;
    int min;
    int temp;

    //Algoritma
    for(i=0;i<n;i++){
        min = i; //inisiasi nilai min
        for(j=i;j<n;j++){ //iterasi mencari nilai terkecil
            if(array[j] <array[min]) { //perbandingan
                min= j;
            }
        }
        //pertukaran
        temp=array[min];
        array[min] = array[i];
        array[i]=temp;
    }
}

int main()
{
    //Kamus
    char sort;
    int n;
    int i;

    //Algoritma
    printf("Masukkan Panjang array : "); //input panjang array
    scanf("%d", &n);

    int array[n];
    printf("\nMasukkan arraynya : ");  //input isi array
    for (int i = 0; i<n; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nArray yang belum terurut : ");  //output array mentah
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\nPilih sort yang digunakan : ");
    scanf(" %c", &sort);

    switch(sort){
        case 'A':
            printf("\nSorting yang digunakan adalah Bubble Sort\n");
            BubbleSort(array, n);
            break;
        case 'B':
            printf("\nSorting yang digunakan adalah Counting Sort\n");
            CountingSort(array, n);
            break;
        case 'C':
            printf("\nSorting yang digunakan adalah Insertion Sort\n");
            InsertionSort(array, n);
            break;
        case 'D':
            printf("\nSorting yang digunakan adalah Selection Sort\n");
            SelectionSort(array, n);
            break;
    }
    printf("\nArray yang sudah terurut : ");
    for (int i = 0; i<n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
