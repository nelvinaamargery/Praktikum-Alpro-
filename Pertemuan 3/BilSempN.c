/*Nama File : BilSempN.c*/
/*Deskripsi : Mencetak dan menampilkan bilangan sempurna sampai dengan bilangan integer sembarang N di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Rabu, 8 Maret 2023 22.13*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N;
    int i;
    int S;
    int sum;

    /*Algoritma*/
    printf("Masukan Bilangan:");
    scanf("%d", &N);
    if(N<=0){
        printf("N harus bilangan positif");
    }
    else {
        for(i=1;i<=N;i++){
            sum = 0;
            for(S=1;S<i;S++) {
                if(i% S == 0){
                    sum+=S;
                }
            }
            if(sum==i){
                printf("%d ", i);
            }
        }
    }
    return 0;
}
