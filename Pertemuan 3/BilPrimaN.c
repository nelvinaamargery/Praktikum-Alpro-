/*Nama File : BilPrimaN.c*/
/*Deskripsi : Menghasilkan dan menampilkan bilangan prima sampai dengan bilangan integer sembarang di layar*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Rabu, 8 Maret 2023 14.52*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N;
    int i;
    int P;
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
            for(P=1;P<=i;P++){
                    if(i%P==0){
                        sum=sum+1;
                    }
                }
            if(sum==2){
                printf("%d ", i);
            }
        }
    }
        return 0;
}

