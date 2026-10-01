#include<stdio.h>

int main() {
    int sisi_1 = 4, sisi_2 = 5, sisi_3 = 7;
    int harga_permeter = 85000;

    int keliling = sisi_1 + sisi_2 + sisi_3;
    long long total_biaya = (long long)keliling * harga_permeter;

    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi_1, sisi_2, sisi_3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_permeter);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah %lld\n", total_biaya);

    return 0;
}