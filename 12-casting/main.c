#include <stdio.h>

int main(void)
{
    //type {expresion}
    int a = 5;
    int b = 2;

    double result = (double) a/b;

    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d / %d = %.2f\n", a, b, result);
    return 0;
}