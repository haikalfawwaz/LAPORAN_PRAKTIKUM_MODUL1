#include<stdio.h>

int main(){
    int putaran = 5;
    int jarak = 14;
    float phi = 3.14;

    float r = (float)jarak / (  2 * phi * putaran);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);

    return 0;
}