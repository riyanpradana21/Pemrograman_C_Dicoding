/* Nama : I Putu Riyan Pradana */
/* Untuk Menghitung jarak tempuh antar kota a ke kota b */

#include <stdio.h>

float fungsi_jarak(float kecepatan, float waktu)
{
    float jarak;

    jarak = kecepatan * waktu;
    return jarak;
}

void main()
{
    float kecepatan, waktu, jarak;

    printf("Masukkan besar kecepatan dalam kota a ke kota b (dalam satuan km/h) : ");
    scanf("%f", &kecepatan);

    printf("Masukkan besar dalam waktu jam : ");
    scanf("%f", &waktu);

    jarak = fungsi_jarak(kecepatan, waktu);
    printf("\nMaka jarak yang ditempuh dari kota a ke kota b adalah %fkm", jarak);

}
