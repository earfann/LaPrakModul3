#include<stdio.h>
    int main(){
        float pertama, kedua, hasil;
        printf("INPUT\n");
        printf("Masukkan Nilai Pertama  : ");
        scanf("%f", &pertama);
        printf("Masukkan Nilai Kedua    : ");
        scanf("%f", &kedua);
        hasil = pertama + kedua;
        printf("OUTPUT\n");
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", pertama, kedua, hasil);
        return 0;
    }