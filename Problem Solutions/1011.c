#include <stdio.h>
int main()
{
    double R, pi = 3.14159, Vol;
    scanf("%lf", &R);
    Vol = 4/3.0 * pi * (R * R * R);
    printf("VOLUME = %.3lf\n", Vol);
    return 0;
}