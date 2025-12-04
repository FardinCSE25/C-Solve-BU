#include <stdio.h>

int main() {
    float N;
    int notes100, notes50, notes20, notes10, notes5, notes2, notes1;
    scanf("%d", &N);
    printf("%d\n", N);

    notes100 = N / 100;
    N = N % 100;

    notes50 = N / 50;
    N = N % 50;

    notes20 = N / 20;
    N = N % 20;

    notes10 = N / 10;
    N = N % 10;

    notes5 = N / 5;
    N = N % 5;

    notes2 = N / 2;
    N = N % 2;

    notes1 = N;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", notes100);
    printf("%d nota(s) de R$ 50,00\n", notes50);
    printf("%d nota(s) de R$ 20,00\n", notes20);
    printf("%d nota(s) de R$ 10,00\n", notes10);
    printf("%d nota(s) de R$ 5,00\n", notes5);
    printf("%d nota(s) de R$ 2,00\n", notes2);

    printf("MOEDAS:\n");
    printf("%d nota(s) de R$ 1,00\n", notes1);

    return 0;
}
