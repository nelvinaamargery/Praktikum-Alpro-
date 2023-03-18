/*Nama File     : NilMax2Tabel*/
/*Deskripsi     : Menampilkan nilai maksimum ke 2 dari tabel T*/
/*Pembuat       : Nelvina Margery/24060122120002*/
/*Tanggal       : Sabtu, 18 Maret 2023, 16.56*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int n;
    int i;
    int max1;
    int max2;

    /*Algoritma*/
    printf("Masukkan jumlah bilangan array:");
    scanf("%d", &n);

    int T[n];

    max1 = 0;
    max2 = 0;
    printf("Masukan %d angka:\n", n);
    for (i = 0;i < n;i++) {
        scanf("%d", &T[i]);
    }
    for (i = 0;i < n;i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        }
        else if (T[i] > max2 && T[i] != max1){
            max2 = T[i];
        }
    }
    printf("\n Nilai yang dimasukkan adalah:");
    for(i=0;i<n;i++){
        printf("%d", T[i]);
    }
    printf("\n Nilai maksimum ke 2 adalah:%d", max2);
    return 0;
}
