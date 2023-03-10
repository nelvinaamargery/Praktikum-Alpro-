/*Nama File : JumDeret.c*/
/*Deskripsi : Menghitung dan menampilkan jumlah total deret bilangan dari N integer sembarang di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 7 Maret 2023 22.40*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N;
    int i;
    int j=0;

    /*Algoritma*/
    printf("Masukan nilai N:");
    scanf("%d", &N);
    if(N <= 0){
        printf("Nilai N harus positif");
    }
    else {
        for(i = 1; i <= N;i++) {
            j = j+i;
        }
        printf("%d ", j);
    }
        return 0;
}

