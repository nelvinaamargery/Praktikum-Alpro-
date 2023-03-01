/*Nama File : bilInteger.c*/
/*Deskripsi : Mengklasifikasi dan menampilkan sebuah bilangan integer atau bukan di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 28 Februari 2023, 16.20*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("Masukan Bilangan:");
    if (scanf("%d", &i)) {
        if (i>=0){
            if (i>0){
                printf("bilangan bulat positif");
            }
            else{
                printf("nol");
            }
        }else{
            printf("bilangan bulat negative");
        }
    }
    else{
        printf("bukan termasuk sebuah bilangan");
    }
    return 0;
}
