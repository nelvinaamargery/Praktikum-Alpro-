/*Nama File : jarakGLBB*/
/*Deskripsi : Menghitung dan menampilkan jarak S di layar, S= v0 x t + 1/2 x (a x t^2)*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 21 Februari 2023, 17.56*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/;
    float v0;
    float t;
    float a;
    float S;

    /*Algoritma*/;
    printf("Masukkan kecepatan awal :");
    scanf("%f", &v0);

    printf("Masukkan waktu:");
    scanf("%f", &t);

    printf("Masukkan percepatan:");
    scanf("%f", &a);

    S = v0 * t + 0.5 * (a*pow(t,2));

    printf("S = %f\n", S);
    return 0;
}
