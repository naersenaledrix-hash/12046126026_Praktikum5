/*
* Program       : Praktikum 5 - Kasus 2 (Sistem Gaji Karyawan)
* Nama          : Keyla Nurashieva
* NIM           : 12046126026
* Kelas         : SI-A
* Tanggal       : 25 November 2026
* Deskripsi     : Fungsi dengan return
*/

#include <stdio.h> 

float hitungTunjangan (float gaji_pokok);
float hitungLembur (int jam);
float hitungGajiTotal (float haji_pokok, float tunjangan, float lembur);

int main () {
    float gaji_pokok;
    int jam_lembur;

    printf("======= SISTEM PENGGAJIAN KARYAWAN =======\n");
    printf ("Masukan gaji pokok     : ");
    scanf ("%f", &gaji_pokok);
    printf ("Masukan jam lembur     : ");
    scanf ("%d", &jam_lembur);

    float tunjangan = hitungTunjangan (gaji_pokok);
    float upah_lembur = hitungLembur (jam_lembur);
    float total = hitungGajiTotal (gaji_pokok, tunjangan, upah_lembur);

    printf ("\n============== RINCIAN GAJI =============\n");
    printf ("Gaji pokok             : Rp. %.2f\n", gaji_pokok);
    printf ("Tunjangan              : Rp. %.2f\n", tunjangan);
    printf ("Upah Lembur            : Rp. %.2f\n", upah_lembur);
    printf ("-----------------------------------------\n");
    printf ("GAJI TOTAL             : Rp. %.2f\n", total);
    printf ("=========================================\n");
    return 0;
}

float hitungTunjangan (float gaji_pokok) {
    return gaji_pokok * 0.10;
}
float hitungLembur (int jam) {
    return jam * 25000.0;
}
float hitungGajiTotal (float gaji_pokok, float tunjangan, float lembur) {
    return gaji_pokok + tunjangan + lembur;
}