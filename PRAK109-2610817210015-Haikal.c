#include <stdio.h>

int main() {
    int pasukan = 958730;
    
    char* pahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};
    
    int jumlah_pahlawan = sizeof(pahlawan) / sizeof(pahlawan[0]);
    int porsi_pasukan = pasukan / jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", pasukan);
    printf("Jumlah pahlawan = %d\n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", porsi_pasukan);

    return 0;
}
