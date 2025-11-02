#include <stdio.h>
int main()
{
    double A, B, C, W1 = 2, W2 = 3, W3 = 5, MEDIA;
    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA = (A * W1 + B * W2 + C * W3)/(W1 + W2 + W3);
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}