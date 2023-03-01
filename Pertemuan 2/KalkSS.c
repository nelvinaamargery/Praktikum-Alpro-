/*Nama File : KalkSS.c*/
/*Deskripsi : Menghitung dan menampilkan operasi aritmatika sesuai dengan pilihan di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Rabu, 1 Maret 2023, 19.19*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int iA;
    int iB;
    char k;
    int i;
    float i2;

    /*Algoritma*/
    printf("Masukan pilihan menu (a-f):");
    scanf("%c", &k);
    printf("Masukan nilai iA:");
    scanf("%d", &iA);
    printf("Masukan nilai iB:");
    scanf("%d", &iB);

    switch(k){
    case 'a':
        i = iA + iB;
        printf("%d", i);
        break;
    case 'b':
        i = iA - iB;
        printf("%d", i);
        break;
    case 'c':
        i = iA * iB;
        printf("%d", i);
        break;
    case 'd':
        i2 = ((float)iA / (float)iB);
        printf("%.2f", i2);
        break;
    case 'e':
        i = iA / iB;
        printf("%d", i);
        break;
    case 'f':
        i = iA % iB;
        printf("%d", i);
        break;
    default:
        printf("Bukan pilihan menu yang benar");
        }
    return 0;
}

