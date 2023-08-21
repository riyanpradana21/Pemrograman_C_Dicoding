/* Nama : I Putu Riyan Pradana */
/* Untuk Menghitung Luas Persegi */

#include <stdio.h>
int main(void)
{
    printf("Program Menghitung Luas Persegi\n");
    printf("===============================\n");

    float p, l;

    printf("Input sisi persegi : ");
    scanf("%f", &p);

    printf("Input Lebar Persegi : ");
    scanf("%f", &l);

    printf("Luas Persegi Panjang = %.2f \n", p * l);

    return 0;
}
