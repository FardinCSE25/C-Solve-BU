#include <stdio.h>
int main()
{
    char name;
    double sal, total, final;
    scanf("%s %lf %lf", &name, &sal, &total);
    final = (sal + total * 0.15);
    printf("TOTAL = R$ %.2lf\n", final);
    return 0;
}

