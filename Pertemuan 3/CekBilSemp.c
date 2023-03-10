/*Nama File : CekBilSemp.c*/
/*Deskripsi : Mengecek dan menampilkan bilangan integer sembarang tersebut termasuk bilangan sempurna atau bukan di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Rabu, 8 Maret 2023 14.01*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N;
    int i;
    int S=0;

    /*Algoritma*/
    printf("Masukan Bilangan:");
    scanf("%d", &N);
    if(N <= 0){
        printf("N harus bilangan positif");
    }
    else {
        for(i=1;i<N;i++){
            if(N % i == 0){
                S=S+i;
            }
        }
        if(N==S){
            printf("%d adalah bilangan sempurna", N);
        }
        else {
            printf("%d adalah bukan bilangan sempurna", N);
        }
    }
    return 0;
}
