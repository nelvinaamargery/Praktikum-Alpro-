/*Nama File : volBolaKerct*/
/*Deskripsi : Menghitung dan menampilkan volume bola Vb dan volume kerucut Vk dari sebuah lingkaran di layar,
              Vb = 4/3 x (phi x r^3) dan Vk = 1/2 x volume bola*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Rabu, 22 Februari 2023, 11.20*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Kamus*/;
    float r;
    float Vb;
    float Vk;
    float phi;
    phi = 3.14;

    /*Algoritma*/;
    printf("Masukkan jari-jari:");
    scanf("%f", &r);

    Vb = 1.3 * (phi*pow(r,3));
    Vk = 0.5 * (1.3 * (phi*pow(r,3)));

    printf("Vb = %f\n", Vb);
    printf("Vk = %f\n", Vk);
    return 0;
}
