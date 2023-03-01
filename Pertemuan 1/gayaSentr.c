/*Nama File : gayaSentr*/
/*Deskripsi : Menghitung dan menampilkan Gaya F di layar, F= m x (v^2/r)*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Rabu, 22 Februari 2023, 11.05*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    float m;
    float v;
    float r;
    float F;

    /*Algoritma*/;
    printf("Masukkan massa:");
    scanf("%f", &m);

    printf("Masukkan kecepatan:");
    scanf("%f", &v);

    printf("Masukkan jari-jari:");
    scanf("%f", &r);

    F = m * ((pow(v,2)/r));

    printf("F = %f\n", F);
    return 0;
}
