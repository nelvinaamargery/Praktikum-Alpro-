/*Nama File : namaBulan.c*/
/*Deskripsi : Mengklasifikasi dan menampilkan nama bulan atau bukan di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 28 Februari 2023, 17.11*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int bulan;

    /*Algoritma*/
    printf("Masukan nomor bulan:");
    scanf("%d", &bulan);

    switch (bulan){
    case 1:
        printf("Januari");
        break;
    case 2:
        printf("Februari");
        break;
    case 3:
        printf("Maret");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Mei");
        break;
    case 6:
        printf("Juni");
        break;
    case 7:
        printf("Juli");
        break;
    case 8:
        printf("Agustus");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("Oktober");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("Desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;
}
