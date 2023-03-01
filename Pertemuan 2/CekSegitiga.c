/*Nama File : CekSegitiga.c*/
/*Deskripsi : Mengklasifikasi dan menampilkan segitiga atau bukan di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 28 Februari 2023, 19.47*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int s1;
    int s2;
    int s3;

    /*Algoritma*/
    printf("Masukan 1:");
    scanf("%d", &s1);

    printf("Masukan 2:");
    scanf("%d", &s2);

    printf("Masukan 3:");
    scanf("%d", &s3);

    if (s1 <= 0 || s2 <= 0 || s3 <= 0){
        printf("Terdapat nilai yang bukan sisi segitiga");

        }
        else {
            if ((s1 == s2) && (s1 == s3) && (s2 == s3)) {
                printf("Segitiga sama sisi");
            }
        else if ((s1 == s2)|| (s1 == s3) || (s2 == s3)){
                printf("Segitiga sama kaki");
        }
        else {
                printf("Segitiga sembarang");
        }

        }
        return 0;
}

