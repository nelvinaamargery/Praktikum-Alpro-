/*Nama File : CekBilPrima.c*/
/*Deskripsi : Mengecek dan menampilkan bilangan integer tersebut termasuk bilangan prima atau bukan di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Selasa, 7 Maret 2023 23.48*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N;
    int i;
    int P = 0;

    /*Algoritma*/
    printf("Masukan Bilangan:");
    scanf("%d", &N);
    if(N <= 0){
        printf("N harus bilangan integer positif");
    }
    else {
        for(i=1;i <= N;i++){
            if(N%i == 0){
                P = P+1;
            }
        }
        if(P==2){
            printf("%d adalah bilangan prima", N);
        }
        else {
            printf("%d adalah bukan bilangan prima", N);
        }
    }
    return 0;
}
