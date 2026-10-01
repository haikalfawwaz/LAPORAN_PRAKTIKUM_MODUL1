#include<stdio.h>

int main() {
    int a = 9, b = 6, x = 10, y = 7;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", x);
    printf("Variabel x bernilai %d\n", y);

    printf("Jumlah variabel tersebut adalah %.2f\n", (float)(a + b) * x / y);

    return 0;
}