/*Nama File : namaHari.c*/
/*Deskripsi : Mengklasifikasi dan menampilkan nama hari atau bukan di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 28 Maret 2023, 16.45*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int hari;

    /*Algoritma*/
    printf("Masukan nomor hari:");
    scanf("%d", &hari);

    switch (hari){
    case 1:
        printf("Minggu");
        break;
    case 2:
        printf("Senin");
        break;
    case 3:
        printf("Selasa");
        break;
    case 4:
        printf("Rabu");
        break;
    case 5:
        printf("Kamis");
        break;
    case 6:
        printf("Jumat");
        break;
    case 7:
        printf("Sabtu");
        break;
    default:
        printf("Masukan nomor hari tidak tepat ");
    }
    return 0;
}
