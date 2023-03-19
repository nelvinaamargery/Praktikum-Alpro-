/*Nama File     : JumBarKolMat*/
/*Deskripsi     : Menampilkan jumlah setiap baris dan kolom pada tabel T (matriks)*/
/*Pembuat       : Nelvina Margery/24060122120002*/
/*Tanggal       : Minggu, 19 Maret 2023, 19.15*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*Kamus*/
    int i,j,sumcol,sumrow;

    /*Algoritma*/
    int T[3][3] = {{1,3,5}, {2,5,2}, {4,2,4}};

    for(i=0;i<3;i++){
        sumrow = 0;
        for(j=0;j<3;j++){
            sumrow += T[i][j];
        }
        printf("%d\n", sumrow);
    }
    for(i=0;i<3;i++){
        sumcol = 0;
        for(j=0;j<3;j++){
            sumcol += T[j][i];
        }
        printf("%d\n", sumcol);
    }
    return 0;
}
