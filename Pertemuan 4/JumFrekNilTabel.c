/*Nama File : JumFrekNilTabel*/
/*Deskripsi : menampilkan jumlah nilai elemen tabel T yang kemunculannya lebih dari 1 kali*/
/*Pembuat   : Nelvina Margery - 24060122120002*/
/*Tanggal   : Minggu, 19 Maret 2023, 18.50*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int T[10] = {7,4,5,7,6,5,3,4,1,5};
    int i, j, c, sum = 0;

    /*Algoritma*/
    printf("Tabel T : ");
    for(i = 0; i <= 9; i++){
        printf("%d ", T[i]);
    }

    for(i = 0; i <= 10; i++){
        c = 1;
        for(j = i + 1; j <= 10; j++){ //{7,4,2,6,7,5,5,5,3}
            if(T[i] != 0 && T[i] == T[j]){
                c = c + 1;
                T[j] = 0;
            }
        }
        //printf("\n%d", c);
        if(c != 1){
                sum = sum + (c * T[i]);
        }
    }
    printf("\nJumlah nilai elemen tabel T yang frekuensinya lebih dari satu adalah : %d\n", sum);
    return 0;
}
