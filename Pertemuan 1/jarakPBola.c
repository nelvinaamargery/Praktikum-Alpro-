/*Nama File : jarakPBola.c*/
/*Deskripsi : Menghitung dan menampilkan Jarak y yang ditempuh benda  di layar, y = v0 x t - 1/2 x (g x t^2)*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Rabu, 22 Februari 2023, 10.48*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    float v0;
    float t;
    float g;
    float y;
    g = 9,8;
    /*Algoritma*/;
    printf("Masukkan kecepatan awal:");
    scanf("%f", &v0);

    printf("Masukkan waktu:");
    scanf("%f", &t);

    printf("Masukkan konstanta:");
    scanf("%f", &g);

    y = v0 * t - 0.5 * (g*pow(t,2));

    printf("y = %f\n", y);
    return 0;
}
