/*Nama File     : FrekNilTabel*/
/*Deskripsi     : Menampilkan nilai elemen tabel T yang kemunculannya lebih dari satu kali*/
/*Pembuat       : Nelvina Margery/24060122120002*/
/*Tanggal       : Sabtu, 18 Maret 2023, 19.05*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int T[10] = {7,4,5,7,6,5,3,4,1,5};
    int n = 10, i, j, cns;

    /*Algoritma*/
    printf("Elemen yang muncul lebih dari satu kali: ");
    for (i = 0; i < n; i++) {
        cns = 1;
        for(j =i+1; j < n; j++){
            if(T[i] != 0 && T[i]== T[j]){
                cns = cns + 1;
                T[j] = 0;
            }
        }
        if (cns != 1) {
                printf("%d ", T[i]);
            }
    }
    return 0;
}
