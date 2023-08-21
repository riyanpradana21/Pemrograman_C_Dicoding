/* FILE : char.c */
/* Nama : I Putu Riyan Pradana */
/* Program Untuk Mendefinisikan sebuah karakter */

#include <stdio.h>
int main()
{
    char c = 100; /* inisialisasi nilai karakter dengan 65, kode huruf ‘A’ */
    char c1;

    /* ALGORITMA (Penulisan karakter sebagai huruf)*/
    printf("Karakter : %c \n", c);
    c1 = 'Z'; /* Variabel c1 diisi dengan huruf Z */
    printf("Karakter : %c \n", c1);

    /* penulisan karakter */
    printf("Karakter dalam kode ASCII = %d \n", c);
    printf("Karakter dalam huruf = %c \n", c);
    printf("Karakter dalam kode ASCII = %d \n", c1);
    printf("Karakter dalam huruf = %c \n", c1);

    return 0;
}
