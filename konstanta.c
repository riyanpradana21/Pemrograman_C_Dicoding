/* FILE : konstanta.c */
/* Nama : I Putu Riyan Pradana */
/* Untuk mendefinisikan konstanta bertype int, float, dan char */

#include <stdio.h>
#define FALSE 0
#define NOL 0
#define SATU 1
#define pi 3.1415
int main()
{
    const int maks = 3;
    const float param = 2.5;
    const char cc = 65;
    const char cA = 'A';
    /* ALGORITMA */
    printf("PI = %6.2f \n", pi);
    printf("NOL = %D \N, NOL");
    printf("SATU = %d \n", SATU);
    printf("FALSE = %d \n", FALSE);
    printf("maks = %d \n", maks);
    printf("param = %f \n", param);
    printf("cc = %c \n", cc);
    printf("cA = %c \n", cA);
    printf("3 \n"); /* Tanpa Memakai Nama, Tidak Disarankan */

    return 0;
}
