#include <stdio.h>
int main()
{
    int a, b, c, greatestAB, greatestALL;
    scanf("%d %d %d", &a, &b, &c);
    greatestAB = (a + b + abs(a - b)) / 2;
    greatestALL = (greatestAB + c + abs(greatestAB - c)) / 2;
    printf("%d eh o maior\n", greatestALL);
    return 0;
}