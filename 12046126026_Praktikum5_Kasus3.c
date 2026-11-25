/*
* Program       : Praktikum 5 - Kasus 3 (Tukar Dua Nilai Variabel)
* Nama          : Keyla Nurashieva
* NIM           : 12046126026
* Kelas         : SI-A
* Tanggal       : 25 November 2026
* Deskripsi     : Pass by Reference
*/

#include <stdio.h>

void tukar(int *a, int *b);

int main() {
    int angka_a, angka_b;

    printf("===== PROGRAM TUKAR NILAI =====\n");
    printf("Masukan angka A    : ");
    scanf("%d", &angka_a);
    printf("Masukan angka B    : ");
    scanf("%d", &angka_b);

    printf("\nSebelum tukar: A = %d, B = %d\n", angka_a, angka_b);

    tukar(&angka_a, &angka_b);

    printf("Setelah tukar: A = %d, B = %d\n", angka_a, angka_b);

    return 0;
}

void tukar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}