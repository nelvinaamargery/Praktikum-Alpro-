/*Nama File : luaskellLayang*/
/*Deskripsi : Menghitung dan menampilkan luas layang-layang Luas dan keliling layang-layang Kell dari sebuah layang-layang
              di layar, luas = 1/2 x d1 x d2 dan kell = 2 x (s1+s2)*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Rabu, 22 Februari 2023, 12.52*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/;
    float s1;
    float s2;
    float d1;
    float d2;
    float Luas;
    float Kell;

    /*Algoritma*/;
    printf("Masukkan sisi satu:");
    scanf("%f", &s1);

    printf("Masukkan sisi dua:");
    scanf("%f", &s2);

    printf("Masukkan diagonal satu:");
    scanf("%f", &d1);

    printf("Masukkan diagonal dua:");
    scanf("%f", &d2);

    Luas = 0.5 * d1*d2;
    Kell = 2 * (s1+s2);

    printf("Luas = %f\n", Luas);
    printf("Kell = %f\n", Kell);
    return 0;
}
