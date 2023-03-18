/*Nama File     : JumFrekNilTabel*/
/*Deskripsi     : Menampilkan jumlah elemen tabel T yang kemunculannya lebih dari satu kali*/
/*Pembuat       : Nelvina Margery/24060122120002*/
/*Tanggal       : Sabtu, 18 Maret 2023, 20:01*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*Kamus*/
    int n,i,c;
    int F[100];
    /*Algoritma*/
    printf("Masukan nilai bilangan : ");
    scanf("%d",&n);
    printf("Masukan nilai tabel :\n");

    int T[n];

    for(i=0;i<n;i++){
        scanf("%d", &T[i]);
        F[T[i]] += 1;
    }
    for(i=0;i<n;i++){
        if(F[T[i]] > 1 ) {
            c += T[i];
            F[T[i]] = 0;
        }
    }
    printf("%d", c);
    return 0;
}
