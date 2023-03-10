/*Nama File : FaktorBil.c*/
/*Deskripsi : Menghitung dan menampilkan faktor bilangan yang dapat dibentuk oleh bilangan N (N>0) integer sembarang di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 7 Maret 2023 23.21*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N;
    int i;

    /*Algoritma*/
    printf("Masukan Bilangan:");
    scanf("%d", &N);
    if(N <= 0){
        printf("N harus bilangan integer positif");
    }
    else {
        for(i = 1;i <= N;i++){
            if(N % i == 0){
                printf("%d ", i);
            }
        }
    }
        return 0;
}
