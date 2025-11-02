#include <stdio.h>
int main()
{
    double A, B, W1 = 3.5, W2 = 7.5, MEDIA;
    scanf("%lf %lf", &A, &B);
    MEDIA = (A * W1 + B * W2)/(W1 + W2);
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}