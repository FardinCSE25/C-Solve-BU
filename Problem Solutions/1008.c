#include <stdio.h>
int main()
{
    int Enum, Wh; 
    float A, Sal;
    scanf("%d %d %f", &Enum, &Wh, &A);
    Sal = Wh * A;
    printf("NUMBER = %d\n", Enum);
    printf("SALARY = U$ %.2f\n", Sal);
    return 0;
}