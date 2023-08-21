/* File : bacanum.c */
/* Nama : Riyan Pradana */
/* untuk membaca nilai numerik */
#include <stdio.h>
int main()
{
    int a;
    float x;
    /* PROGRAM */
    printf("Contoh Membaca dan menulis, ketuk nilai interger : ");
    scanf("%d, &a"); /* membaca nilai a yang bertype integer perhatikan bahwa nama variabel ditulis dg &a*/
    printf("nilai yang dibaca : %d \n", a);

    printf("ketuk sebuah bilangan riil : ");
    scanf("%f, &x");
    printf("nilai yang dibaca : %f \n", x);

    /* coba ketik : scanf(%d a) dan tuliskan nilainya, lihatlah akibatnya ! */
    /* coba ketik : scanf(%f x) dan tuliskan nilainya, lihatlah akibatnya ! */
    return 0;
}
