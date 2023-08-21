/* FILE : assignfloat.c */
/* Nama : I Putu Riyan Pradana */
/* Memprogram Mengisi Variabel i yg bertype in bernilai 5 dan menuliskannya */

#include <stdio.h>
int main()
{
    float f = 0.555;
    float x = 0.2E5;

    printf("Ini adalah nilai dari f : %f \n", f);
    printf("ini adalah nilai dari f : %5.2f \n", f);
    printf("Ini adalah nilai dari x : %10.2f \n", x);

    return 0;
}
