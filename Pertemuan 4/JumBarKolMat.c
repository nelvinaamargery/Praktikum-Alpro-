/*Nama File     : JumBarKolMat*/
/*Deskripsi     : Menampilkan jumlah setiap baris dan kolom pada tabel T (matriks)*/
/*Pembuat       : Nelvina Margery/24060122120002*/
/*Tanggal       : Sabtu, 18 Maret 2023, 11.35*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*Kamus*/
    int N,i,j,sumcol,sumrow;

    /*Algoritma*/
    printf("N : ");
    scanf("%d",&N);
    printf("T :\n");

    int T[N][N];

    for(i=0;i<N;i++){
        sumrow = 0;
        for(j=0;j<N;j++){
            scanf("%d",&T[i][j]);
            sumrow += T[i][j];
        }
        printf("%d\n",sumrow);
    }
    for(i=0;i<N;i++){
        sumcol = 0;
        for(j=0;j<N;j++){
            sumcol += T[j][i];
        }
        printf("%d\n", sumcol);
    }
    return 0;
}
