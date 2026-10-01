#include <stdio.h>

int main() {
    int pasukan = 958730;
    
    // Menyimpan nama pahlawan di dalam array of strings
    char* pahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};
    
    // Menghitung jumlah elemen array secara dinamis
    int jumlah_pahlawan = sizeof(pahlawan) / sizeof(pahlawan[0]);
    int porsi_pasukan = pasukan / jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", porsi_pasukan);

    return 0;
}
