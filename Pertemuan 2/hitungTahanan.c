/*Nama File : hitungTahanan.c*/
/*Deskripsi : Menghitung dan menampilkan tahanan bernilai negatif atau tidak di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 28 Februari 2023, 17.29*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int tahanan1;
    int tahanan2;
    int tahanan3;
    int total;

    /*Algoritma*/
    printf("Masukan tahanan 1:");
    scanf("%d", &tahanan1);

    printf("Masukan tahanan 2:");
    scanf("%d", &tahanan2);

    printf("Masukan tahanan 3:");
    scanf("%d", &tahanan3);

    if(tahanan1>=0 || tahanan2>=0 || tahanan3>=0){
        total = tahanan1 + tahanan2 + tahanan3;
        printf("Total tahanan = %d", total);
    }else{
        printf("Masukan tahanan tidak boleh negatif");
    }
    return 0;
}
