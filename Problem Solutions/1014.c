#include <stdio.h>
int main()
{
    double X, Y, AVGconsumption;
    scanf("%lf %lf", &X, &Y);
    AVGconsumption = X / Y;
    printf("%.3lf km/l\n", AVGconsumption);
    return 0;
}